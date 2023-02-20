#include<iostream>
using namespace std;

int main()
{
    int a, b, c, sum=0;

    cin>>a>>b>>c;
    if(a>=1 && a<=10000 && b>=1 && b<=10000 && c>=1 && c<=10000){
    if(a>b && a>c || b==c){
       sum = b+c;
    }
    else if(b>a && b>c || a==c){
       sum = a+c;
    }
    else 
        sum = a+b;

    }

    

    return 0;
}
