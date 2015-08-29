#include<stdio.h>
#include<math.h>
int main() {
	double a,b,c;
	double ans[2];
	printf("Quadratic equation solver\n");
	printf("ax^2+bx+c\n");
	printf("a : ");
	scanf("%lf",&a);
	printf("b : ");
	scanf("%lf",&b);
	printf("c : ");
	scanf("%lf",&c);
	if(sqrt(pow(b,2)-(4*a*c))>=0&&a!=0) {
		printf("Solved with 2 real roots!\n");
		printf("Root 1 : %lf\n",((0-b)+sqrt(pow(b,2)-(4*a*c)))/(2*a));
		printf("Root 2 : %lf\n",((0-b)-sqrt(pow(b,2)-(4*a*c)))/(2*a));
	}
	else if(a==0) {
		printf("Failed...(a should not be zero)\n");
	}
	else printf("Failed...(Complex roots unsupported yet)\n");
	system("pause");
	return 0;
}
