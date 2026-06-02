#include <iostream>
using namespace std;
// Tinh tong 1+2+3+..+n
int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}
// In ngược số từ n về 1
int inSo(int n)
{
    if (n == 1)
        return 1;
    cout << n << " ";
    return inSo(n - 1);
}
// in so chan
void chan(int n)
{
    if (n <= 0)
    {
        return;
    }

    if (n % 2 != 0)
    {
        n--;
    }

    cout << n << " ";

    chan(n - 2);
}
// Fibonacci
int fi(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    return fi(n - 1) + fi(n - 2);
}
// Nhap n xuat day fibonacci

// void xuatFibonacci(int n){
//     for (int i = 0; i <= n; i++)
//     {

//     }

// }

int main()
{
    int n;
    cout << "Nhap so n = ";
    cin >> n;
    cout << "Tong n la: " << sum(n) << endl;
    cout << "In nguoc so n : " << inSo(n) << endl;
    cout << "In so chan: ";
    chan(n);
    cout << endl
         << "Day Fibonacci: ";
    // xuat mang fibonacci
    int a = 0;
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    // nhap x coi co nam trong fibonacci khong va o vi tri thu may
    int x;
    cout << endl
         << "Nhap x = ";
    cin >> x;
    for (int i = 1; i <= 1000; i++)
    {
        int c = a + b;
        if (x == c)
        {
            cout << x << " co nam trong day Fibonacci";
        }else
        {
            cout << x << " khong nam trong day Fibonacci";
        }
        a = b;
        b = c;
    }

    return 0;
}