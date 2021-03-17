#include <bits/stdc++.h>
using namespace std;

int firstdig(int n)
{

    while (n >= 10)
    {
        n /= 10;
    }
    return n;
}

int lastdig(int n)
{

    return n % 10 ;
}

int main()
{

    int T;
    cin >> T;
    while(T>0){
        int n;
        cin>>n;
        int sum = firstdig(n) + lastdig(n);
        cout<<sum<<endl;
        T--;
    }
}