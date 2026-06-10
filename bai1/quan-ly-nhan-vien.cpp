#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct NhanVien
{
    int id;
    string ten;
    string phongBan;
    float luong;
};
void nhapNhanVien(NhanVien &nv)
{
    cout << "Nhap ID nhan vien: ";
    cin >> nv.id;
    cin.ignore();

    cout << "Nhap ho va ten: ";
    getline(cin, nv.ten);

    cout << "Nhap phong ban: ";
    getline(cin, nv.phongBan);

    cout << "Nhap luong: ";
    cin >> nv.luong;
}

void xuatNhanVien(NhanVien nv)
{
    cout << left << setw(10) << nv.id << setw(25) << nv.ten << setw(20) << nv.phongBan << setw(15) << nv.luong << endl;
}

void nhapDanhSach(NhanVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhan vien thu: " << i + 1 << "\n";
        nhapNhanVien(ds[i]);
    }
}

void xuatDanhSach(NhanVien ds[], int n)
{
    cout << left << setw(10) << "ID" << setw(25) << "Ten" << setw(20) << "Phong Ban" << setw(15) << "Luong" << endl;
    for (int i = 0; i < n; i++)
    {
        xuatNhanVien(ds[i]);
    }
}

int timViTriNhanVienTheoID(NhanVien ds[], int n, int maID)
{
    for (int i = 0; i < n; i++)
    {
        if (ds[i].id == maID)
        {
            return i;
        }
    }
    return -1;
}

int timViTriNhanVienTheoTen(NhanVien ds[], int n, string name)
{
    for (int i = 0; i < n; i++)
    {
        if (ds[i].ten == name)
        {
            return i;
        }
    }
    return -1;
}

void hienThiNhanVienTimDuoc(NhanVien ds[], int n)
{
    int luaCHon;
    cout << "1: Tim theo ID:\n";
    cout << "2: Tim theo ten:\n";
    cout << "Nhap lua chon: ";
    cin >> luaCHon;
    int vt = -1;
    switch (luaCHon)
    {
    case 1:
    {
        int maID;
        cout << "Nhap ID: ";
        cin >> maID;
        vt = timViTriNhanVienTheoID(ds, n, maID);
        break;
    }
    case 2:
    {

        string name;
        cin.ignore();
        cout << "Nhap ten: ";
        getline(cin, name);
        vt = timViTriNhanVienTheoTen(ds, n, name);
        break;
    }
    default:
    {
        cout << "Lua chon k hong hop le";
        return;
    }
    }
    if (vt == -1)
    {
        cout << "\nKhong co trong danh sach nhan vien\n";
    }
    else
    {
        cout << "Thong tin nhan vien:\n";
        cout << left << setw(10) << "ID" << setw(25) << "Ten" << setw(20) << "Phong Ban" << setw(15) << "Luong" << endl;
        xuatNhanVien(ds[vt]);
    }
}

void luongMax(NhanVien ds[], int n)
{
    float maxLuong = ds[0].luong;
    for (int i = 0; i < n; i++)
    {
        if (ds[i].luong > maxLuong)
        {
            maxLuong = ds[i].luong;
        }
    }
    cout << left << setw(10) << "ID" << setw(25) << "Ten" << setw(20) << "Phong Ban" << setw(15) << "Luong" << endl;
    for (int i = 0; i < n; i++)
    {
        if (maxLuong == ds[i].luong)
        {
            xuatNhanVien(ds[i]);
        }
    }
}
void luongMin(NhanVien ds[], int n)
{
    float minLuong = ds[0].luong;
    for (int i = 0; i < n; i++)
    {
        if (ds[i].luong < minLuong)
        {
            minLuong = ds[i].luong;
        }
    }
    cout << left << setw(10) << "ID" << setw(25) << "Ten" << setw(20) << "Phong Ban" << setw(15) << "Luong" << endl;
    for (int i = 0; i < n; i++)
    {
        if (minLuong == ds[i].luong)
        {
            xuatNhanVien(ds[i]);
        }
    }
}

void luongTang(NhanVien ds[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i].luong > ds[j].luong)
            {
                NhanVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    xuatDanhSach(ds, n);
}

void suaNhanVien(NhanVien ds[], int n)
{
    int maID;
    cout << "Nhap ID can sua: ";
    cin >> maID;
    int vt = timViTriNhanVienTheoID(ds, n, maID);
    if (vt == -1)
    {
        cout << "Khong tim thay nhan vien\n";
        return;
    }
    cout << "Thong tin hien tai:";
    xuatNhanVien(ds[vt]);
    cout << "Nhap thong tin moi";
    cin.ignore();

    cout << "Nhap ten moi: ";
    getline(cin, ds[vt].ten);

    cout << "Nhap phong ban moi: ";
    getline(cin, ds[vt].phongBan);

    cout << "Nhap luong moi: ";
    cin >> ds[vt].luong;

    cout << "\nSua thanh cong!\n";
}

int main()
{
    cout << "==== QUAN LY NHAN VIEN ====\n";
    int n;
    NhanVien ds[1000];
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    nhapDanhSach(ds, n);
    cout << "\n===== DANH SACH NHAN VIEN =====\n";
    xuatDanhSach(ds, n);
    cout << "\n===== DANH SACH TIM THEO ID HAY TEN =====\n";
    hienThiNhanVienTimDuoc(ds, n);
    cout << "*****Luong cao nhat*****\n";
    luongMax(ds, n);
    cout << "*****Luong thap nhat*****\n";
    luongMin(ds, n);
    cout << "\n===== DANH SACH LUONG TANG =====\n";
    luongTang(ds, n);
    suaNhanVien(ds, n);
    cout << "\n===== DANH SACH UPDATE =====\n";
    xuatDanhSach(ds, n);
    return 0;
}
