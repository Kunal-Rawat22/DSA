#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int hash[27]={0};
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i] - 97]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c-97];
    }
    return 0;
}