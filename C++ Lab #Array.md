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
#### Q3).
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
#### Q4).
Q4.a
```
#include <iostream>
using namespace std;
int main() {
	int M[3] [3],i,j,sum=0;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		cout<<"M ["<<i+1<<"] ["<<j+1<<"] = ";
		cin>> M[i] [j];
		sum+=M[i] [j];
		}
	}
	cout<<endl<<sum<<endl;
    system("pause");
  return 0;
}
```
Q4.b
```
#include <iostream>
using namespace std;
int main() {
	int M[3] [3],i,j,sum=0,s[3];
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		cout<<"M ["<<i+1<<"] ["<<j+1<<"] = ";
		cin>> M[i] [j];
		sum+=M[i] [j];
		}
		s[i]=sum;
		sum=0;
	}
	for(i=0;i<=2;i++){
	cout<<endl<<"sum of the row no."<<i+1<<" = "<<s[i]<<endl;
	}
    system("pause");
  return 0;
}
```
Q4.c
```
#include <iostream>
using namespace std;
int main() {
	int M[3] [3],i,j,max=0,m1,m2;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		cout<<"M ["<<i+1<<"] ["<<j+1<<"] = ";
		cin>> M[i] [j];
		if(M[i] [j] > max){
			max=M[i] [j];
			m1=i+1;
			m2=j+1;}
		}
	}
	cout<<"The largest element is M["<<m1<<"] ["<<m2<<"] and ="<<max<<endl;
    system("pause");
  return 0;
}
```
Q4.d
```
#include <iostream>
using namespace std;
int main() {
	int M[3] [3],i,j,m[3] [3];
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
		cout<<"M ["<<i<<"] ["<<j<<"] = ";
		cin>> M[i] [j];
		m[j] [i] = M[i] [j];

		}
	}
	cout<<endl;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
		cout<<"m["<<j<<"] ["<<i<<"]"<<" = "<<m[j] [i]<<endl;
		}}

    system("pause");
  return 0;
}
```
---
Q5)
```
#include <iostream>
using namespace std;
int main() {
	int M[10][10],i=1,j=1,sum=0;
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			M[i][j]=i+j;
			sum+=M[i][j];
		}}
	cout<<endl<<
		"The summation of the elements located at the circumference = "
		<<sum<<endl;
    system("pause");
  return 0;
}
```
