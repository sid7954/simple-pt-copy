#define _GNU_SOURCE 1

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <ucontext.h>

void sigsegv(int sig, siginfo_t *info, void *_ctx)
{
        ucontext_t* ctx = (ucontext_t*)_ctx;
        ctx->uc_mcontext.gregs[REG_RIP] += 6;
}

int main()
{

	volatile int c, q=0, a=1, b=2, n=10000000;
	volatile int *poisoned = (int *)0x1234000000000000;
        struct sigaction act = {0};

        act.sa_sigaction = sigsegv;
        sigaction(SIGSEGV, &act, NULL);

	for (q=0;q<n;q++)
	{
	
		a++;
		a--;
		if (b<a)
		{
			b=a*a-2*b;
			a=b*b*b-a*a -3;
//			printf("taken\n");
		}
		else
		{	
			a=b*b-2*a;
			b=a*a*a - b*b -3;
//			printf("not taken\n");
			*poisoned = 0;
		}
	//	b++;
	//	b--;
	}

	return 0;
}

