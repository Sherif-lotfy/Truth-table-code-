Q1)
```
#include <iostream>
using namespace std;
int main() {
  int x,y,i=0;
  cout<<"enter the smallest value x... \n";
  cin>>x;
  cout<<endl<<"enter the greatest value y...\n";
  cin>>y;
  do{
    if( x!=1 && ( x%2!=0 || x==2)){
		 if(x%3!=0||x==2||x==3)
			 i++;
	}
    x++;
  }while(x<=y);
  cout<<endl<<i<<endl;
    system("pause");
  return 0;
}
```
---
Q2)
```
#include <iostream>
using namespace std;
int main() {
  int x=1,y=0,i=1;
  do{
	  for(y=0;y<=12;y++){
	  cout<<x<<"*"<<y<<"="<<x*y<<"\t";
	  cout<<endl;
	  }
	  cout<<endl<<endl<<endl;
	  x++;
  }while(x<=12);

    system("pause");
  return 0;
}
```
---
Q3)
```
in Lab .
```
