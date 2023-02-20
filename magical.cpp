#include <iostream>
using namespace std;
string checkNumber(int N)
{
    int temp = N;
 
    while (temp > 0) {

        if (temp % 1000 == 144)
            temp /= 1000;
        else if (temp % 100 == 14)
            temp /= 100;
        else if (temp % 10 == 1)
            temp /= 10;
        else {
            return "NO";
        }
    }
 
    return "YES";
}
 
int main()
{
    int N;
    cin>>N;
    cout << checkNumber(N);
 
    return 0;
}