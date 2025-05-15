#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

class student
{
private:
    string msv;
    string name;
    string classs;
    string date;
    double gpa;
    static int cnt;
public:
    student(string name,string classs,string date,double gpa){
        cnt++;
        this->name = name;
        this->classs = classs;
        this->date = date;
        this->gpa = gpa;
        this->msv = "SV" + string(3 - to_string(cnt).length(),'0');
        this->msv += to_string(cnt);
    }

    double getGpa(){
        return this->gpa;
    }

    void chName(){
        string tmp = this->name;
        for(int i=0;i<(int)tmp.size();i++){
            tmp[i] = tolower(tmp[i]);
        }

        for(int i=0;i<(int)tmp.size();i++){
            if(tmp[i] != ' '){
                tmp[i] = toupper(tmp[i]);
            }
            while(i < (int)tmp.size() && tmp[i] != ' '){
                i++;
            }
        }
        this->name = tmp;
    }

    void chDate(){
        string tmp = this->date;
        if(tmp[2] != '/') tmp = "0" + tmp;
        if(tmp[5] != '/') tmp.insert(3,"0");
        this->date = tmp;
    }


    string getMsv(){
        return this->msv;
    }

    void inTT(){
        cout << this->msv << " " << this->name << " " << this->classs << " " << this->date << " " << fixed << setprecision(2) << this->gpa << endl;
    }

};

int student :: cnt = 0;

bool cmp(student a,student b){
    if(a.getGpa() != b.getGpa()) return a.getGpa() > b.getGpa();
    return a.getMsv() < b.getMsv();
}


int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);cout.tie(0);
    int n;cin >> n;
    vector<student> v;
    string name;
    string classs;
    string date;
    double gpa;
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,name);
        getline(cin,classs);
        getline(cin,date);
        cin >> gpa;
        student st = student(name,classs,date,gpa);
        st.chDate();
        st.chName();
        v.push_back(st);
    }

    sort(v.begin(),v.end(),cmp);

    for(student i : v){
        i.inTT();
    }

}