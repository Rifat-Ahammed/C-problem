#include<iostream>

using namespace std;
int main()
{
    int W, H, x, y, r;
    cin>>W>>H>>x>>y>>r;

    if(r<=x && r<=y && r<=W-x && r<=H-y){
        cout<<"Yes\n";
    }
    else 
        cout<<"No\n";
        
    return 0;
}