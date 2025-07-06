#include <bits\stdc++.h>
using namespace std;

struct GiangVien {
    string maGV;
    string hoTen;
    string boMonGoc; 
    string boMonVietTat;
    string hoTenLowerCase;
};

string toLower(string s) {
	string res = "";
    for(int i = 0; i< s.size(); i++) {
    	res +=tolower (s[i]);
	}
    return res;
}

string vietTatBoMon(const string& boMonGoc) {
    string result = "";
    stringstream ss(boMonGoc);
    string word;
    while (ss >> word) {
        if (!word.empty()) {
            result += toupper(static_cast<unsigned char>(word[0])); 
        }
    }
    return result;
}

int main() {
    int N; 
    cin >> N;
    cin.ignore(); 

    vector<GiangVien> danhSachGV;
    danhSachGV.reserve(N); 

    for (int i = 0; i < N; ++i) {
        GiangVien gv;
        
        stringstream ss_maGV;
        ss_maGV << "GV" << setw(2) << setfill('0') << (i + 1);
        gv.maGV = ss_maGV.str();

        getline(cin, gv.hoTen);
        gv.hoTenLowerCase = toLower(gv.hoTen);
        getline(cin, gv.boMonGoc);
        gv.boMonVietTat = vietTatBoMon(gv.boMonGoc);
        
        danhSachGV.push_back(gv);
    }

    int Q;
    cin >> Q;
    cin.ignore();

    for (int q_idx = 0; q_idx < Q; ++q_idx) {
        string tuKhoa;
        getline(cin, tuKhoa);
        string tuKhoaLowerCase = toLower(tuKhoa); // Chuy?n t? khóa sang ch? thu?ng

        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << tuKhoa << ":" << endl;

		for(int i = 0; i < N; i++) {
            if (danhSachGV[i].hoTenLowerCase.find(tuKhoaLowerCase) != string::npos) {
                cout << danhSachGV[i].maGV << " " << danhSachGV[i].hoTen << " " << danhSachGV[i].boMonVietTat << endl;
            }
        }
    }

    return 0;
}
