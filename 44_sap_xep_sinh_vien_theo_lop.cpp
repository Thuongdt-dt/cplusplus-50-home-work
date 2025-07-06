#include <bits\stdc++.h>
using namespace std;

struct SinhVien {
    string ma_sv;
    string ho_ten;
    string lop;
    string email;
};

bool compareSinhVien(const SinhVien& a, const SinhVien& b) {
	if (a.lop != b.lop) {
		return a.lop < b.lop;
	}
    return a.ma_sv < b.ma_sv;
}

int main() {
	int n;
	cin >> n;
	
    vector<SinhVien> danh_sach_sinh_vien;
    string line;
    cin.ignore();

	for(int i = 0; i < n; i++) {
	    getline(cin, line);
        SinhVien sv;
        sv.ma_sv = line;
        
        getline(cin, sv.ho_ten);
        getline(cin, sv.lop);
        getline(cin, sv.email);

        danh_sach_sinh_vien.push_back(sv);
    }

    sort(danh_sach_sinh_vien.begin(), danh_sach_sinh_vien.end(), compareSinhVien);

    for (int i = 0; i < n; i++) {
        cout << danh_sach_sinh_vien[i].ma_sv << " " << danh_sach_sinh_vien[i].ho_ten << " " << danh_sach_sinh_vien[i].lop << " " << danh_sach_sinh_vien[i].email << endl;
    }

    return 0;
}
