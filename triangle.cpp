#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    double area = (double)0.5*a*b*sin(c*3.14159265358979323846/180);
    double s = sqrt(a*a+b*b-2*a*b*cos(c*3.14159265358979323846/180));
    double p = a+b+s;
    double h= 2*area/a;
    cout<<fixed;
    cout<<setprecision(8);
    cout<<area<<endl<<p<<endl<<h<<endl;
    return 0;
}