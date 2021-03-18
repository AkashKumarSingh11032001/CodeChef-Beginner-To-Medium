#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    int even_count = 0, odd_count = 0;

    int arr[T];
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < T; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    if(even_count > odd_count){
        cout <<"READY FOR BATTLE" <<endl;
    }else{
        cout << "NOT READY" <<endl;
    }
}