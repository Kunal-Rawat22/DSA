#include <iostream>

using namespace std;
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
}
void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << j + 1;
        cout << endl;
    }
    cout << endl;
}

void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << i + 1;
        cout << endl;
    }
    cout << endl;
}

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
            cout << "*";
        cout << endl;
    }
    cout << endl;
}
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            cout << j + 1;
        cout << endl;
    }
    cout << endl;
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
            cout << "_";
        for (int k = 2 * i + 1; k > 0; k--)
            cout << "*";
        cout << endl;
    }
    cout << endl;
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "_";
        for (int k = 0; k < 2 * n - 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
}
void pattern9(int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = n / 2 - i - 1; j > 0; j--)
            cout << "_";
        for (int k = 2 * i + 1; k > 0; k--)
            cout << "*";
        cout << endl;
    }
    for (int i = n / 2; i < n; i++)
    {
        for (int j = n / 2; j < i; j++)
            cout << "_";
        for (int k = 0; k < 2 * n - 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
}
void pattern10(int n) // for odd size
{
    int mid = n / 2;
    for (int i = 0; i <= mid; i++)
    {
        for (int j = mid - i; j > 0; j--)
            cout << "_";
        for (int k = 2 * i + 1; k > 0; k--)
            cout << "*";
        cout << endl;
    }
    for (int i = mid + 1; i < n; i++)
    {
        for (int j = 0; j < i - mid; j++)
            cout << "_";
        for (int k = 0; k < 2 * n - 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
}

void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= n / 2)
            {
                if (j <= i)
                    cout << "*";
                else
                    break;
            }
            else
            {
                if (j < n - i)
                    cout << "*";
                else
                    break;
            }
        }
        cout << endl;
    }
    cout << endl;
}

void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << '1';
            else
                cout << "0";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern13(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << j + 1;
        for (int k = (n - i - 1) * 2; k > 0; k--)
            cout << '_';
        for (int l = i; l >= 0; l--)
            cout << l + 1;
        cout << endl;
    }
    cout << endl;
}

void pattern14(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << ++count << " ";
        cout << endl;
    }
    cout << endl;
}

void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
            cout << ch++ << " ";
        cout << endl;
    }
    cout << endl;
}

void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n - i; j++)
            cout << ch++ << " ";
        cout << endl;
    }
    cout << endl;
}

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
            cout << ch << " ";
        cout << endl;
    }
    cout << endl;
}

void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n - i - 1; j++)
            cout << '_';
        int breakpoint = (2 * i + 1) / 2;
        for (int k = 1; k <= 2 * i + 1; k++)
        {
            cout << ch;
            if (k <= breakpoint)
                ch++;
            else
                ch--;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - i - 1;
        for (int j = 0; j <= i; j++)
        {
            cout << ch++;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern20(int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2 - i; j++)
            cout << "*";
        for (int k = 0; k < 2 * i; k++)
            cout << "_";
        for (int j = 0; j < n / 2 - i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n / 2; i < n; i++)
    {
        for (int j = n / 2; j <= i; j++)
            cout << "*";
        for (int k = 0; k < 2 * n - 2 * i - 2; k++)
            cout << "_";
        for (int j = n / 2; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    return 0;
}
