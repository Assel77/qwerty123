#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int d, sale, sum;
	cin>>d>>sale>>sum;
	double x,y, sum1;
	x=d*(sum+3);
	y=(sale*x)/100;
	sum1=x+y;
	cout<<sum1;
	return 0;
}