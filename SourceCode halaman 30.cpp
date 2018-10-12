//ita arke kristanti 5170411188
#include <iostream>
#include <conio.h>

using namespace std;

main(){

	int i, j, tmp;
	int Smallest[8]={5,34,32,25,75,42,22,2};
	cout<<"Data sebelum diurutkan: ";
	for(i=0; i<8; i++){
		cout<<Smallest[i]<<", ";
			}
		for(i=0; i<7; i++){
		for(j=i+1; j<8;j++){
				if(Smallest[i]>Smallest[j]){
					tmp=Smallest[i];
					Smallest[i]=Smallest[j];
					Smallest[j]=tmp;
					}	}	}
			
	cout<<endl<<"DATA SESUDAH DI URUTKAN: ";
	for(i=0;i<8;i++){
		cout<<Smallest[i]<<", ";
			}	}


