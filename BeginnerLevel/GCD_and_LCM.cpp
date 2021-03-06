#include <bits/stdc++.h>
using namespace std;
// LCM => (n1 + n2)/ GCD

long long int gcd(long long int a, long long int b) {
 
    if(b==0) {
        return a;
    }
 
    return gcd(b, a%b);
}

long long int lcm(long long int a, long long int b) {
 
    return (a*b) / gcd(a,b);
}


int main()
{

    int T;
    cin >> T;

    long long int a, b;

    while (T--)
    {
        /* code */
        cin >> a >> b;

        // method 1 :
        // cout << gcd(a,b) <<" "<<lcm(a,b);
        // cout<<endl;

        // method 2 : inbuild function
        cout << __gcd(a,b) <<" "<< (a*b)/__gcd(a,b);
        cout << endl;


    
    }
}