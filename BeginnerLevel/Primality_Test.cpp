#include <bits/stdc++.h>
using namespace std;

int isPrime(int n) {

    if(n == 0 || n== 1){
        return false;
    }
    for(int i = 2 ; i <= n/2 ; i++){
        if(n % i == 0){
            return false;
            break;
        }
    }
    return true;
}
int main () {

    int T;
    cin >> T;
    
    long long int n;

    while (T--)
    {
        /* code */
        cin >> n;
        
        if(isPrime(n) == true){
            cout<<"yes" <<endl;
        }else {
            cout << "no" <<endl;
        }
    }
    
}