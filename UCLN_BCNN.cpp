//tim ucln va bcnn cua 2 so
#include<iostream>
#include <algorithm>
using namespace std;
int gcd(int a,int b){
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
	int a,b;
	
	cout<<"Nhap vao a,b : ";
	cin>>a>>b;
	gcd(a,b);
	int lcm = a * b / gcd(a, b);
	//BCNN(a,b);
	cout<<"UCLN la "<<a<<" va "<<b<<" : "<<gcd(a,b);
	cout<<"\nBCNN la "<<a<<" va "<<b<<" : "<<lcm;
}
