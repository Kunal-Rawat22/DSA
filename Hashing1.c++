#include<bits/stdc++.h>
#include<iostream>
    int hashh[10000000]={0};

using namespace std;
int main()
{
    int n,q;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //pre-compute
    int hash[1000000]={0};
    while(n!=0)
    {
        hashh[arr[--n]]++;
    }
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;
        //fetch
        cout << hashh[number]<<endl;
    }
        return 0;
}