#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int base,number,max_num,a,b,c,d,place0,place1,place2,place3,baseBNum;
	printf("Enter a base (2-9)\n");
	scanf("%d",&base);
	max_num=pow(base,4)-1;
	printf("Enter a base 10 number to convert \n");
	scanf("%d", &number);
	
	a=number/base;
	
	place0=number%base;
	
	b=a/base;
	
	place1=a%base;
	
	c=b/base;
	
	place2=b%base;
	
	d=c/base;
	
	place3=c%base;
	
baseBNum=place3*1000+place2*100+place1*10+place0*1;

printf("Your answer is %d",baseBNum);
	
	
	return 0;
}
