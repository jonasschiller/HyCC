CBMC_GC = ../../bin/cbmc-gc
CIRCUIT_SIM = ../../bin/circuit-sim
ABY_CBMC_GC = ../../../ABY/build/bin/aby-hycc

.PHONY: clean run-sim run-aby

mpc_main.circ: auction.c
	$(CBMC_GC) $^

