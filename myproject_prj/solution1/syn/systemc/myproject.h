// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _myproject_HH_
#define _myproject_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "zeropad2d_cl_array_array_ap_fixed_8u_config4_s.h"
#include "conv_2d_cl_array_array_ap_fixed_8u_config2_s.h"
#include "fifo_w16_d25_A.h"
#include "start_for_conv_2d_cl_array_array_ap_fixed_8u_config2_U0.h"

namespace ap_rtl {

struct myproject : public sc_module {
    // Port declarations 54
    sc_in< sc_lv<16> > input_1_V_data_0_V_TDATA;
    sc_in< sc_lv<16> > input_1_V_data_1_V_TDATA;
    sc_in< sc_lv<16> > input_1_V_data_2_V_TDATA;
    sc_in< sc_lv<16> > input_1_V_data_3_V_TDATA;
    sc_in< sc_lv<16> > input_1_V_data_4_V_TDATA;
    sc_in< sc_lv<16> > input_1_V_data_5_V_TDATA;
    sc_in< sc_lv<16> > input_1_V_data_6_V_TDATA;
    sc_in< sc_lv<16> > input_1_V_data_7_V_TDATA;
    sc_out< sc_lv<16> > layer2_out_V_data_0_V_TDATA;
    sc_out< sc_lv<16> > layer2_out_V_data_1_V_TDATA;
    sc_out< sc_lv<16> > layer2_out_V_data_2_V_TDATA;
    sc_out< sc_lv<16> > layer2_out_V_data_3_V_TDATA;
    sc_out< sc_lv<16> > layer2_out_V_data_4_V_TDATA;
    sc_out< sc_lv<16> > layer2_out_V_data_5_V_TDATA;
    sc_out< sc_lv<16> > layer2_out_V_data_6_V_TDATA;
    sc_out< sc_lv<16> > layer2_out_V_data_7_V_TDATA;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > input_1_V_data_0_V_TVALID;
    sc_out< sc_logic > input_1_V_data_0_V_TREADY;
    sc_in< sc_logic > input_1_V_data_1_V_TVALID;
    sc_out< sc_logic > input_1_V_data_1_V_TREADY;
    sc_in< sc_logic > input_1_V_data_2_V_TVALID;
    sc_out< sc_logic > input_1_V_data_2_V_TREADY;
    sc_in< sc_logic > input_1_V_data_3_V_TVALID;
    sc_out< sc_logic > input_1_V_data_3_V_TREADY;
    sc_in< sc_logic > input_1_V_data_4_V_TVALID;
    sc_out< sc_logic > input_1_V_data_4_V_TREADY;
    sc_in< sc_logic > input_1_V_data_5_V_TVALID;
    sc_out< sc_logic > input_1_V_data_5_V_TREADY;
    sc_in< sc_logic > input_1_V_data_6_V_TVALID;
    sc_out< sc_logic > input_1_V_data_6_V_TREADY;
    sc_in< sc_logic > input_1_V_data_7_V_TVALID;
    sc_out< sc_logic > input_1_V_data_7_V_TREADY;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > layer2_out_V_data_0_V_TVALID;
    sc_in< sc_logic > layer2_out_V_data_0_V_TREADY;
    sc_out< sc_logic > layer2_out_V_data_1_V_TVALID;
    sc_in< sc_logic > layer2_out_V_data_1_V_TREADY;
    sc_out< sc_logic > layer2_out_V_data_2_V_TVALID;
    sc_in< sc_logic > layer2_out_V_data_2_V_TREADY;
    sc_out< sc_logic > layer2_out_V_data_3_V_TVALID;
    sc_in< sc_logic > layer2_out_V_data_3_V_TREADY;
    sc_out< sc_logic > layer2_out_V_data_4_V_TVALID;
    sc_in< sc_logic > layer2_out_V_data_4_V_TREADY;
    sc_out< sc_logic > layer2_out_V_data_5_V_TVALID;
    sc_in< sc_logic > layer2_out_V_data_5_V_TREADY;
    sc_out< sc_logic > layer2_out_V_data_6_V_TVALID;
    sc_in< sc_logic > layer2_out_V_data_6_V_TREADY;
    sc_out< sc_logic > layer2_out_V_data_7_V_TVALID;
    sc_in< sc_logic > layer2_out_V_data_7_V_TREADY;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > ap_idle;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    myproject(sc_module_name name);
    SC_HAS_PROCESS(myproject);

    ~myproject();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    zeropad2d_cl_array_array_ap_fixed_8u_config4_s* zeropad2d_cl_array_array_ap_fixed_8u_config4_U0;
    conv_2d_cl_array_array_ap_fixed_8u_config2_s* conv_2d_cl_array_array_ap_fixed_8u_config2_U0;
    fifo_w16_d25_A* layer4_out_V_data_0_V_U;
    fifo_w16_d25_A* layer4_out_V_data_1_V_U;
    fifo_w16_d25_A* layer4_out_V_data_2_V_U;
    fifo_w16_d25_A* layer4_out_V_data_3_V_U;
    fifo_w16_d25_A* layer4_out_V_data_4_V_U;
    fifo_w16_d25_A* layer4_out_V_data_5_V_U;
    fifo_w16_d25_A* layer4_out_V_data_6_V_U;
    fifo_w16_d25_A* layer4_out_V_data_7_V_U;
    start_for_conv_2d_cl_array_array_ap_fixed_8u_config2_U0* start_for_conv_2d_cl_array_array_ap_fixed_8u_config2_U0_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_ap_start;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_ap_done;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_ap_continue;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_ap_idle;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_ap_ready;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_start_out;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_start_write;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_data_V_data_0_V_TREADY;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_data_V_data_1_V_TREADY;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_data_V_data_2_V_TREADY;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_data_V_data_3_V_TREADY;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_data_V_data_4_V_TREADY;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_data_V_data_5_V_TREADY;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_data_V_data_6_V_TREADY;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_data_V_data_7_V_TREADY;
    sc_signal< sc_lv<16> > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_0_V_din;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_0_V_write;
    sc_signal< sc_lv<16> > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_1_V_din;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_1_V_write;
    sc_signal< sc_lv<16> > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_2_V_din;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_2_V_write;
    sc_signal< sc_lv<16> > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_3_V_din;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_3_V_write;
    sc_signal< sc_lv<16> > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_4_V_din;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_4_V_write;
    sc_signal< sc_lv<16> > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_5_V_din;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_5_V_write;
    sc_signal< sc_lv<16> > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_6_V_din;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_6_V_write;
    sc_signal< sc_lv<16> > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_7_V_din;
    sc_signal< sc_logic > zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_res_V_data_7_V_write;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_ap_start;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_ap_done;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_ap_continue;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_ap_idle;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_ap_ready;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_data_V_data_0_V_read;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_data_V_data_1_V_read;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_data_V_data_2_V_read;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_data_V_data_3_V_read;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_data_V_data_4_V_read;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_data_V_data_5_V_read;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_data_V_data_6_V_read;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_data_V_data_7_V_read;
    sc_signal< sc_lv<16> > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_0_V_TDATA;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_0_V_TVALID;
    sc_signal< sc_lv<16> > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_1_V_TDATA;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_1_V_TVALID;
    sc_signal< sc_lv<16> > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_2_V_TDATA;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_2_V_TVALID;
    sc_signal< sc_lv<16> > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_3_V_TDATA;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_3_V_TVALID;
    sc_signal< sc_lv<16> > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_4_V_TDATA;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_4_V_TVALID;
    sc_signal< sc_lv<16> > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_5_V_TDATA;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_5_V_TVALID;
    sc_signal< sc_lv<16> > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_6_V_TDATA;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_6_V_TVALID;
    sc_signal< sc_lv<16> > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_7_V_TDATA;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_res_V_data_7_V_TVALID;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > layer4_out_V_data_0_V_full_n;
    sc_signal< sc_lv<16> > layer4_out_V_data_0_V_dout;
    sc_signal< sc_logic > layer4_out_V_data_0_V_empty_n;
    sc_signal< sc_logic > layer4_out_V_data_1_V_full_n;
    sc_signal< sc_lv<16> > layer4_out_V_data_1_V_dout;
    sc_signal< sc_logic > layer4_out_V_data_1_V_empty_n;
    sc_signal< sc_logic > layer4_out_V_data_2_V_full_n;
    sc_signal< sc_lv<16> > layer4_out_V_data_2_V_dout;
    sc_signal< sc_logic > layer4_out_V_data_2_V_empty_n;
    sc_signal< sc_logic > layer4_out_V_data_3_V_full_n;
    sc_signal< sc_lv<16> > layer4_out_V_data_3_V_dout;
    sc_signal< sc_logic > layer4_out_V_data_3_V_empty_n;
    sc_signal< sc_logic > layer4_out_V_data_4_V_full_n;
    sc_signal< sc_lv<16> > layer4_out_V_data_4_V_dout;
    sc_signal< sc_logic > layer4_out_V_data_4_V_empty_n;
    sc_signal< sc_logic > layer4_out_V_data_5_V_full_n;
    sc_signal< sc_lv<16> > layer4_out_V_data_5_V_dout;
    sc_signal< sc_logic > layer4_out_V_data_5_V_empty_n;
    sc_signal< sc_logic > layer4_out_V_data_6_V_full_n;
    sc_signal< sc_lv<16> > layer4_out_V_data_6_V_dout;
    sc_signal< sc_logic > layer4_out_V_data_6_V_empty_n;
    sc_signal< sc_logic > layer4_out_V_data_7_V_full_n;
    sc_signal< sc_lv<16> > layer4_out_V_data_7_V_dout;
    sc_signal< sc_logic > layer4_out_V_data_7_V_empty_n;
    sc_signal< sc_logic > ap_sync_done;
    sc_signal< sc_logic > ap_sync_ready;
    sc_signal< sc_lv<1> > start_for_conv_2d_cl_array_array_ap_fixed_8u_config2_U0_din;
    sc_signal< sc_logic > start_for_conv_2d_cl_array_array_ap_fixed_8u_config2_U0_full_n;
    sc_signal< sc_lv<1> > start_for_conv_2d_cl_array_array_ap_fixed_8u_config2_U0_dout;
    sc_signal< sc_logic > start_for_conv_2d_cl_array_array_ap_fixed_8u_config2_U0_empty_n;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_start_full_n;
    sc_signal< sc_logic > conv_2d_cl_array_array_ap_fixed_8u_config2_U0_start_write;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sync_continue();
    void thread_ap_sync_done();
    void thread_ap_sync_ready();
    void thread_conv_2d_cl_array_array_ap_fixed_8u_config2_U0_ap_continue();
    void thread_conv_2d_cl_array_array_ap_fixed_8u_config2_U0_ap_start();
    void thread_conv_2d_cl_array_array_ap_fixed_8u_config2_U0_start_full_n();
    void thread_conv_2d_cl_array_array_ap_fixed_8u_config2_U0_start_write();
    void thread_input_1_V_data_0_V_TREADY();
    void thread_input_1_V_data_1_V_TREADY();
    void thread_input_1_V_data_2_V_TREADY();
    void thread_input_1_V_data_3_V_TREADY();
    void thread_input_1_V_data_4_V_TREADY();
    void thread_input_1_V_data_5_V_TREADY();
    void thread_input_1_V_data_6_V_TREADY();
    void thread_input_1_V_data_7_V_TREADY();
    void thread_layer2_out_V_data_0_V_TDATA();
    void thread_layer2_out_V_data_0_V_TVALID();
    void thread_layer2_out_V_data_1_V_TDATA();
    void thread_layer2_out_V_data_1_V_TVALID();
    void thread_layer2_out_V_data_2_V_TDATA();
    void thread_layer2_out_V_data_2_V_TVALID();
    void thread_layer2_out_V_data_3_V_TDATA();
    void thread_layer2_out_V_data_3_V_TVALID();
    void thread_layer2_out_V_data_4_V_TDATA();
    void thread_layer2_out_V_data_4_V_TVALID();
    void thread_layer2_out_V_data_5_V_TDATA();
    void thread_layer2_out_V_data_5_V_TVALID();
    void thread_layer2_out_V_data_6_V_TDATA();
    void thread_layer2_out_V_data_6_V_TVALID();
    void thread_layer2_out_V_data_7_V_TDATA();
    void thread_layer2_out_V_data_7_V_TVALID();
    void thread_start_for_conv_2d_cl_array_array_ap_fixed_8u_config2_U0_din();
    void thread_zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_ap_continue();
    void thread_zeropad2d_cl_array_array_ap_fixed_8u_config4_U0_ap_start();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif