#include "color_conversion.hpp"

// Definiendo tipos de datos de punto fijo
typedef ap_fixed<16, 8> fixed_type; // 16 bits en total, 8 bits para la parte entera

void rgb2yuv(video_stream& stream_in, video_stream& stream_out) {
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=stream_in
#pragma HLS INTERFACE axis port=stream_out

#pragma HLS pipeline II=1

    pixel_data curr_pixel;
    pixel_type r, g, b;
    fixed_type y, u, v;

    // Constantes precalculadas para la conversión
    const fixed_type Kr = 0.299;
    const fixed_type Kg = 0.587;
    const fixed_type Kb = 0.114;
    const fixed_type Ku = -0.147;
    const fixed_type Kv = 0.615;
    const fixed_type offset = 128;

    while (!stream_in.empty()) {
        #pragma HLS loop_tripcount min=1 max=1920 // Ajustar según el tamaño de imagen esperado
        stream_in.read(curr_pixel);

        // Extraer componentes RGB
        r = curr_pixel.data(23, 16);
        g = curr_pixel.data(15, 8);
        b = curr_pixel.data(7, 0);

        // Conversión de RGB a YUV con aritmética de punto fijo
        y = Kr * r + Kg * g + Kb * b;
        u = Ku * r - Kg * g + Kb * b + offset;
        v = Kv * r - Kg * g - Kb * b + offset;

        // Combinar los componentes YUV en un solo píxel
        curr_pixel.data = (v, u, y);

        stream_out.write(curr_pixel);
    }
}

