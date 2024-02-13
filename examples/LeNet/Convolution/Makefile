CBMC_GC = ../../../bin/cbmc-gc
CIRCUIT_SIM = ../../../bin/circuit-sim

.PHONY: clean run-sim run-aby

mpc_convL1.circ: ConvL1.c
	$(CBMC_GC) $^

mpc_convL2.circ: ConvL2.c
	$(CBMC_GC) $^


