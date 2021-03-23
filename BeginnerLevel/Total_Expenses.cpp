#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    int Q, P;

    while (T--)
    {
        cin >> Q >> P;
        int purshase = Q * P;
        if (purshase > 1000)
        {
            int dis = purshase * 0.1;
            cout <<setprecision(6) << dis << endl;
        }
        else
        {
            cout <<setprecision(6) << purshase << endl;
        }
    }
}