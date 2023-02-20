#include<iostream>
using namespace std;
int main()
{
    int n, m, i, j;
    cin>>n>>m;
    int array[n];
    int sum = 0;
    for(i=0; i<n; i++){
        cin>>array[i];
     }
     for(i=0; i<n; i++){
         for(j=i+1; j<n; j++){
             if(array[j]<array[i]){
                 int temp = array[j];
                 array[j] =array[i];
                 array[i]= temp;
                
             }
         }
     }
     for(i=0; i<m; i++){
        if(array[i]<0){

          sum+=(-array[i]);
       }
     }
    
    cout<<sum<<endl;

    return 0;
}