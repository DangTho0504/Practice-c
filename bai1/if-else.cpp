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
// KIỂM TRA CHẴN LẼ
if (a % 2 ==0)
{
    cout << "so chan" << endl;
} else {
    cout << "so le" << endl;
}
//XÉT HẠN KIỂM
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

/* KIỂM TRA NĂM NHUẬN
Gợi ý: năm chia hết cho 4 và không chia hết 100 hoặc chi hết cho 400
*/ 
int nam, thang;
cout <<"nhap thang: ";
cin >> thang;
if (thang == 1 ||thang == 3 ||thang == 5 ||thang == 7 ||thang == 8 ||thang == 10 ||thang == 12 )
{
   cout << "thang " << thang <<" co 31 ngay";
}
else if (thang == 4 ||thang == 6 || thang == 9 ||thang == 11)
{
    cout << "thang " << thang <<" co 30 ngay";
}
else if (thang == 2){
   cout << "nhap nam: ";
   cin >> nam;
if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
{
    cout << " thang 2 co 29 ngay";
} else
{
    cout << "thang 2 co 28 ngay";
}
}
else {
    cout << " nhap sai thang";
}

return 0;
}