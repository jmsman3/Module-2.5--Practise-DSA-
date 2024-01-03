#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = find(A.begin(), A.end(), A[i] + 1);

        if (it != A.end())
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
