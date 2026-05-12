#include <iostream>
using namespace std;

int main() {
int a,b,tong,hieu,tich,c;
float thuong;
cout << "nhap a: ";
cin >> a;
cout << "nhap b: ";
cin >> b;
cout << "nhap c: ";
cin >> c;
// tong, hieu, tich, thuong
tong = a+b;
hieu = a-b;
tich = a*b;
thuong = (float)a/b;
cout << "tong = " << tong << endl;
cout << "hieu = " << hieu << endl;
cout << "tich = " << tich <<endl;
cout << "thuong = " << thuong << endl;
//kiem tra chan le
if (a % 2 ==0)
{
    cout << "so chan" << endl;
} else {
    cout << "so le" << endl;
}
//xet hanh kiem
if (a >=8)
{
    cout << "gioi" << endl;
} else if (a >= 6.5)
{
    cout << "kha" << endl;
} else if ( a >= 5){
    cout << "trung binh" << endl;
} else
{
    cout << "yeu" << endl;
}
return 0;
}