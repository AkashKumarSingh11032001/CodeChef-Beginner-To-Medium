#include <bits/stdc++.h>
using namespace std;
// LCM => (n1 + n2)/ GCD
int LCM(int n1, int n2)
{
    int max = (n1 > n2) ? n1 : n2;
    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            return max;
            break;
        }
        else
        {
            max++;
        }
    } while (true);
}

int GCD(int n1, int n2)
{

    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n2;
    }
    return n1;
}


int main()
{

    int T;
    cin >> T;

    long long int a, b;

    while (T--)
    {
        /* code */
        cin >> a >> b;

        // cout << GCD(a, b);
        // cout << LCM(a, b);
        long long int gcd = __gcd(a,b);
        cout << gcd <<" "<<(a*b)/gcd;
    
    }
}