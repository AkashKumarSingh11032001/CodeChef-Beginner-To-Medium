#include <bits/stdc++.h>
using namespace std;

int add(int a, int b) {
    return a+b;
}

int main()
{

    int T, A, B;

    cin >> T;
    while (T != 0)
    {
        cin >> A >> B;
        cout << add(A,B) <<endl;
        T--;
    }
    return 0;
}