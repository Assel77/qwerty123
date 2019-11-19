#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	double S=(a*a)/2;
	double c=pow(pow(a,2)+pow(b,2),1.0/2.0);
	double P=a+b+c;
	cout<<S<<" "<<c<<" "<<P<<endl;
	return 0;
}