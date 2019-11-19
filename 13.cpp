#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b;
	int x;
	double y;
	cin>>a>>b>>x;
	y=pow(pow(x,2.0)+b,1.0/5.0)-(pow(b,2.0)*pow(sin(x+a),3.0))/x;
	cout<<y<<endl;
	return 0;
}