#include<iostream>
using namespace std;

int main()
{
	int *arr = new int[5];        //creating array in heap
	int i;
	for(i=0; i<5; i++)
	{
		cin>>*(arr+i);
	}
	for(i=0; i<5; i++)
	{
		cout<<*(arr+i);
	}
}
