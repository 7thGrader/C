#include<stdio.h>
#include<conio.h>
void help() {
	printf("IDLE RPG\n\n");
	printf("This game is total idle game.\n");
	printf("You need to just keep your c\n");
	printf("omputer on.\n");
	printf("This program is made with C.\n");
	printf("\nPress Any Key to continue.\n");
	getch();
	printf("\a");
	system("cls");
}
void main() {
	double money = 0;
	double atk = 1;
	int progress = 0;
	int level = 1;
	double exp = 0;
	int weapon = 1;
	char input;
	system("cls");
	printf("======================\n");
	printf("     I D L E\n");
	printf("         R P G    v1.1\n");
	printf("======================\n");
	printf("\n");
	printf("  * Press Any Key *\n");
	getch();
	printf("\a");
	fflush(stdin);
	printf("\nDo you need help?(Y/N)\n");
	wrong:
	input = getch();
	printf("\a");
	fflush(stdin);
	if(input=='y'||input=='Y') {
		system("cls");
		help();
	}
	else if(input!='n'&&input!='N') {
		goto wrong;
	}
	system("cls");
	for(;;) {
		printf("IDLE RPG v1.1\n");
		printf("=========== Status ===========\n");
		printf("Money : %d, Level : %d, ATK : %d, EXP : %d\n",(int)money,level,(int)atk,(int)exp);
		printf("Progress : %d%%\n",(progress*100)/(level*level+4));
		progress += atk;
		printf("=========== Events ===========\n");
		if(progress>=level*level+4) {
			exp += 1;
			progress = 0;
			money += (double)level;
			printf("Progress COMPLETE!\n");
			printf("\a");
		}
		if(exp>=level*level*5) {
			exp = 0;
			level++;
			printf("Level UP!\n");
		}
		if(money>=weapon*weapon*8) {
			money -= weapon*weapon*8;
			atk++;
			weapon++;
			printf("NEW WEAPON!\n");
		}
		sleep(1);
		system("cls");
	}
}
