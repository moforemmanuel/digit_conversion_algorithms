#include <stdio.h>
#include <stdlib.h>

int main(){
	int num ,n,dec=0,base,rem,mult=1;

	printf("Input a binary number : \n");
	scanf("%d",&n);
	num=n;
	
	while(num>0){
		rem=num%10;
		base=rem*mult;
		dec+=base;
		mult*=2;
		num/=10;
	}
	
	printf("%d to decimal is %d\n",n,dec);
}
