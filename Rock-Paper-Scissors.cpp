#include <iostream>
using namespace std;
int main (){
	while (true){
	int y;
	int x;
	x=rand()%3;
	cout<<"{1-Rock,2-Paper,3-Scissors}"<<endl<<"choose your weapon\n";
	cin >> y;
	while((y<1)||(y>3)){
	cout<<"There's no weapon with this no.\n"<<"plz enter z no. of z weapon you want\n";
	cin >> y;
	}
	if((x==0&&y==2)||(x==1&&y==3)||(x==2&&y==1)){
		switch(y){
		case 1:{cout<<endl<<"player:Rock\n"<<"computer:scissors\n"<<"You Win"<<endl;break;}
		case 2:{cout<<endl<<"player:Paper\n"<<"computer:Rock\n"<<"You Win"<<endl;break;}
		case 3:{cout<<endl<<"player:Scissors\n"<<"computer:Paper\n"<<"You Win"<<endl;break;}
		}
	}
	else if((x==0&&y==1)||(x==1&&y==2)||(x==2&&y==3)){
	    switch(y){
		case 1:{cout<<endl<<"player:Rock\n"<<"computer:Rock\n"<<"Draw"<<endl;break;}
		case 2:{cout<<endl<<"player:Paper\n"<<"computer:Paper\n"<<"Draw"<<endl;break;}
		case 3:{cout<<endl<<"player:Scissors\n"<<"computer:scissors\n"<<"Draw"<<endl;break;}
		}
	}
	else if((x==0&&y==3)||(x==1&&y==1)||(x==2&&y==2)){
	    switch(y){
		case 1:{cout<<endl<<"player:Rock\n"<<"computer:Paper\n"<<"You Lose"<<endl;break;}
		case 2:{cout<<endl<<"player:Paper\n"<<"computer:scissors\n"<<"You Lose"<<endl;break;}
		case 3:{cout<<endl<<"player:Scissors\n"<<"computer:Rock\n"<<"You Lose"<<endl;break;}
		}
	}
	cout<<"================================================================================================================="<<endl;}
	system("pause");
	return 0;
}
