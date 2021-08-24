//in ra man hinh cac so nguyen to nho hon i
#include<iostream>
#include<math.h>
using namespace std;
int snt(int n)
{
	int i;
	for(i=2;i<sqrt(n);i++)
		if(n%i==0)
			return 0;
		return 1;
}
int main()
{
	int i;
	cout<<"Cac so nguyen to <1000 : \n";
	for(i =2;i<1000;i++)
	if(snt(i)==1)
	cout<<" "<<i;
}
