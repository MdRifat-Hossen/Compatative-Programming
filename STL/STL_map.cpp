#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> m;
    m.insert({1, 10});
    m.insert({2, 20});
    m.insert({3, 30});
    m[7] = 70;
    auto it = m.find(2);
    m.insert(it, {5, 20});
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}