#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[4], min_cost;

    for(int i=0; i<3; i++){

        cin>>arr[i];
    }

    sort(arr, arr+3);
    cout<<((arr[1]-arr[0])+arr[2]-arr[1])<<endl;

    return 0;
}