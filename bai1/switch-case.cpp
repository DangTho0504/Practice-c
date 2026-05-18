#include <iostream>
using namespace std;

int main() {

    int n;
    int i = 1;
    int tong = 0;

    cout << "Nhap n: ";
    cin >> n;

    while(i <= n) {

        tong = tong + i;

        i++;

    }

    cout << "Tong = " << tong;

    return 0;
}