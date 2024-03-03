// At Vector
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {1, 2, 3, 5, 5};
//     v.at(1) = 140;
//     // Spacific position replace the value;
//     if(v.size()==v.max_size())
//     {
//         cout<<"Tthis is the maximum size"<<endl;
//     }
//     else{
//         cout << v[1];
//     }

//     return 0;
// }
// -----------------------------------------------------------

// ----------------------------------------------------
// VErtor as front and V.back()
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> v = {'a', 'b', 'c'};
    v.at(0) = 'R';
    cout << v.front() << endl;
    v.at(2) = 1;
    cout << v.back();

    return 0;
}
// -----------------------------------------
