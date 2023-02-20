#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i, l=0, n;
    cin>>n;

    for(i=0; i<n; i++){

        string s;
        cin>>s;
         l = s.length();
        if(l>10){cout<<s[0]<<l-2<<s[l-1]<<endl;}
        else
         cout<<s<<endl;
    }
    return 0;
}