#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        /* code */
        int n;
        cin >> n;
        int sum = 0;

        sum += n / 100;
        n = n % 100;
        sum += n / 50;
        n = n % 50;
        sum += n / 10;
        n = n % 10;
        sum += n / 5;
        n = n % 5;
        sum += n / 2;
        sum += n % 2;
        cout << sum << endl;

    }
}