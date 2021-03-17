#include <iostream>

using namespace std;

int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    for (i = 1; i < n; ++i)
    {
        for (j = 0; j < (n - i); ++j)
            if (a[j] < a[j + 1])
            {
                // temp = a[j];
                // a[j] = a[j + 1];
                // a[j + 1] = temp;
                swap(a[j],a[j+1]);
            }
    }

    for (i = 0; i < n; ++i)
        printf("%d \n", a[i]);

    return 0;
}