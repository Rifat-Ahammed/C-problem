#include<bits/stdc++.h>
using namespace std;
int main()
{  
    while(1){ 
    int n, x;

    cin>>n>>x;
    int count = 0;
    if(n==0 && x==0) 
       break;

    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            for(int k=j+1; k<=n; k++){

                if(i+j+k==x && i!=j &j!=k && i!=k){

                    count++;
                }
            }
        }
        
    }
    cout<<count<<endl;

    }

    return 0;
}