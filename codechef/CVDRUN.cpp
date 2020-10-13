#include <iostream>
using namespace std;

void solve_que(void);

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        solve_que();
        t--;
    }
    return 0;
}

void solve_que(void)
{
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int flag = 0;
    int cur = x;
    do
    {
        if (cur == y)
        {
            flag = 1;
            break;
        }
        cur = (cur + k) % n;
    } while (cur != x);
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
