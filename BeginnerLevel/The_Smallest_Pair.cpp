#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    int n;

    while (T--)
    {
        /* code */

        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
        }

        int siz = sizeof(arr) / sizeof(arr[0]);
        sort(arr,arr+siz);

        for (int i = 0; i < 1; i++)
        {
            /* code */
            cout <<  arr[i] + arr[i+1] << " ";
            break;
        }
    }
}