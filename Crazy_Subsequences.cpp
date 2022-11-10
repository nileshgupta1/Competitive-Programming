#include <bits/stdc++.h>
using namespace std;
vector<char> b;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<char> a(s.begin(), s.end());
        vector<char> v;
        for (int i = 0; i < a.size() - 2; ++i)
        {
            if (a[i] == '0' && a[i + 2] == '0')
            {
                v.push_back(a[i + 1]);
                i += 2;
            }
            v.push_back(a[i]);
        }

        for (int i = 0; i < v.size() - 2; ++i)
        {
            if (v[i] == '0')
            {
                b.push_back(v[i + 1]);
                i += 2;
            }
            b.push_back(v[i]);
        }
        for (char i : b)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
