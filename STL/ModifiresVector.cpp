// Insert Function;
// Insert a two perametter(positopn,value)

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v(2);

//     // v.insert(v.begin() + 0, 2);
//     // v.insert(v.begin() + 1, 5);
//     // v.insert(v.begin() + 3, 3);
//     // v.insert(v.begin() + 4, 6);
//     // v.insert(v.begin() + 5, 8);
//     // v.insert(v.begin() + 6, 9);
//     // v.insert(v.begin() + 7, 3);
//     // =============================//
//     // Insert Multiple Element of given Index
//     // Three value (position,size,val)

//     for (auto i : v)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }
// -----------------------------------------------//

// Erase() ,Given spacific positon or index

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1};
    v.insert(v.begin() + 0, 5, 20);

    // v.erase(v.begin());
    // v.erase(v.begin(), v.end() + 2);
    for (auto i : v)
    {
        cout << i << " ";
    }
    auto it = find(v.begin(), v.end(), 1);
    if (it != v.end())
    {
        cout << endl
             << "Yes" << distance(v.begin(), it) << endl;
    }
    else
        cout << "No";

    return 0;
}