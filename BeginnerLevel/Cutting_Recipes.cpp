#include <bits/stdc++.h>
using namespace std;

int elcud_gcd(int x, int y){

    if(x == 0){
        return y;
    }
    if(y == 0){
        return x;
    }
    if(x > y){
        return elcud_gcd(y,x%y);
    }
    else{
        return elcud_gcd(x,y%x);
    }
}

int main() {

    int T;
    cin>> T;
    while(T--){
        int n,ans;
        cin >> n;

        int arr[n];
        for(int i=0;i<n ;i++){
            cin >> arr[i];
        }

        ans = elcud_gcd(arr[0],arr[1]);

        for(int i = 2; i< n; i++){
            ans = elcud_gcd(ans,arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            /* code */
            cout << arr[i]/ans << endl;
        }
        






    }
}