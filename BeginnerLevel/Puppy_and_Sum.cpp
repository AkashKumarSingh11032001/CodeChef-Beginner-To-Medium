#include <bits/stdc++.h>
using namespace std;
int sum_l(int d, int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    if (d == 1)
        return sum;
    else
        return sum_l(d - 1, sum);
}
int main()
{

    int T;
    cin >> T;

    int d, n;

    while (T--)
    {
        /* code */
        cin >> d >> n;
        cout << sum_l(d, n) << endl;
    }
}