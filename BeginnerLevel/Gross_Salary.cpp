#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    float salary,hra, da;


     while (T--)
     {
         /* code */
         cin >> salary ;

         if(salary < 1500) {
             hra = 0.1 * salary ;
             da = 0.9 * salary;
             printf("%.2f\n", salary + hra + da);

         }
         else {
             hra = 500 ;
             da = 0.98 * salary;
             printf("%.2f\n", salary + hra + da);
         }

     }
     
}