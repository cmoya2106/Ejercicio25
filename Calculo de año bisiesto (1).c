//Manuel Rodriguez ,Carlos moya

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	
	printf("ingrese el a%co para saber si es bisiesto:",164);
	scanf("%d",&n);
	
	if (n%4==0 || n%400==0){
		printf("El a%co ingresado es bisiesto",164);
	}
	
	else if (n%100 !=0){
		printf("El a%co ingresado no bisiesto",164);
	}
	
	
	
	return 0;
}