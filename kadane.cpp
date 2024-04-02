#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long int cur_sum = 0;
    long int max_sum = -501;

    for (i = 0; i < n; i++)
    {
        cur_sum = cur_sum + a[i];
        if (cur_sum > max_sum)
        {
            max_sum = cur_sum;
        }
        if (cur_sum < 0)
        {
            cur_sum = 0;
        }
    }
    printf("%ld", max_sum);
    return 1;
}