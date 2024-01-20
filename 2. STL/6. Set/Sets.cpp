#include <bits/stdc++.h>

using namespace std;

// sorted and unique
int main()
{
    set<int> s;
    s.insert(1); //{1};
    s.insert(3); //{1,3}
    s.insert(2); //{1,2,3}
    s.insert(2); //{1,2,3}
    s.insert(4); //{1,2,3,4}

    auto it = s.find(4);
    cout << *(it) << " ";

    it = s.find(6); // if element is not there then it will return s.end();
    cout << *(it) << " ";

    s.erase(4); // takes log time
    int count = s.count(2);  //1 or 0
    cout << count << " ";

    return 0;
}