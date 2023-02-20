#include<iostream>
using namespace std;

template<class length, class width, class area>
class Rectangle
{
            length a;
            width b;
            area c;
        public:

        Rectangle(length x, width y, area z)
        {
            a = x;
            b = y;
            c = z;
        }
        void show()
        {
            cout << a << "  " << b <<"  "<< c <<endl;
        }


};

int main()
{
    Rectangle<int, int, int> test1 (10, 20, 10*20);
    Rectangle<float, float, float> test2 (5.57, 22.25, 5.57*22.25);
    Rectangle<int, float, float> test3 (10, 3.75, 10*3.75);

    test1.show();
    test2.show();
    test3.show();

    return 0;
}