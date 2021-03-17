

// OPTIMIZE WAY

#include <iostream>
using namespace std;

int main(){

    int with_money;
    float tot_money; 
    cin >> with_money >> tot_money;

    if(with_money >= 0 && with_money <= 2000 && tot_money >= 0 && tot_money <= 2000){
        if (with_money+0.5 > tot_money)
        {
            printf("%.2f\n", tot_money);
        }
        /* code */
        else if (with_money % 5 == 0)
        {
            tot_money = tot_money - (with_money + 0.5);
            printf("%.2f\n", tot_money);
        }
        else
        {
            printf("%.2f\n", tot_money);
        }
    }
    return 0;
}
