#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, q, y;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> y;
        auto it = lower_bound(v.begin(), v.end(), y);
        if (it != v.end() && y == *it)
        {
            cout << "Yes"
                 << " " << (it - v.begin()) + 1 << endl;
        }
        else
        {
            cout << "No"
                 << " " << (it - v.begin()) + 1 << endl;
        }
    }

    return 0;
}