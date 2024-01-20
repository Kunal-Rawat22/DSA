#include <bits/stdc++.h>
using namespace std;

int main()
{
    //push -> log(n)
    //pop -> log(n)
    //top -> O(1)

    //max heap
    priority_queue<int> pq;
    pq.push(5);              //{5};
    pq.push(2);              //{2,5};
    cout << pq.top() << " "; //{5};
    pq.push(8);              //{2,5,8};
    cout << pq.top() << " "; //{8};
    pq.push(10);             //{2,5,8,10};
    cout << pq.top() << " "; //{10};
    pq.pop();                //{2,5,8};
    cout << pq.top() << " "; //{8};
    cout << endl;


    //min heap
    priority_queue<int, vector<int>, greater<int> > mpq;
    mpq.push(5);              //{5};
    mpq.push(2);              //{2,5};
    cout << mpq.top() << " "; //{2};
    mpq.push(8);              //{2,5,8};
    cout << mpq.top() << " "; //{2};
    mpq.push(10);             //{2,5,8,10};
    cout << mpq.top() << " "; //{2};
    mpq.pop();                //{5,8,10};
    cout << mpq.top() << " "; //{5};
    cout << endl;
}