#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(2); //{2};
    cout << st.top() << " ";
    st.push(4); //{2,4};
    cout << st.top() << " ";
    st.push(5); //{2,4,5};
    cout << st.top() << " ";
    // st.emplace(7); //{2,4,5,6};
    // cout << st.top() << " ";
    st.pop(); //{2,4,5};
    cout << st.top() << " ";
    cout << endl;


    queue<int> q;
    q.push(2); //{2};
    cout << q.back() << " ";
    q.push(4); //{2,4};
    cout << q.back() << " ";
    q.back() += 5; //{2,9};
    cout << q.back() << " ";
    q.push(5); //{2,4,5};
    cout << q.back() << " ";
    // q.emplace(7); //{2,4,5,7};
    // cout << q.back() << " ";
    q.pop(); //{4,5,7};
    cout << q.front() << " ";
}