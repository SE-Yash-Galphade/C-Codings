#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int a;
	for(a=1;a<=10;a++){
		if(a==5){
			goto b;
		}
		cout<<a;
	}
	b:
		cout<<" Mic testing hello!!!";
}
