#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    while (1)
    {
        cin >> N;
        if (N == 0)
            break;

        if (N <= 101)
            cout << "f91(" << N << ") = 91" << endl;
        else
            cout << "f91(" << N << ") = " << N - 10 << endl;
    }

    return 0;
}