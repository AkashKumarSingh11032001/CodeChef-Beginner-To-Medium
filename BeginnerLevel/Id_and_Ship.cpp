#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >>T;

    char ch;

    while (T--)
    {
        /* code */
        cin >> ch;
        if(ch == 'B' || ch == 'b') cout << "BattleShip" <<endl;
        else if(ch == 'C' || ch == 'c') cout << "Cruiser" <<endl;
        else if(ch == 'D' || ch == 'd') cout << "Destroyer" <<endl;
        else cout << "Frigate" <<endl;
    }
    
}