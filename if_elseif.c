#include<stdio.h>
#include<conio.h>
void main(){
	int age, a;
	printf("Enter Your Age: ");
	scanf("%d", &age, &a);
	
	if(a>=18 && a<=65){
		printf("You can drive");
	}
	else if(age<18){
		printf("Tumhi lahan ahat ajun, cycle chalva");
	}
	else if(age>=66){
		printf("Aata vay jhala tumcha aata kashala dusryancha jiv dhokyat takaycha");
	}
	
}