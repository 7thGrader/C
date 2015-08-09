#include<stdio.h>
#include<conio.h>
#define p (int)tape[tmp-1]
#define q (int)tape[tmp]
#define r (int)tape[tmp+1]
_Bool tape[79];
_Bool tmptape[79];
void printtape() {
	int tmp;
	for(tmp=0;tmp<=79;tmp++) {
		if(tape[tmp]==1) {
			printf("*");
		}
		else printf(" ");
	}
	printf("\n");
}
void check(int tmp) {
	if(tmp==0) {
		if((q+r+(q*r))%2 == 1) {
			tmptape[tmp]=1;
		}
		else tmptape[tmp]=0;
	}
	else if(tmp==79) {
		if((q)%2 == 1) {
			tmptape[tmp]=1;
		}
		else tmptape[tmp]=0;
	}
	else {
		if((q+r+(q*r)+(p*q*r))%2 == 1) {
			tmptape[tmp]=1;
		}
		else tmptape[tmp]=0;
	}
}
void rule110() {
	int tmp;
	for(tmp=0;tmp<=79;tmp++) {
		tmptape[tmp]=tape[tmp];
	}
	for(tmp=0;tmp<=79;tmp++) {
		check(tmp);
	}
	for(tmp=0;tmp<=79;tmp++) {
		tape[tmp]=tmptape[tmp];
	}
}
void main() {
	int i;
	for(i=0;i<=79;i++) {
		tape[i] = 0;
	}
	tape[79]=1;
	while(tape[0]==0) {
		printtape();
		rule110();
		getch();
	}
	printf("END OF TAPE REACHED");
	for(;;) {
		sleep(1);
	}
}
