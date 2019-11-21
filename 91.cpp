#include <iostream> 
using namespace std;
int main()
{
    int n;
    double s=0;
    cin>>n;
    for(double i=0;i<n;i++){
        s=s+((i+2)/(i+3));    
    }
    cout<<s<<endl;
    system("pause");
    return 0;
}