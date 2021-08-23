//Day fibonacci
#include<iostream>
using namespace std;
int FB(int n)
{
	if(n<0)
	return -1;
	else if(n==0 || n==1) return n;
	else 
	{ return FB(n-1)+FB(n-2);
	}
}
int main()
{
	//100 so fibonacci dau tien
//	int i;
//	cout<<"100 so dau tien cua day fibonancci la : ";
//	for(int i=0;i<100;i++)
//	{
//		cout<<FB(i)<<" ";
//	}
	int i,n;
	cout<<"Nhap so fb can tim  : ";
	cin>>n;
	
		cout<<FB(n)<<" ";
}
