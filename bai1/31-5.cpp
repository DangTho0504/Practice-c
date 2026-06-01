#include <iostream>
#include <string>
using namespace std;

struct SanPham
{
    int id;
    string ten;
    int gia;
};

// Them san pham
void themSanPham(SanPham sp[], int &n)
{
    cout << "\n=== THEM SAN PHAM ===\n";

    cout << "Nhap ID: ";
    cin >> sp[n].id;

    cin.ignore();

    cout << "Nhap ten san pham: ";
    getline(cin, sp[n].ten);

    cout << "Nhap gia: ";
    cin >> sp[n].gia;

    n++;

    cout << "Them thanh cong!\n";
}

// Hien thi danh sach san pham
void hienThiSanPham(SanPham sp[], int n)
{
    if (n == 0)
    {
        cout << "\nChua co san pham nao!\n";
        return;
    }

    cout << "\n===== DANH SACH SAN PHAM =====\n";

    cout << "ID\tTen\t\tGia\n";

    for (int i = 0; i < n; i++)
    {
        cout << sp[i].id
             << "\t"
             << sp[i].ten
             << "\t\t"
             << sp[i].gia
             << endl;
    }
}

// Tao don hang
void taoDonHang(SanPham sp[], int n)
{
    if (n == 0)
    {
        cout << "\nKhong co san pham de ban!\n";
        return;
    }

    int id;
    int soLuong;

    cout << "\n=== TAO DON HANG ===\n";

    cout << "Nhap ID san pham: ";
    cin >> id;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (sp[i].id == id)
        {
            found = true;

            cout << "Ten san pham: "
                 << sp[i].ten
                 << endl;

            cout << "Nhap so luong: ";
            cin >> soLuong;

            int tongTien = sp[i].gia * soLuong;

            cout << "\n===== HOA DON =====\n";
            cout << "San pham : " << sp[i].ten << endl;
            cout << "Don gia  : " << sp[i].gia << endl;
            cout << "So luong : " << soLuong << endl;
            cout << "Tong tien: " << tongTien << endl;

            break;
        }
    }

    if (!found)
    {
        cout << "Khong tim thay san pham!\n";
    }
}

int main()
{
    SanPham sp[100];
    int n = 0;

    int chon;

    do
    {
        cout << "\n=========================\n";
        cout << " QUAN LY BAN HANG DON GIAN\n";
        cout << "=========================\n";
        cout << "1. Them san pham\n";
        cout << "2. Hien thi san pham\n";
        cout << "3. Tao don hang\n";
        cout << "0. Thoat\n";
        cout << "Lua chon: ";
        cin >> chon;

        switch (chon)
        {
        case 1:
            themSanPham(sp, n);
            break;

        case 2:
            hienThiSanPham(sp, n);
            break;

        case 3:
            taoDonHang(sp, n);
            break;

        case 0:
            cout << "Tam biet!\n";
            break;

        default:
            cout << "Lua chon khong hop le!\n";
        }

    } while (chon != 0);

    return 0;
}