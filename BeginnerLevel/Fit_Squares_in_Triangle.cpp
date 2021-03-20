#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t, n, x;
    cin >> t;
    while (t -- != 0)
    {
        cin >> n;
        x = n % 2 == 0 ? n : n - 1;
        x = x / 2;
        cout << (x*x-x)/2 <<endl ;
    }
}