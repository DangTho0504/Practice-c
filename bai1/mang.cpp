#include <iostream>
using namespace std;

int main() {

    int n;
    int dem = 0;

    cout << "Nhap so phan tu: ";
    cin >> n;

    int a[20];

    // Nhap mang
    for(int i = 0; i < n; i++) {

        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];

    }

    // Dem so chan
    for(int i = 0; i < n; i++) {

        if(a[i] % 2 == 0) {

            dem++;

        }

    }

    cout << "Co " << dem << " so chan";

    return 0;
}