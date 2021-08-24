#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	float x=5,y=20,*px,*py;
	px=&x;py=&y;
	cout<<" "<<3*(*px)+*py;
}
