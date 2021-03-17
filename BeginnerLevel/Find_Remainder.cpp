#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    int A, B;

    while (T > 0)
    {
        cin >> A >> B;
        int rem = A % B;
        cout << rem << endl;
        T--;
    }

    return 0;
}