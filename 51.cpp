#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b==c){
        cout<<"YES";
    } else
    if(b+c==a){
        cout<<"YES";
    }else
    if(c+a==b){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}