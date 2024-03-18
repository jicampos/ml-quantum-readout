#ifndef NN_AXI_H_
#define NN_AXI_H_

#include <iostream>
#include "NN.h"
#include "hls_stream.h"

static const unsigned N_IQ_IN = 770;             // (2, 770)
static const unsigned N_IQ_WINDOW_IN = 100;      // (2, 100)
static const unsigned N_IQ_OFFSET_IN = 285;      // (2, 285)
//static const unsigned N_OUT = 2;
static const unsigned N_CONFIGS = 2;


typedef hls::stream< ap_uint<32> > input_axi_t;
typedef float output_axi_t;
typedef float output_t;

//void NN_axi(input_axi_t &in, output_axi_t out[N_OUT], bool trigger, unsigned *scaler, unsigned *trigger_delay);
void NN_axi(input_axi_t &in, bool trigger, unsigned *scaler, unsigned *trigger_delay, output_t *g_logit, output_t *e_logit);
#endif
