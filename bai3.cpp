#include<iostream>
using namespace std;
bool kiemtraSNT(int n)
{
	if(n<2){
		return false;
	}
	for(int i=2;i<(n-1);i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
int main()
{
	int n;
	cout<<"Nhap vao so can kiem tra : ";
	cin>>n;
	if(kiemtraSNT(n))
	{
		cout<<"la so nguyen to";
	}
	else
	cout<<"khong la so nguyen to";
}
