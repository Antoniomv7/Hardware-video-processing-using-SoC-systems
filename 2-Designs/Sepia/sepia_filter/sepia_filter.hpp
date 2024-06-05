#include <ap_int.h>
#include "hls_stream.h"
#include <ap_axi_sdata.h>

typedef ap_uint<8> pixel_type;
typedef ap_axiu<24,1,1,1> pixel_data;
typedef hls::stream<pixel_data> video_stream;

void rgb2sepia(video_stream& stream_in, video_stream& stream_out);
