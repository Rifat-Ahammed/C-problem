#include<iostream>
using namespace std;
int main()
{
    int a, b, c;

    cin>>a>>b>>c;

    if(a<b && a<c)

        cout<<a<<" "<<min(b,c)<<" "<<max(b,c)<<endl;
    
    else if(b<a && b<c)

        cout<<b<<" "<<min(a,c)<<" "<<max(a,c)<<endl;
    
    else

        cout<<c<<" "<<min(a,b)<<" "<<max(a,b)<<endl;
    

    return 0;
}