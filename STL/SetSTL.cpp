#include <bits/stdc++.h>
using namespace std;
int main()
{

    set<int> s;
    s.insert(10);
    s.insert(5);
    set<int> a1 = {10, 0, 50, 60, 40};
    // s.insert_rang(a1);
    s.insert(a1.begin(), a1.end());
    for (auto v : s)
    {
        cout << v << " ";
    }

    return 0;
}