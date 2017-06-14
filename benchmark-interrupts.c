//#define _GNU_SOURCE 1

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <ucontext.h>

#define ITERATIONS 10000000

void sigsegv(int sig, siginfo_t *info, void *_ctx)
{
	//ucontext_t* ctx = (ucontext_t*)_ctx;
	//ctx->uc_mcontext.gregs[REG_RIP] += 6;
}

int main(void)
{
	long i;
	volatile int n = 500000000, count = 0;
	volatile int *poisoned = (int *)0x1234000000000000;
	//struct sigaction act = {0};

	//act.sa_sigaction = sigsegv;
	//sigaction(SIGSEGV, &act, NULL);
	for (i = 0; i < n; i++) {      
        	if (i%2 == 0)
			count++;
    	}

	return 0;
}

