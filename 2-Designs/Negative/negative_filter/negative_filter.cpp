#include "negative_filter.hpp"

void rgb2negative(video_stream& stream_in, video_stream& stream_out) {
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

        // Aplicar filtro de negativo a los componentes RGB
        new_r = 255 - r;
        new_g = 255 - g;
        new_b = 255 - b;

        // Combinar los componentes en un solo píxel
        curr_pixel.data = (new_b, new_g, new_r);

        stream_out.write(curr_pixel);
    }
}
