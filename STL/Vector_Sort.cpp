#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    vector<int> v;
    int size = v.size();
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}