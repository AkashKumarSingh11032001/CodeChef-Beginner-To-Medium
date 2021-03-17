#include <iostream>
using namespace std;

int main()
{

    cout << "Enter total money with 2 decimal point : ";
    int with_money;
    float tot_money;
    cin >> with_money >> tot_money;

    while (with_money < tot_money)
    {
        /* code */
        if (with_money % 5 == 0)
        {
            tot_money = tot_money - (with_money + 0.5);
            printf("%.2f", tot_money);
        }
        else if (with_money % 5 != 0)
        {
            printf("%.2f", tot_money);
        }
    }
    printf("%.2f", tot_money);

    return 0;
}