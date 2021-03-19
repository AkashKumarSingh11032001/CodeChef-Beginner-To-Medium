#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}
int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        /* code */
        int n;
        cin >> n;

        int rev = reverse(n);

        if(n == rev) {
            cout << "wins" <<endl;
        }else {
            cout << "loses" <<endl;
        }
    }
}