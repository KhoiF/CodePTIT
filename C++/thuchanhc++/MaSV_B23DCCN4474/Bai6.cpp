#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

struct ThiSinh {
    string hoTen;
    double diemThi;
    string danToc;
    int khuVuc;
    double tongDiem;
    string maThiSinh;
    string trangThai;
};


string chuanHoaTen(const string &ten) {
    stringstream ss(ten);
    string word, result;
    while (ss >> word) {
        word[0] = toupper(word[0]); 
        for (size_t i = 1; i < word.length(); i++) {
            word[i] = tolower(word[i]);
        }
        result += word + " ";
    }
    if (!result.empty()) {
        result.pop_back(); 
    }
    return result;
}

// Hàm tính di?m uu tiên
double tinhDiemUuTien(const ThiSinh &ts) {
    double uuTien = 0.0;

    if (ts.khuVuc == 1) {
        uuTien += 1.5;
    } else if (ts.khuVuc == 2) {
        uuTien += 1.0;
    }

    if (ts.danToc != "Kinh") {
        uuTien += 1.5;
    }
    return uuTien;
}


string xacDinhTrangThai(double tongDiem) {
    return (tongDiem >= 20.5) ? "Do" : "Truot";
}


bool cmp(const ThiSinh &a, const ThiSinh &b) {
    if (a.tongDiem == b.tongDiem)
        return a.maThiSinh < b.maThiSinh; 
    return a.tongDiem > b.tongDiem; 
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    vector<ThiSinh> danhSach;

    for (int i = 0; i < n; ++i) {
        ThiSinh ts;
        ts.maThiSinh = "TS0" + to_string(i + 1);
        getline(cin, ts.hoTen);
        cin >> ts.diemThi; 
        cin.ignore(); 
        getline(cin, ts.danToc);
        cin >> ts.khuVuc; 
        cin.ignore(); 

        ts.hoTen = chuanHoaTen(ts.hoTen);
   
        ts.tongDiem = ts.diemThi + tinhDiemUuTien(ts);
   
        ts.trangThai = xacDinhTrangThai(ts.tongDiem);

        danhSach.push_back(ts);
    }

   
    sort(danhSach.begin(), danhSach.end(), cmp);

    
    for (const auto &ts : danhSach) {
        cout << ts.maThiSinh << " " << ts.hoTen << " " 
             << fixed << setprecision(1) << ts.tongDiem << " " 
             << ts.trangThai << endl;
    }

    return 0;
}
