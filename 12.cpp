#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x,y;
	cin>>x;
	y=pow(2.71828182846,x-2.0)+abs(sin(x))-(pow(x,4.0)*cos(1.0/x));
	cout<<y<<endl;
	return 0;
}