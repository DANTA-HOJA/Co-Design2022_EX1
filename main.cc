#include "systemc.h"
#include "stim.h"
#include "exor2.h"

int sc_main(int argc, char *argv[]){

    sc_signal<bool> ASig, BSig, FSig;
    sc_clock TestClk("TestClock", 10, SC_NS, 0.5);

    stim Stim1("Stimulus");
    Stim1.A(ASig);
    Stim1.B(BSig);
    Stim1.Clk(TestClk);

    exor2 DUT("exor2");
    DUT.A(ASig);
    DUT.B(BSig);
    DUT.F(FSig);

    sc_trace_file *file = sc_create_vcd_trace_file("../R10945018-SystemC-EX1"); // open trace file

    sc_trace(file, TestClk, "Clock"); // trace ASig and name "signal_A" in .vcd file
    sc_trace(file, ASig, "signal_A"); // trace ASig and name "signal_A" in .vcd file
    sc_trace(file, BSig, "signal_B"); // trace ASig and name "signal_A" in .vcd file
    sc_trace(file, FSig, "signal_F"); // trace ASig and name "signal_A" in .vcd file
    sc_trace(file, DUT.S1, "signal_S1"); // trace ASig and name "signal_A" in .vcd file
    sc_trace(file, DUT.S2, "signal_S2"); // trace ASig and name "signal_A" in .vcd file
    sc_trace(file, DUT.S3, "signal_S3"); // trace ASig and name "signal_A" in .vcd file

    sc_start(); // run simulation and will stop until hit "sc_stop()" in "stim" object

    sc_close_vcd_trace_file(file);                              // close trace file

    return 0;
}