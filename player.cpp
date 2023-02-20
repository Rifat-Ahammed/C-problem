#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
int main()
{
    string s;
    cin>>s;
    int dz = 0, nd = 0;

        for(int i= 0; i<s.size();i++){

            if(s[i]=='0'){
                nd = 0;
                dz++;
                if(dz>=7)break;
            }
            else if(s[i]=='1'){

                dz=0;
                nd++;
                if(nd>=7)break;
            }

        }
        if(dz>=7 ||nd>=7){
            cout<<"YES"<<endl;
        }
        else 
            cout<<"NO"<<endl;
    return 0;
}