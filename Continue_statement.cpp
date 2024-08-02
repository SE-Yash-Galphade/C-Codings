#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int i;
	for(i=1;i<=10;i++){
		if(i==5){
			continue;
		}
		cout<<i;
		cout<<endl;
	}
}
