#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i;
    for (i = 0; i < t; i++)
    {
        string s, p;
        cin >> s;
        cin >> p;
        int j, len_p;
        len_p = p.size();
        while (len_p != 0)
        {
            char a;
            a = p[len_p - 1];
            for (j = 0; j < s.size(); j++)
            {
                if (s[j] == a)
                {
                    s.erase(s.begin() + j);
                    break;
                }
            }
            len_p--;
        }
        //cout << s << endl;
        sort(s.begin(), s.end());
        //cout << s << endl;
        //cout << p << endl;
        string s1, s2;
        s1 = s;
        s2 = s;
        for (j = 0; j < s1.size(); j++)
        {
            if (s1[j] > p[0])
            {
                break;
            }
        }
        //cout << j << endl;
        s1.insert(j, p);
        //cout << s1 << endl;
        for (j = 0; j < s2.size(); j++)
        {
            if (s2[j] >= p[0])
            {
                break;
            }
        }
        //cout << j << endl;
        s2.insert(j, p);
        //cout << s2 << endl;
        cout << min(s1, s2) << endl;
    }
    return 0;
}

