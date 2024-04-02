//sinh day nhi phan
#include <iostream>
#include <string.h>

using namespace std;
string a = "";
int n;
// sinh dãy nhị phân độ dài n
void sinhnhiphan(int n, string s)
{
    if (s.length() == n)
        cout << s << endl;
    else
    {
        sinhnhiphan(n, s + '0');
        sinhnhiphan(n, s + '1');
    }
}
int main()
{

    cin >> n;
    sinhnhiphan(n, a);
}
