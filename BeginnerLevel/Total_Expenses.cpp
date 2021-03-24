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
        float purshase = Q * P;
        if (purshase > 1000)
        {
            float dis = purshase * 0.1;
            purshase -= dis;
            printf("\n%f",purshase);
        }
        else
        {
            printf("\n%f",purshase);
        }
    }
}