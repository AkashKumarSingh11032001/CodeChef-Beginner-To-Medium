#include <bits/stdc++.h>
using namespace std;

int fact(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }

    return a * fact(a - 1);
}

int main()
{

    int T;
    cin >> T;

    while (T--)
    {

        int n;
        cin >> n;
        cout << fact(n) << endl;
    }
}