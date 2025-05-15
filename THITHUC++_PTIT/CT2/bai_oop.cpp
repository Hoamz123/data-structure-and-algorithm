#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

class sinhvien{
    private:
    string msv,name,ngaysinh,lop;
    double gpa;
    public:
    sinhvien();
    sinhvien(string msv,string name,string ngaysinh,string lop,double gpa){
        this->msv = msv;
        this->name = name;
        this->ngaysinh = ngaysinh;
        this->lop = lop;
        this->gpa = gpa;
    }

    void chName(){
        string tmp = name;
        for(int i=0;i<(int)tmp.size();i++){
            tmp[i] = tolower(tmp[i]);
        }

        for (int i = 0; i < (int)tmp.size();i++){
            if(tmp[i] != ' '){
                tmp[i] = toupper(tmp[i]);
            }
            while(i < (int)tmp.size() && tmp[i] != ' '){
                ++i;
            }
        }
        this->name = tmp;
    }

    void chDate(){
        string date = ngaysinh;
        if(date[2] != '/'){
            date = "0" + date;
        }
        if(date[5] != '/'){
            date.insert(3,"0");
        }
        this->ngaysinh = date;
    }

    string getLop(){
        return this->lop;
    }

    string getName(){
        string ten;
        stringstream ss(name);
        string rs = "";
        while(ss >> ten){
            rs = ten + rs;
        }
        return rs;
    }

    void intt(){
        cout << msv << " " << name << " " << ngaysinh << " " << lop << " " << fixed << setprecision(2) << gpa << endl;
    }
};

bool cmp(sinhvien a,sinhvien b){
    if(a.getLop() != b.getLop()){
        return a.getLop() < b.getLop();
    }
    return a.getName() < b.getName();
}



int main(){
    int n;cin >> n;
    
    vector<sinhvien> v;
    string msv, name, date, lop;
    double gpa;
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,msv);
        getline(cin,name);
        getline(cin,date);
        getline(cin,lop);
        cin >> gpa;
        sinhvien sv = sinhvien(msv,name,date,lop,gpa);
        sv.chName();
        sv.chDate();
        v.push_back(sv);
    }


    sort(v.begin(),v.end(),cmp);

    for(sinhvien x : v){
        x.intt();
    }

}