#include<stdio.h>
#include<conio.h>
//c:\progra~1\intern~1\iexplore.exe
int main() {
	int input;
	char k;
	system("echo off");
	system("taskkill -f -im explorer.exe");
	system("cls");
	system("title Security Mode");
	printf("Password : ");
	scanf("%d",&input);
	if(input==1337) {
		system("cls");
		printf("Welcome.\n\n");
		printf("1. Desktop\n2. Internet\n3. Shutdown");
		lel:
		k=getch();
		if(k=='1') {
			system("explorer.exe");
			return 0;
		}
		else if(k=='2') {
			system("c:/progra~1/intern~1/iexplore.exe");
			goto lel;
		}
		else if(k=='3') {
			system("shutdown -s -t 3 -f");
		}
		else goto lel;
	}
	else {
	printf("WRONG PASSWORD!\n");
	system("shutdown -s -t 3 -f -c");
	}
}
