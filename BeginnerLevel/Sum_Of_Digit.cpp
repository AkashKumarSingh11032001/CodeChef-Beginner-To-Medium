#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, T;
    cin >> T ;
    
    while (T>0)
    {
        
    cin >> number;
    int sum = 0;
    
        while (number > 0)
        {
            int digit = number % 10;
            sum = sum + digit;
            number /= 10;
        }
        cout << sum << endl;
        T--;
    }

    
}