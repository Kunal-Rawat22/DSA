#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(2);    //{2};
    // l.emplace_back(4); //{2,4};
    l.push_front(5);   //{5,2,4};
    // l.emplace_front(); //{2,4};

    deque<int> dq;
    dq.push_back(2);    //{2};
    // dq.emplace_back(4); //{2,4};
    dq.push_front(5);   //{5,2,4};
    // dq.emplace_front(); //{2,4};
    dq.pop_back();      //{2};
    dq.pop_front();     //{};
    dq.back();
    dq.front();
}