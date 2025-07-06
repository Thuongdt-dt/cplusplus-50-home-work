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
    // Constructor m?c d?nh: gán mã nhân viên t? d?ng
    NhanVien() {
        stringstream ss;
        ss << setw(5) << setfill('0') << ma_nhan_vien_tiep_theo++;
        ma_nv = ss.str(); // Gán chu?i mã nhân viên dã d?nh d?ng
    }

    friend istream& operator >> (istream& is, NhanVien& nv);
    friend ostream& operator << (ostream& os, const NhanVien& nv);
};

// Ð?nh nghia ch?ng toán t? nh?p (operator>>)
// Ð?c thông tin nhân viên t? lu?ng nh?p
istream& operator >> (istream& is, NhanVien& nv) {
    // Ð?c t?ng dòng cho các thu?c tính, vì chúng có th? ch?a kho?ng tr?ng
    getline(is, nv.ho_ten);
    getline(is, nv.gioi_tinh);
    getline(is, nv.ngay_sinh);
    getline(is, nv.dia_chi);
    getline(is, nv.ma_so_thue);
    getline(is, nv.ngay_ky_hop_dong);
    return is; // Tr? v? lu?ng d? cho phép xâu chu?i
}

// Ð?nh nghia ch?ng toán t? xu?t (operator<<)
// In thông tin nhân viên ra lu?ng xu?t
ostream& operator << (ostream& os, const NhanVien& nv) {
    os << nv.ma_nv << " "
       << nv.ho_ten << " "
       << nv.gioi_tinh << " "
       << nv.ngay_sinh << " "
       << nv.dia_chi << " "
       << nv.ma_so_thue << " "
       << nv.ngay_ky_hop_dong;
    return os; // Tr? v? lu?ng d? cho phép xâu chu?i
}

int main() {
    // T?i uu hóa hi?u su?t nh?p xu?t C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N; // S? lu?ng nhân viên
    cin >> N; // Ð?c s? lu?ng nhân viên t? input
    cin.ignore(); // Lo?i b? ký t? newline còn l?i trong b? d?m sau khi d?c N

    vector<NhanVien> danh_sach_nv;
    danh_sach_nv.reserve(N); // C?p phát tru?c b? nh? d? tránh c?p phát l?i nhi?u l?n

    // Ð?c thông tin cho t?ng nhân viên
    for (int i = 0; i < N; ++i) {
        NhanVien nv;      // T?o d?i tu?ng NhanVien m?i. Mã NV du?c gán t? d?ng ? dây.
        cin >> nv;   // S? d?ng ch?ng toán t? >> d? nh?p d? li?u cho nv
        danh_sach_nv.push_back(nv); // Thêm nv vào vector
    }

    // In danh sách nhân viên dã nh?p
	for (int i = 0; i < N; i++) {
		NhanVien nv = danh_sach_nv[i];
        cout << nv << endl; // S? d?ng ch?ng toán t? << d? xu?t d? li?u c?a nv
    }

    return 0;
}
