#include <iostream>
#define Max 100
using namespace std;
int check[Max];
int hoanvi[Max];
int n;
void inkq()
{
    for (int i = 0; i < n; i++)
    {
        cout << hoanvi[i] << " ";
    }
    cout << endl;
}
void thu(int k)
    {
        for (int i = 0; i < n; i++)
        {
            if (!check[i])
            {
                hoanvi[k] = i + 1;
                check[i]=1;
                if (k == n-1)
                {
                    inkq();
                }
                else
                {
                    thu(k + 1);
                }
                check[i] = 0;
            }
        }
    }
int main()
{
    cin >> n;
    
    thu(0);
    return 0;
}
