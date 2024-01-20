#include <bits/stdc++.h>
#include <utility>
using namespace std;

int main()
{
    pair<int, double> p(2, 78.89);
    cout << p.first << " " << p.second << endl;
    pair<string, double> p1("Hello", 89.90);
    pair<bool, pair<string, double> > p2(true, p1);
    pair<int, double> arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i].first = i;
        arr[i].second = i * 10.4;
    }
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    for (int i = 0; i < 5; i++)
        cout << arr[i].first << " " << arr[i].second << endl;
    return 0;
}