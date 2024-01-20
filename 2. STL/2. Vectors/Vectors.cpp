#include <bits/stdc++.h>
using namespace std;

void func1()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
        v.emplace_back(i * 10);
    }
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *(i) << " ";
}

void func2()
{
    vector<pair<int, double> > v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(make_pair(i, i * 1.2));
        v.emplace_back(i, i * 10.6);
    }
    for (int i = 0; i != v.size(); i++)  //using normal integer loop
        cout << v[i].first << " " << v[i].second << endl;
}

void func3()
{
    vector<int> v1(5, 100); //5 items/elements of value 100 & it can be increased
    vector<int> v2(5);      // intialized with 5 elements by defult 0 value;
    vector<int> v3(v1);     // copy all the values of v1 in v3;
    for (auto i = v1.begin(); i != v1.end(); i++) //using iterator i.e pointer/memory address
        cout << *(i) << " ";
    cout << endl;
    for (auto i = v2.begin(); i != v2.end(); i++)
        cout << *(i) << " ";
    cout << endl;
    for (auto i = v3.begin(); i != v3.end(); i++) // automatically assign data type to a variable according to data assigned;
        cout << *(i) << " ";
    cout << endl;
}

void func4()
{
    vector<int> v1(5, 100);
    vector<int>::iterator it = v1.begin();
    *it = 193;
    cout << *(it) << " " << *(++it)<<endl;
    *it = 2989;
    vector<int>::iterator it1 = v1.end();
    // vector<int>::iterator it2 = v1.rbegin();
    // vector<int>::iterator it3 = v1.rend();
    for (it=v1.begin(); it != v1.end(); it++) // using iterator i.e pointer/memory address
        cout << *(it) << " ";
    cout << endl;
    for (auto i : v1) //for each loop
        cout << i << " ";
    cout << endl;
}

void func5()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
        v.emplace_back(i * 10);

    v.erase(v.begin() + 1); // for deleting element at 1st index or 2nd element

    for (auto i : v)       
        cout << i << " ";
    cout << endl;

    v.erase(v.begin(), v.begin() + 2); // from 0 to 1  >=lower bound && < upper bound

    for (auto i : v)        
        cout << i << " ";
    cout<<endl;
}

void func6()
{
    vector<int> v(2, 100); //{100,100};
    v.insert(v.begin(), 300); //{300,100,100}

    for (auto i : v)
        cout << i << " ";
    cout << endl;

    v.insert(v.begin()+1,2, 10); //{300,10,10,100,100}

    for (auto i : v)
        cout << i << " ";
    cout << endl;

    vector<int> odd, even;
    for (int i = 1; i <= 10;i++)
    {  
        if(i%2==0)
            even.emplace_back(i);
        else
            odd.emplace_back(i);
    }
    odd.insert(odd.begin() + 1, even.begin(), even.begin() + 2); // from 0 to 1  >=lower bound && < upper bound;
    odd.insert(odd.begin() + 4, even.begin() + 2, even.begin() + 4);

    for (auto i : odd)
        cout << i << " ";
    cout << endl;
}

void func7()
{
    vector<int> v,v2;
    for (int i = 0; i < 5; i++)
        v.emplace_back(i * 10);

    v.pop_back();
    for (auto i : v)
        cout << i << " ";

    //v -> {10,20}
    //v2 -> {30,40}
    v.swap(v2); //v -> {30,40}, v2 -> {10,20}
    v.clear(); //erases entire vector
    v.empty(); //returns boolean value of true/false
    cout << endl;
}

void func8()
{

}
int main()
{
    func1();
    cout << "*************************"<<endl;
    func2();
    cout << "*************************" << endl;
    func3();
    cout << "*************************" << endl;
    func4();
    cout << "*************************" << endl;
    func5();
    cout << "*************************" << endl;
    func6();
    cout << "*************************" << endl;
    func7();
    cout << "*************************" << endl;
    return 0;
}