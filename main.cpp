#include <iostream>
#include <stdio.h>
using namespace std;

#define base_menos_1		11


void stop (void);


int stopper=1;


int main(int argc, char** argv){
	int num=13;
	int lim=13;
	int select;
	int counter;
	int width=1;
	cout<<"Width: ";
	cin>>width;
	cout<<"Stop at: ";
	cin>>stopper;
	cout<<"";
	//cout<<"1"<<"2"<<"3";
	cout<<"*"<<"*"<<"*"<<" "<<"*"<<" "<<"*"<<" "<<" "<<" "<<"*"<<" "<<endl;
	while(1){
		for(counter=0; counter<width; counter++){
			fflush(stdin);
			lim=(num/2)+1;
			for(int denom=2; denom<=lim; denom++){
				denom++;
				if((num%denom)==0){
					cout<<" ";
					break;
				}
				//else if(denom>=lim) cout<<num;
				else if(denom>=lim) cout<<"*";
			}
			num+=2;
			//num++;
			cout<<" ";
		}
		cout<<endl;
		if(num>=stopper){
			cout<<endl<<endl<<endl<<"1.- Continuar"<<endl<<"2.- Salir"<<endl<<endl;
			fflush(stdin);
			cin>>select;
			//stopper+=1000;
			if(select!=1) return 0;
		}
	}
	return 0;
}


void stop(void){
	cout<<endl;
	system("PAUSE");
	stopper+=1000;
}
