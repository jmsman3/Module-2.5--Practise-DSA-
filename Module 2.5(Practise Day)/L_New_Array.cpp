#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    vector<int> c;
    c.insert(c.end(), v2.begin(), v2.end());
    c.insert(c.end(), v1.begin(), v1.end());
    for (auto it = c.begin(); it < c.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
