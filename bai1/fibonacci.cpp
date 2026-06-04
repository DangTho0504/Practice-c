#include <iostream>
using namespace std;
<<<<<<< HEAD

=======
void inDayFibonacci(int n){
    cout << "Day Fibonacci: ";
    int a = 0;
    int b = 1;
    for (int i = 0; i <=n; i++)
    {
        cout << a << " ";
        int c = a + b ;
        a = b ;
        b = c ;
    }
    cout << endl;
}
>>>>>>> 3fb53eb (them note)
int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    inDayFibonacci(n);
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

    if (fibonacci)
    {
        cout << n << " co trong day Fibonacci";
    }
    else
    {
        cout << "Trong day Fibonacci khong co " << n;
    }

    return 0;
}