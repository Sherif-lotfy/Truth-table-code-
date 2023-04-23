#include <iostream>
using namespace std;
int main (){
	  int x[3]={69,80,12},y,z,i,totel=0;
	  do{
		cout<< "Which sandwich you would like to have:\n"<<endl
			<< "1- Spicy Crispy Chicken Sandwich.\n"<<"price for one =69LE\n"<<endl
			<< "2- Big Mac.\n"<<"price for one =80LE\n"<<endl
			<< "3- Chicken McNuggets.\n"<<"price for one =12LE\n"<<endl;
			cin>>i;
			while(i>3||i<1){
				cout<<"sorry but there is no meal with this number...\n"
					<<"plz choose your order from the menu "
					<<"and press the number that refers to it"<<endl;
				cin>>i;
			}
		cout<<endl<<"plz enter the amount\n";
		cin>>y;
		totel+=x[i-1]*y;
  switch(i){case 1:{cout<<endl<<"price for "<<y<<" Spicy Crispy Chicken Sandwich ="<<y*x[i-1];break;}
			case 2:{cout<<endl<<"price for "<<y<<" Big Mac ="<<y*x[i-1];break;}
			case 3:{cout<<endl<<"price for "<<y<<" Chicken McNuggets ="<<y*x[i-1];break;}}
		cout<<endl<<endl<<"Do you want to make another order ?\n"
			<<"1-Yes\n"<<"2-No\n";
		cin>>z;
	  }while(z==1);
		cout<<endl<<"Totel = "<<totel<<endl;
  system("pause");
  return 0;
}
