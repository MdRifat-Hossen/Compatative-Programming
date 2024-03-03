#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int n1, a, b;
    cin >> n1 >> a >> b;
    v.erase(v.begin() + n1 - 1);
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout << v.size() << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}