CBMC_GC = ../../bin/cbmc-gc
CIRCUIT_SIM = ../../bin/circuit-sim
ABY_CBMC_GC = ../../../ABY/build/bin/aby-hycc

.PHONY: clean run-sim run-aby

mpc_relu.circ: relu.c
	$(CBMC_GC) $^

mpc_MaxPooling.circ: MaxPooling.c
	$(CBMC_GC) $^

mpc_Conv.circ: Conv.c
	$(CBMC_GC) $^

mpc_Mult.circ: Mult.c
	$(CBMC_GC) $^
