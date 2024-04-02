#include <iostream>
#include <string.h>


using namespace std;
using namespace std;

string a, b;

int main()
{
    cin >> a >> b;
    int n = a.length();
    int m = b.length();
    if (n > m)
        swap(n, m), swap(a, b);
    while (n < m)
        a = "0" + a, n++;
    int carry = 0;
    string ans = "";
    for (int i = n - 1; i >= 0; --i)
    {
        int x = (a[i] - '0') + (b[i] - '0') + carry;
        carry = (x >= 10);
        x %= 10;
        string add = "";
        add += (x + '0');
        ans = add + ans;
    }
    if (carry)
        ans = "1" + ans;
    cout << ans << "\n";
}
