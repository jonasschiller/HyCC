include ../common.inc

CBMCGC = $(CBMC_GC_ROOT)/bin/cbmc-gc

logregfp: logreg_fixpt.c
	${CBMCGC} $^ --all-variants
logregfpbool: logreg_fixpt.c
	${CBMCGC} $^ --minimization-time-limit 20 --all-variants
clean:
	rm -f *.circ
	rm -f *.dot
	rm -f *.ps
	rm -f *.stats
