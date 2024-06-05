#include "color_conversion.hpp"
#include <iostream>

int main() {
    video_stream in, out;
    pixel_data curr_pixel;

    // Simulaci�n de un p�xel en formato RGB (120, 50, 200)
    curr_pixel.data = 0x7850C8;
    in.write(curr_pixel);

    rgb2yuv(in, out);

    out.read(curr_pixel);
    std::cout << "Resultado de la conversi�n a YUV: " << std::hex << curr_pixel.data << std::dec << std::endl;

    return 0;
}
