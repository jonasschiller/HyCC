CBMC_GC = ../../bin/cbmc-gc
CIRCUIT_SIM = ../../bin/circuit-sim
ABY_CBMC_GC = ../../../ABY/build/bin/aby-hycc

.PHONY: clean run-sim run-aby

mpc_relu.circ: relu.c
	$(CBMC_GC) $^

mpc_reluC1.circ: reluLayerC1.c
	$(CBMC_GC) $^ --minimization-time-limit 50

mpc_reluC2.circ: reluLayerC2.c
	$(CBMC_GC) $^ --minimization-time-limit 50

mpc_reluF1.circ: reluLayerF1.c
	$(CBMC_GC) $^  --minimization-time-limit 50

mpc_reluF2.circ: reluLayerF2.c
	$(CBMC_GC) $^ --minimization-time-limit 50