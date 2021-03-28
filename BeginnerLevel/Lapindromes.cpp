#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string str;

    while (n--)
    {
        /* code */

        cin >> str;
        int len_str = str.length();

        if (len_str % 2 == 0)
        {
            string s1 = "";
            string s2 = "";
            for (int i = 0; i < len_str / 2; i++)
            {
                /* code */
                s1 += str[i];
            }
            for (int j = len_str / 2; j < len_str; j++)
            {
                /* code */
                s2 += str[j];
            }
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            if (s1 == s2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            string s1 = "";
            string s2 = "";
            for (int i = 0; i < len_str / 2; i++)
            {
                /* code */
                s1 += str[i];
            }
            for (int j = (len_str / 2) + 1; j < len_str; j++)
            {
                /* code */
                s2 += str[j];
            }
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            if (s1 == s2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}