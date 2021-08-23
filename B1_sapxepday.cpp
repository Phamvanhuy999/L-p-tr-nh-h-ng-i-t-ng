//Nhap vao phan tu cua day sap xep tang dan
#include<iostream>
#include<iomanip>
using namespace std;
void sapxep(float a[], int n);
void hoanvi(float &x, float &y);
void hoanvi(float &x,float &y)
{
	float t;
	t=x;
	x=y;y=t;
}
void sapxep(float a[],int n )
{
	int i,j;
	for(i=1;i<=n;++j)
		for(j=i+1;j<=n;++j)
			if(a[j]<a[i]) hoanvi(a[i],a[j]);
}

int main()
{
	float a[100];
	int n,i;
	cout<<"n : ";cin>>n;
	for(i=1;i<=n;++i)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	sapxep(a,n);
	cout<<"day sau khi sap xep"<<endl;
	for(i=1;i<=n;++i)
		cout<<setw(6)<<a[i];
}

