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
#### Q3)
Q3.a
```
#include <iostream>
using namespace std;
int main() {
	int A[9],i,B[9];
	for(i=0;i<=9;i++){
	cout<<"A["<<i<<"]=";
	cin >> A[i];
	}
	cout<<endl;
	for(i=0;i<=9;i++){
	cout<<"B["<<i<<"]=";
	cin >> B[i];
	}
	cout<<endl;
	for(i=0;i<=9;i++){
	cout<<"c["<<i<<"] = "
		<<"A["<<i<<"] - B["<<i<<"] = "
		<< A[i]<<" - "<<B[i] <<" = "<<A[i]-B[i];
	cout<<endl;
	}
    system("pause");
  return 0;
}
```
Q3.b
```
#include <iostream>
using namespace std;
int main() {
	int A[9],i,B[9];
	for(i=0;i<=9;i++){
	cout<<"A["<<i<<"]=";
	cin >> A[i];
	A[i]=A[i]*A[i];
	}
	cout<<endl;
	for(i=0;i<=9;i++){
	cout<<"B["<<i<<"]=";
	cin >> B[i];
	B[i]=B[i]*B[i];
	}
	cout<<endl;
	for(i=0;i<=9;i++){
	cout<<"D["<<i<<"] = "
		<<"A["<<i<<"]^2 - B["<<i<<"]^2 = "
		<< A[i]<<" - "<<B[i] <<" = "<<A[i]-B[i];
	cout<<endl;
	}
    system("pause");
  return 0;
}
```
Q3.c
```
#include <iostream>
using namespace std;
int main() {
	int A[9],i,B[9],a[9],b[9];
	for(i=0;i<=9;i++){
	cout<<"A["<<i<<"]=";
	cin >> a[i];
	A[i]=a[i]*a[i];
	}
	cout<<endl;
	for(i=0;i<=9;i++){
	cout<<"B["<<i<<"]=";
	cin >> b[i];
	B[i]=b[i]*b[i];
	}
	cout<<endl;
	for(i=0;i<=9;i++){
	cout<<"E["<<i<<"] = "
		<<"A["<<i<<"]^2 + B["<<i<<"]^2 - (A["<<i<<"]*B["<<i<<"])= "
		<<A[i] <<" + "<<B[i] <<" - ("<< a[i]<<"*"<<b[i]<<") ="
		<<A[i]+B[i]-(a[i]*b[i])<<endl;
	}
    system("pause");
  return 0;
}
```
---
