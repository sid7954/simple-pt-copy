#define _GNU_SOURCE 1

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <ucontext.h>

#define ITERATIONS 10000000

void sigsegv(int sig, siginfo_t *info, void *_ctx)
{
	ucontext_t* ctx = (ucontext_t*)_ctx;
	ctx->uc_mcontext.gregs[REG_RIP] += 6;
}

int main(void)
{
	long i;
	volatile int *poisoned = (int *)0x1234000000000000;
	struct sigaction act = {0};

	act.sa_sigaction = sigsegv;
	sigaction(SIGSEGV, &act, NULL);
	for (i = 0; i < ITERATIONS; i++) {      
        	*poisoned = 0;
    	}

	return 0;
}

