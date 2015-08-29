#include<stdio.h>
unsigned long long llfgh(unsigned long long a, unsigned long long b, unsigned long long recurrenceCounter) {
	printf("Status : %llu, %llu, %llu\n",a,b,recurrenceCounter);
	if(b==0&&recurrenceCounter==0) {
		return a+1;
	}
	else if(recurrenceCounter==0) {
		return llfgh(a,b-1,a);
	}
	else {
		return llfgh(llfgh(a,b,recurrenceCounter-1),b,0);
	}
}
unsigned long long nofllfgh(unsigned long long a, unsigned long long b, unsigned long long recurrenceCounter) {
	printf("Status : %llu, %llu, %llu (Using NOF Mode)\n",a,b,recurrenceCounter);
	if(b==1&&recurrenceCounter==0) {
		return a*2+1;
	}
	else if(recurrenceCounter==0) {
		return nofllfgh(a,b-1,a);
	}
	else {
		return nofllfgh(nofllfgh(a,b,recurrenceCounter-1),b,0);
	}
}
void main() {
	unsigned long long int d,e;
	loop:
	scanf("%llu",&d);
	scanf("%llu",&e);
	if((d<=6&&e<=2)||e==0) {
		printf("Answer : %llu\n",llfgh(d,e,0));
	}
	else printf("Answer : %llu\n",nofllfgh(d,e,0));
	goto loop;
}
