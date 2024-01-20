#include <bits/stdc++.h>

using namespace std;

// sorted and not unique
int main()
{
    multiset<int> s;
    s.insert(1); //{1};
    s.insert(3); //{1,3}
    s.insert(2); //{1,2,3}
    s.insert(2); //{1,2,2,3}
    s.insert(2); //{1,2,2,2,3}
    s.insert(4); //{1,2,2,2,3,4}

    auto it = s.find(6); // if element is not there then it will return s.end();
    cout << *(it) << " ";

    int count = s.count(2); // n or 0
    cout << count << " ";

    it = s.find(2);
    s.erase(it);
    count = s.count(2);
    cout << count << " ";

    s.erase(2);
    count = s.count(2);
    cout << count << " ";

    return 0;
}