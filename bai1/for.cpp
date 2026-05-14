#include <iostream>
using namespace std;
int main(){
    //bai2: in từ 10->1
    // Bài 3: In số chắn 1->20
    // Bài 4: in bảng cửu chương
    // Bài 5: tính tổng 1+2+3+4+..+n
    // Bài 6: tính gia thừa n!
    // Bài 7: Đếm có bao nhiêu số chắn từ 1->n
    // Bài 8: kiểm tra số nguyên tố
    // Bài 9: in tam giác 
                        // *
                        // **
                        // ***
                        // ****
     cout << "Bai 2: ";
      for (int i = 10; i >= 1; i--)
    {
        cout << i << " ";
    }

    cout << endl  << "Bai 3: ";
    for (int i = 0; i <= 20; i+=2)
    {
        cout << i << " ";
    }
    
    cout << endl  << "Bai 4:" << endl;
    int a;
    cout << "nhap a = ";
    cin >> a ;
    for (int i = 1; i <= 2; i++)
    {
        cout << a << " x " << i << " = " << a*i << endl;
    }
    
    //
    cout << "Bai5" << endl;
    int tong  = 0;
    for (int i = 1; i <= a; i++)
    {
         tong = tong +i ;
    }
    cout << "tong = " << tong;
   
    //
    cout << endl << "Bai6" << endl;
    int gt = 1;
    for (int i = 1; i <= a; i++)
    {
         gt = gt * i ;
    }
    cout << a << "! = " << gt;

    //* thọ nguyễn //
    cout << endl << "Bài 7";

    return 0 ;
}