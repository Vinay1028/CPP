#include<iostream>
using namespace std;
int main()
{
	int principal;
	float rateOfInterest;
	int time;
	float simpleInterest;
	cin>>principal>>rateOfInterest>>time;
	simpleInterest = principal*rateOfInterest*time/100;
	cout<<simpleInterest;
	return 0;
	
}
