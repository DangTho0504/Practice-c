#include <iostream>
using namespace std;
void inDayFibonacci(int x){
    int a = 0;
    int b = 1;
    for (int i = 0; i < x; i++)
    {
        cout << a << " ";
        int c = a+b;
        a = b;
        b = c;
    }
}
int main()
{
    int x;
    cout << "Nhap x = ";
    cin >> x;
    cout << "Day Fibonacci: ";
    inDayFibonacci(x);
    cout << endl;
     int n;
    cout << "Nhap n = ";
    cin >> n;
    bool fibonacci = false;
    int a = 0;
    int b = 1;
    if (n == 0)
    {
        fibonacci = true;
        cout << "0 o vi tri thu 0\n";
    }
    else if (n == 1)
    {
        fibonacci = true;
        cout << "1 o vi tri thu 1\n";
    }

    for (int i = 2; i <= 1000; i++)
    {
        int c = a + b;

        if (n == c)
        {
            fibonacci = true;
            cout << n << " o vi tri thu " << i << endl;
            break;
        }
        if (c > n)
        {
            break;
        }
        a = b;
        b = c;
    }
    cout << boolalpha;
    if (fibonacci)
    {
        cout << fibonacci << "\n";
        cout << n << " co trong day Fibonacci";
    }
    else
    {
        cout << fibonacci << "\n";
        cout << "Trong day Fibonacci khong co " << n;
    }

    return 0;
}