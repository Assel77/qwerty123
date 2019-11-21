#include <iostream> 
using namespace std;
int main()
{
    int a,b,c;
    int x=0;
    cin>>a>>b>>c;
    if (a>0){
        x++;
    } 
    if(b>0){
        x++;
    }
    if(c>0){
        x++;
    }
    cout<<x<<endl;
    return 0;
}