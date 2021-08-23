#include <iostream>
using namespace std; 
int ucln(int a,int b){
	if(a==0|b==0 )
	{
		return a+b;
	}
	while(a!=b)
	{
		if(a>b){
			a-=b;
		}
		else{
			b-=a;
		}
	} return a;
}
int main()
{
int i,x[100],d,n;
cout<<"Nhap so phan tu cua day n: "<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"x["<<i<<"]= ";
cin>>x[i];
}
d = ucln(x[1],x[2]);
for(int i = 3; i <= n; ++i)
    if (d == 1) break;
    else d = ucln(d,x[i]);
cout<<"UCLN cua day : "<<d;

}
