#include<iostream>
#include<exception>

using namespace std;

class employee
{

     


    public:

    
        int age, exp, salary;

        void get_input(){

            cout<<"Enter employee age: ";
            cin>>age;
                try{
                     if(age<18 || age>70){

                         throw age;
                      }

                 }
                catch(int x){

                     cout<<"Age mus be in the range of[18 to 70]\nPlease! enter correct age"<<endl;
            }
            cout<<"Enter employee experience: ";
            cin>>exp;
                try{
                    if(exp>18){

                        throw exp;
                    }
                }
                catch(int y){

                    cout<<"Experience can't be more than 18\nPlease! enter expeeience under 18"<<endl;
                }

            cout<<"Enter employee salary: ";
            cin>>salary;
                try{

                    if(salary<300){

                        throw salary;
                    }
                }
                catch(int z){

                    cout<<"Salary can't be lest than 300\n enter salary more than 300"<<endl;
                }
            
        }
            

        void display()
        {
            cout<<"Emloyee age: "<<age<<endl;
            cout<<"Employee experience: "<<exp<<endl;
            cout<<"Employee salary: "<<salary<<endl;

             
        }

    
};

int main()
{
    
    employee em;

    em.get_input();
    em.display();
  
 return 0;

}