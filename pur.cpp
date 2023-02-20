#include <bits/stdc++.h> 
using namespace std; 
const long long N=1e6+10;

 int main(){

     string S;
     cin>>S;

     int count=0;

     for(int i=0; i<S.size(); i++){

        if( S[i] =='a')count+=1;
        else if(S[i]=='b')count +=2;
        else if(S[i]=='c')count +=3;
     }

    if(count == 6)
    cout<<"YES";
    else 
     cout<<"NO";

     return 0;
 }