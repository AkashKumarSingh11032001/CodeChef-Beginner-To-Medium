#include <bits/stdc++.h>
using namespace std;


int recipe(int p){
    int count = 0;
    for(int i = 1 ; i <= 12; i++){
        if (p == (2^(i - 1)) + recipe(2^(i+1)-1)){
            count++;
        }
        
    }
    return count;

}
int main(){


    int T;
    cin>> T;

    while (T--)
    {
        /* code */
        long int p;
        cin >> p;

        cout<<recipe(p);
        
    }
    
}