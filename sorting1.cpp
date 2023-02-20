#include<iostream>
using namespace std;

int main()
{   
    int array[4];
    int temp = 0;
    for(int i=0; i<3; i++){
        cin>>array[i];
    }
    for(int i=0; i<3; i++){

        for(int j=0; j<3; j++){

            if(array[i]<array[j]){

                temp = array[i];
                array[i] = array[j];
                array[j]= temp;
            }
        }
    }
    
        cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<endl;

    return 0;
}