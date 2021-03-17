#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T > 0)
    {
        int number;
        cin >> number;
        int count = 0;

        while (number > 0)
        {
            
            int digit = number % 10;
            number /= 10;
            //cout<<digit<<endl;
            if (digit == 4)
            {
                count++;
            }
        }
        cout<< count<<endl;

        T--;
    }
    return 0;
}