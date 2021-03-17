#include <bits/stdc++.h>
using namespace std;

int main()
{

    unsigned long int n, k;
    cin >> n >> k;

    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % k == 0)
        {
            count++;
        }
    }

    cout << count << endl;
}
