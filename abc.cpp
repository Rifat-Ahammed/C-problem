#include<iostream>
#include<deque>
using namespace std;
template<typename T>
int find(T* arr, int size)
{
    int m=0;
    for(int i=1; i<size; i++){
        if(arr[i]<=arr[m]) m=i;
    }
    return m;
}

int main()
{
    int arr[] ={5, 20, 8, -5, 15, 0, 10};
    double darr[] = {5.5, 2.71, 8.8, 3.14, 1.41, 3.40, 2.54};
    cout<<find(arr, sizeof(arr)/sizeof(arr[0]))<<" ";
    cout<<find(darr, sizeof(darr)/sizeof(darr[0]))<<endl;
    
return 0;
}