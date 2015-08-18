#include<stdio.h>
#include<conio.h>
#define p (int)tape[tmp-1]
#define q (int)tape[tmp]
#define r (int)tape[tmp+1]
_Bool tape[79];
_Bool tmptape[79];
void printtape() {
	int tmp;
	for(tmp=0;tmp<=78;tmp++) {
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
	else if(tmp==78) {
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
	for(tmp=0;tmp<=78;tmp++) {
		tmptape[tmp]=tape[tmp];
	}
	for(tmp=0;tmp<=78;tmp++) {
		check(tmp);
	}
	for(tmp=0;tmp<=78;tmp++) {
		tape[tmp]=tmptape[tmp];
	}
}
void main() {
	int i,useless;
	for(i=0;i<=78;i++) {
		printf("Tape cell %d : ",i);
		scanf("%d",&useless);
		tape[i] = useless;
	}
	tape[78]=1;
	do {
		printtape();
		rule110();
		getch();
		printf("\a");
	} while(tape[0]==0);
	printf("\nEND OF TAPE REACHED\nType 0 to stop. else continue : ");
	scanf("%d",&useless);
	if(useless==0) {
		for(;;) {
			sleep(1);
		}
	}
	else {
		while(1) {
			printtape();
			rule110();
			getch();
			printf("\a");
		}
	}
}
