CBMC_GC = ../../../bin/cbmc-gc
CIRCUIT_SIM = ../../../bin/circuit-sim

.PHONY: clean run-sim run-aby

mpc_multL1.circ: MultLayer1.c
	$(CBMC_GC) $^ --minimization-time-limit 1200

mpc_multL2.circ: MultLayer2.c
	$(CBMC_GC) $^ --minimization-time-limit 1200

mpc_multL3.circ: MultLayer3.c
	$(CBMC_GC) $^ --minimization-time-limit 1200
