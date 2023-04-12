#### Q2).
Q2.a
```
#include <iostream>
using namespace std;
int main() {
	int x[9],i,sum=0;
	for(i=0;i<=9;i++){
	cout<<"x"<<i+1<<"=";
	cin >> x[i];
	sum+=x[i];
	}
	cout<<sum<<endl<<sum/10<<endl;
    system("pause");
  return 0;
}
```
Q2.b
```
#include <iostream>
using namespace std;
int main() {
	int x[9],i;
	for(i=0;i<=9;i++){
	cout<<"x["<<i<<"]=";
	cin >> x[i];
	}
	cout<<endl;
	for(i=0;i<=9;i++){
		if(x[i]%3==0)
			cout<<"x["<<i<<"] is divisible by 3\n";
	}
    system("pause");
  return 0;
}
```
Q2.c
```
#include <iostream>
using namespace std;
int main() {
	int x[9],i,sum=0,c=0;
	for(i=0;i<=9;i++){
	cout<<"x["<<i<<"]=";
	cin >> x[i];
	}
	cout<<endl;
	for(i=0;i<=9;i++){
		if(x[i]%2==0){
			sum+=x[i];
			c++;
		}
	}
	cout<<"the average of the even = "<<sum/c <<endl;
    system("pause");
  return 0;
}
```
Q2.d
```
#include <iostream>
using namespace std;
int main() {
	int x[9],i,product=1;
	for(i=0;i<=9;i++){
	cout<<"x["<<i<<"]=";
	cin >> x[i];
	}
	cout<<endl;
	for(i=0;i<=9;i++){
		if(x[i]%2!=0)
			product*=x[i];
	}
	cout<<"the product of the odd numbers = "<<product<<endl;
    system("pause");
  return 0;
}
```
Q2.e
```
#include <iostream>
using namespace std;
int main() {
	int x[9],i,max=1,min=1,ma,mi;
	for(i=0;i<=9;i++){
	cout<<"x["<<i<<"]=";
	cin >> x[i];
	if(x[i]>max){
		max=x[i];
		ma =  i ;}
	else if(x[i]<min){
		min=x[i];
		mi =  i ;}
	}
	cout<<endl;
	cout<<"Maximum is x["<<ma<<"] and ="<<max<<endl;
	cout<<"Minimum is x["<<mi<<"] and ="<<min<<endl;
	cout<<"And the difference between them ="<<max-min;
	cout<<endl;
    system("pause");
  return 0;
}
```
---

