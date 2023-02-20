#include<iostream>
using namespace std;
int main(){

    string n;
    cin>>n;

    int count =0;

    int lenght= n.length();

    for(int i=0; i<lenght; i++){
    
        if(n[i]=='1'){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}