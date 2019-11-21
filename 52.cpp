#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>5 && b>5){
	    cout<<"YES";
	}else if(c%6==0){
	    cout<<"YES";
	}else if (d%3!=0){
	    cout<<"YES";
	}else {
	    cout<<"NO";
	}
	    return 0;
}