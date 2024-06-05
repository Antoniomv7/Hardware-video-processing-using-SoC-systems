/*#include "sepia_filter.hpp"

void rgb2sepia(video_stream& stream_in, video_stream& stream_out) {
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=stream_in
#pragma HLS INTERFACE axis port=stream_out

#pragma HLS pipeline II=1

    pixel_data curr_pixel;
    pixel_type r, g, b;
    pixel_type new_r, new_g, new_b;

    while (!stream_in.empty()) {
        stream_in.read(curr_pixel);

        // Extraer componentes RGB
        r = curr_pixel.data(23, 16);
        g = curr_pixel.data(15, 8);
        b = curr_pixel.data(7, 0);

        // Aplicar filtro sepia a los componentes RGB
        new_r = (0.393*r)+(0.769*g)+(0.189*b);
        new_g = (0.349*r)+(0.686*g)+(0.168*b);
        new_b = (0.272*r)+(0.534*g)+(0.131*b);

        // Combinar los componentes en un solo píxel
        curr_pixel.data = (new_b, new_g, new_r);

        stream_out.write(curr_pixel);
    }
}*/

#include "sepia_filter.hpp"

void rgb2sepia(video_stream& stream_in, video_stream& stream_out) {
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=stream_in
#pragma HLS INTERFACE axis port=stream_out

#pragma HLS pipeline II=1

    pixel_data curr_pixel;
    pixel_type r, g, b;
    pixel_type new_r, new_g, new_b;

    while (!stream_in.empty()) {
        stream_in.read(curr_pixel);

        // Extraer componentes RGB
        r = curr_pixel.data(23, 16);
        g = curr_pixel.data(15, 8);
        b = curr_pixel.data(7, 0);

        // Optimización: Uso de aproximaciones enteras y desplazamientos
        // Coeficientes aproximados y convertidos a enteros
        int coef_r_r = 40; // Aproximación de 0.393 * 102
        int coef_r_g = 78; // Aproximación de 0.769 * 102
        int coef_r_b = 19; // Aproximación de 0.189 * 102

        int coef_g_r = 36; // Aproximación de 0.349 * 102
        int coef_g_g = 70; // Aproximación de 0.686 * 102
        int coef_g_b = 17; // Aproximación de 0.168 * 102

        int coef_b_r = 28; // Aproximación de 0.272 * 102
        int coef_b_g = 54; // Aproximación de 0.534 * 102
        int coef_b_b = 13; // Aproximación de 0.131 * 102

        // Aplicar filtro sepia con aproximaciones y desplazamientos
        new_r = (coef_r_r * r + coef_r_g * g + coef_r_b * b) >> 7;
        new_g = (coef_g_r * r + coef_g_g * g + coef_g_b * b) >> 7;
        new_b = (coef_b_r * r + coef_b_g * g + coef_b_b * b) >> 7;

        // Combinar los componentes en un solo píxel
        curr_pixel.data = (new_b, new_g, new_r);

        stream_out.write(curr_pixel);
    }
}

