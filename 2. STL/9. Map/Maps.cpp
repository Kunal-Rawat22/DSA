//map sorts key in sorted order
//saves data in pair form (key, value)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mpp1;
    // map<int, pair<int, int> > mpp2;
    // map<pair<int, int>, int> mpp3;

    mpp1[1] = 2;
    mpp1.insert(make_pair(3, 1));
    mpp1.insert(make_pair(3, 3));
    mpp1.insert(make_pair(2, 4));

    // mpp2.insert({3, 3});
    // mpp1[{2, 3}] = 10;

    for(auto it: mpp1)
        cout << it.first << " "<<it.second<<endl;
    cout << mpp1[5];
    return 0;
}