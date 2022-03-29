#include "systemc.h"

SC_MODULE(stim)
{
    sc_out<bool> A, B;
    sc_in<bool> Clk;

    void StimGen(){

        wait(); // C++變數一開始的值是隨機的，相當於 time0 訊號是不正常的 => time0 訊號不要接，因為還在 initialize.
                // solution1：clock 的第一個 edge 不要送訊號
                // solution2：幫 clock 設定 1 SC_NS delay，從 1 ns 產生第一個 edge => sc_clock TestClk("TestClock", 10, SC_NS, 0.5, 1, SC_NS);
        A.write(false);
        B.write(false);
        wait();
        A.write(false);
        B.write(true);
        wait();
        A.write(true);
        B.write(false);
        wait();
        A.write(true);
        B.write(true);
        wait();
        sc_stop();
    }

    SC_CTOR(stim){

        SC_THREAD(StimGen);
        sensitive << Clk.pos();
    }

};