#include <bits\stdc++.h>
using namespace std;

int ma_nhan_vien_tiep_theo = 1;

class NhanVien {
private:
    string ma_nv;
    string ho_ten;
    string gioi_tinh;
    string ngay_sinh;
    string dia_chi;
    string ma_so_thue;
    string ngay_ky_hop_dong;

public:
    // Constructor m?c d?nh: g�n m� nh�n vi�n t? d?ng
    NhanVien() {
        stringstream ss;
        ss << setw(5) << setfill('0') << ma_nhan_vien_tiep_theo++;
        ma_nv = ss.str(); // G�n chu?i m� nh�n vi�n d� d?nh d?ng
    }

    friend istream& operator >> (istream& is, NhanVien& nv);
    friend ostream& operator << (ostream& os, const NhanVien& nv);
};

// �?nh nghia ch?ng to�n t? nh?p (operator>>)
// �?c th�ng tin nh�n vi�n t? lu?ng nh?p
istream& operator >> (istream& is, NhanVien& nv) {
    // �?c t?ng d�ng cho c�c thu?c t�nh, v� ch�ng c� th? ch?a kho?ng tr?ng
    getline(is, nv.ho_ten);
    getline(is, nv.gioi_tinh);
    getline(is, nv.ngay_sinh);
    getline(is, nv.dia_chi);
    getline(is, nv.ma_so_thue);
    getline(is, nv.ngay_ky_hop_dong);
    return is; // Tr? v? lu?ng d? cho ph�p x�u chu?i
}

// �?nh nghia ch?ng to�n t? xu?t (operator<<)
// In th�ng tin nh�n vi�n ra lu?ng xu?t
ostream& operator << (ostream& os, const NhanVien& nv) {
    os << nv.ma_nv << " "
       << nv.ho_ten << " "
       << nv.gioi_tinh << " "
       << nv.ngay_sinh << " "
       << nv.dia_chi << " "
       << nv.ma_so_thue << " "
       << nv.ngay_ky_hop_dong;
    return os; // Tr? v? lu?ng d? cho ph�p x�u chu?i
}

int main() {
    // T?i uu h�a hi?u su?t nh?p xu?t C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N; // S? lu?ng nh�n vi�n
    cin >> N; // �?c s? lu?ng nh�n vi�n t? input
    cin.ignore(); // Lo?i b? k� t? newline c�n l?i trong b? d?m sau khi d?c N

    vector<NhanVien> danh_sach_nv;
    danh_sach_nv.reserve(N); // C?p ph�t tru?c b? nh? d? tr�nh c?p ph�t l?i nhi?u l?n

    // �?c th�ng tin cho t?ng nh�n vi�n
    for (int i = 0; i < N; ++i) {
        NhanVien nv;      // T?o d?i tu?ng NhanVien m?i. M� NV du?c g�n t? d?ng ? d�y.
        cin >> nv;   // S? d?ng ch?ng to�n t? >> d? nh?p d? li?u cho nv
        danh_sach_nv.push_back(nv); // Th�m nv v�o vector
    }

    // In danh s�ch nh�n vi�n d� nh?p
	for (int i = 0; i < N; i++) {
		NhanVien nv = danh_sach_nv[i];
        cout << nv << endl; // S? d?ng ch?ng to�n t? << d? xu?t d? li?u c?a nv
    }

    return 0;
}
