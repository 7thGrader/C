#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int my;
int other;
void checkWin() {
	if((my-other)%3 == 0) {
		printf("Draw\n");
	}
	else if((my-other)%3==2) {
		printf("Lose\n");
	}
	else printf("Win\n");
}
void printRes() {
	switch(my) {
		case 1:
			printf("Yours : Rock\n");
		break;
		case 2:
			printf("Yours : Paper\n");
		break;
		case 3:
			printf("Yours : Scissor\n");
		break;
	}
	switch(other%3) {
		case 1:
			printf("Opposite : Rock\n");
		break;
		case 2:
			printf("Opposite : Paper\n");
		break;
		case 0:
			printf("Opposite : Scissor\n");
		break;
	}
}
void Easy() {
	char tmp;
	system("cls");
	printf("Easy Mode\n");
	printf("[1] Rock\n[2] Paper\n[3] Scissor\n");
	k:
	tmp=getch();
	switch(tmp) {
		case '1':
			my=1;
		break;
		case '2':
			my=2;
		break;
		case '3':
			my=3;
		break;
		default:
			printf("Error\a\n");
			goto k;
		break;
	}
	other=my-1;
	printRes();
	checkWin();
	system("pause");
}
void Medium() {
	char tmp;
	system("cls");
	printf("Medium Mode\n");
	printf("[1] Rock\n[2] Paper\n[3] Scissor\n");
	k:
	tmp=getch();
	switch(tmp) {
		case '1':
			my=1;
		break;
		case '2':
			my=2;
		break;
		case '3':
			my=3;
		break;
		default:
			printf("Error\a\n");
			goto k;
		break;
	}
	other=my-(rand()%2);
	printRes();
	checkWin();
	system("pause");
}
void Hard() {
	char tmp;
	system("cls");
	printf("Hard Mode\n");
	printf("[1] Rock\n[2] Paper\n[3] Scissor\n");
	k:
	tmp=getch();
	switch(tmp) {
		case '1':
			my=1;
		break;
		case '2':
			my=2;
		break;
		case '3':
			my=3;
		break;
		default:
			printf("Error\a\n");
			goto k;
		break;
	}
	other=my-(rand()%3);
	printRes();
	checkWin();
	system("pause");
}
void VeryHard() {
	char tmp;
	system("cls");
	printf("Very Hard Mode\n");
	printf("[1] Rock\n[2] Paper\n[3] Scissor\n");
	k:
	tmp=getch();
	switch(tmp) {
		case '1':
			my=1;
		break;
		case '2':
			my=2;
		break;
		case '3':
			my=3;
		break;
		default:
			printf("Error\a\n");
			goto k;
		break;
	}
	other=my-2-rand()%2;
	printRes();
	checkWin();
	system("pause");
}
void Impossible() {
	char tmp;
	system("cls");
	printf("Very Hard Mode\n");
	printf("[1] Rock\n[2] Paper\n[3] Scissor\n");
	k:
	tmp=getch();
	switch(tmp) {
		case '1':
			my=1;
		break;
		case '2':
			my=2;
		break;
		case '3':
			my=3;
		break;
		default:
			printf("Error\a\n");
			goto k;
		break;
	}
	other=my-2;
	printRes();
	checkWin();
	system("pause");
}
int main() {
	char i;
	system("title Rock Paper Scissors");
	srand(time(NULL));
	k:
	system("cls");
	printf("Rock Paper Scissors v1.0\n\n");
	printf("Select Difficulty\n\n");
	printf("[1] Easy\n[2] Medium\n[3] Hard\n[4] Very Hard\n[5] Impossible\n");
	i=getch();
	if(i=='1') {
		Easy();
	}
	else if(i=='2') {
		Medium();
	}
	else if(i=='3') {
		Hard();
	}
	else if(i=='4') {
		VeryHard();
	}
	else if(i=='5') {
		Impossible();
	}
	else printf("Error\n\a");
	goto k;
	return 0;
}
