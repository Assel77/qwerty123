#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a, b,c;
	cin>>a>>b>>c;
	double avg, d;
	avg=(a+b+c)/3;
	d=(2*(a+c))-(3*b);
	cout<<avg<<" "<<d<<endl;
	return 0;
}