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
