CBMC_GC = ../../bin/cbmc-gc
CIRCUIT_SIM = ../../bin/circuit-sim

.PHONY: clean run-sim run-aby

mpc_LogReg.circ: LogReg.c
	$(CBMC_GC) $^  --minimization-time-limit 1800

