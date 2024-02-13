CBMC_GC = ../../../bin/cbmc-gc
CIRCUIT_SIM = ../../bin/circuit-sim

.PHONY: clean run-sim run-aby

mpc_maxpoolL1.circ: MaxPoolingL1.c
	$(CBMC_GC) $^  --minimization-time-limit 600

mpc_maxpoolL2.circ: MaxPoolingL2.c
	$(CBMC_GC) $^ --minimization-time-limit 600