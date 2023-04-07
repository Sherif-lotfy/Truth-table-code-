Q4)
---
Sum A
```
#include <iostream>
using namespace std;
int main(){
	int i=1,n,x=0,m=1;
	cin>>n;
	while(i<=n){
	x+=i*i; 
	i++;
	}
	cout<<endl<<x<<endl;
system("pause");
return 0;
}
```
Sum B
```
#include <iostream>
using namespace std;
int main(){
	int i=1,n,x=0,m=1;
	cin>>n;
	while(i<=n){
	if(i%2!=0){
	x+=i*i;} 
	i++;
	}
	cout<<endl<<x<<endl;
system("pause");
return 0;
}
```
Sum C
```
#include <iostream>
using namespace std;
int main(){
	int i=1,n,x=0,m=1;
	cin>>n;
	while(i<=n){
	if(i%2!=0){
	x+=i*i;
	} 
	else if(i%2==0){
	x+=-i*i;
	}
	i++;
	}
	cout<<endl<<x<<endl;
system("pause");
return 0;
}
```
Sum D
```
#include <iostream>
using namespace std;
int main(){
	int i=1,n,x=0,m=1;
	cin>>n;
	while(i<=n){
 if(i%2==0){
	x+=m*i*i*i;
	m*=-1;
	}
	i++;
	}
	cout<<endl<<x<<endl;
system("pause");
return 0;
}
```
Sum E
```
#include <iostream>
using namespace std;
int main(){
	int i=1,n,x=1,m=1;
	cin>>n;
	while(i<=n){
	x*=i;
	i++;
	}
	cout<<endl<<x<<endl;
system("pause");
return 0;
}
```
Sum F
```
#include <iostream>
using namespace std;
int main(){
	float i=1,n,x=0,m,z=1;
	cin>>n;
	while(i<=n){
	z*=i;
	m=i+1;
	x+=(m/z);
	i++;
	}
	cout<<endl<<x<<endl;
system("pause");
return 0;
}
```
Sum G
```
#include <iostream>
using namespace std;
int main(){
	float i=1,n,x=1,m,z=1,s=0;
	cout<<"n=....";
	cin>>n;
	cout<<endl<<"x=....";
	cin>>x;
	m=x;
	while(i<=n){
		z*=i;
		s+=x/z;
		x*=m;
		i++;
	}
	cout<<endl<<1+s<<endl;
system("pause");
return 0;
}
```
---
Q6)
---
Q6.1
```
 #include <iostream>
using namespace std;
int main(){
	float i=1,n,x,s=0;
	cout<<"enter the number of the integets...\n";
	cin>>n;
	while(i<=n){
	cout<<"enter the integer"<<i<<"...\n";
	cin>>x;
	s+=x;
	i++;
	}
	cout<<endl<<s/n<<endl;
system("pause");
return 0;
}
```
Q6.2
```
 #include <iostream>
using namespace std;
int main(){
	float i=1,y,x,s=0,m;
	cout<<"enter the smallest integet x=...\n";
	cin>>x;
	m=x;
	cout<<"enter the greatest integet y=...\n";
	cin>>y;
	if(x>=y)
		cout<<"error ya m3lem";
	while(x<=y){
	s+=x;
	x++;
	}
	cout<<endl<<s/(y-m+1)<<endl;
system("pause");
return 0;
}
```
Q6.3
```
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float i=1,x,s=0,n;
cout<<"enter the integer X =...\n";
cin>>x;
cout<<endl<<"enter the integer N =...\n";
cin>>n;
while(i<=n){
	s+=(i/(sqrt(x+i)));
	i++;
}
cout<<endl<<s<<endl;
system("pause");
return 0;
} 
```
Q6.4
```
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float i=1,x,s=0,n,m=1,z=0;
cout<<"enter the integer X =...\n";
cin>>x;
cout<<endl<<"enter the integer N =...\n";
cin>>n;
while(i<=n){
	z+=m*(pow(i,i)/((n+s)*x));
	s--;
	i++;
	m*=-1;
}
cout<<endl<<z<<endl;
system("pause");
return 0;
} 
```
