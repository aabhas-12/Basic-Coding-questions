#include<iostream>
using namespace std;
int getpowerof2(int n)
{
	if(n==1)
	{
		return 2;
	}
	
	return 2*getpowerof2(n-1);
}
int main()
{
	int n;
	cin>>n;	//raised to power
	int x = getpowerof2(n);
	cout<<x;
}
