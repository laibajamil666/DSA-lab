#include<iostream>
using namespace std;
int main()
{
	int size;
	int *p;
	cout<<"enter size of array"<<endl;
	cin>>size;

	p=new int[size];
	cout<<"enter a number ";
	for(int i=0; i<size;i++)
	{
	
		cin>>p[i];
		
	}
	cout<<"uou have entered ";
	for(int i=0; i<size;i++)
	{
		cout<<p[i]<<"  ";
	}
	delete[]p;
	return 0;
}
