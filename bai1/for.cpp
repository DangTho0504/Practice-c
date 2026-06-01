#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Nhap n: ";
    cin >> n;

    bool soNguyenTo = true;

    // So nho hon 2 khong phai so nguyen to
    if(n < 2) {

        soNguyenTo = false;

    }
    else {

        // Kiem tra chia het
        for(int i = 2; i < n; i++) {

            if(n % i == 0) {

                soNguyenTo = false;
                break;

            }

        }

    }

    // Ket qua
    if(soNguyenTo) {

        cout << n << " la so nguyen to";

    }
    else {

        cout << n << " khong phai so nguyen to";

    }

    return 0;
}