#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a>b){
		cout<<"YES";
	}else {
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<a<<" "<<b;
	}
	return 0;
}