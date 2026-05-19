#include <iostream>
using namespace std;
int main()
{
    int n, gt = 1, tong = 0 ;
    cout << "Nhap n: ";
    cin >> n ;
    // nhập n , nếu n chẵn tính tổng , n lẽ kết thúc
  if (n % 2 ==0)
  {
    for (int i = 0; i <= n; i+=2)
    {
        tong += i;
    }
    cout << "tong = " << tong << endl;
  }
  else {
    cout << "n le bye" << endl;
  }
    // tim số chia hết cho 3 từ 10 đến 50
for (int k = 10; k < 50; k++)
{
    if ( k % 3 == 0)
    {
        cout << k << " ";
    }
    
}
// tính tổng S = 1!+2!+3!+...n!
int sum = 0;

for (int j = 1; j <= n; j++)
{
    gt *= j;
    sum += gt;
}
cout << endl << "S = " << sum << endl;
//kiem tra số hoàn hảo
int add = 0 ;

for (int i = 1; i < n; i++)
{
    if (n % i == 0)
    {
        add += i;
    } 
}
if (add == n)
{
    cout << n << "so hoan hao" << endl;
} else {
    cout << n << "so khong hoan hao" << endl;
}

// kiểm tra số nguyên tố ( số>1, chỉ chia hết cho 1 và chính nó)
if ( n % 1 ==0 && n % n ==0 )
{
    cout << n << " so nguyen to";
}
else
{
    cout << n << " khong phai so nguyen to";
}



  






return 0 ;
}