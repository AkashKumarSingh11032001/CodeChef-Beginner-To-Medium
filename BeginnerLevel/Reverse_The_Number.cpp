#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T > 0)
    {
        int n;
        cin >> n;

        int remainder, rev = 0;

        while (n != 0)
        {
            /* code */
            remainder = n % 10;
            rev = rev * 10 + remainder;
            n /= 10;
        }
        cout << rev << endl;

        T--;
    }
}