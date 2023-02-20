#include<iostream>
#include<iomanip>
using namespace std;

int main()
{   
    double lerry[12], sum = 0;
    
    for(int i=1; i<=12; i++){
    
        cin>>lerry[i];
        sum +=lerry[i];
    }

    cout<<fixed;
    cout<<setprecision(2);

    double aveg = sum/12;

    cout<<"$"<<aveg<<endl;

    return 0;
}