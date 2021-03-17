#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T, n;
    cin >> T;

    for (int i = 0; i < T; i++)
    {

        cin >> n;
        int fact = 1;
        while (n > 0)
        {

            fact = fact * n;
            n--;
        }

        cout << fact << endl;
    }
}