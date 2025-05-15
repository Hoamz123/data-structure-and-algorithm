#include<bits/stdc++.h>
using namespace std;

class hoa
{

public:
    int sm;
    int mau;
    string tt;

    hoa(int sm,int mau,string tt){
        this->sm = sm;
        this->mau = mau;
        this->tt = tt;
    }


    int getSm(){
        return sm;
    }
    int getMau(){
        return mau;
    }
    string getTT(){
        return tt;
    }
    //nam doc
    void nd(){
        if(this->tt == "ALIVE"){
            this->mau -= 15;
            this->sm -= 2;
            if(this->sm <= 0 || this->mau <= 0){
                this->mau  = 0;
                this->sm  = 0;
                this->tt = "DEAD";
            }
        }
    }
    //dau than
    void dt(){
        if (this->tt == "ALIVE")
        {
            if(this->sm > 0 && this->mau > 0){
                this->mau += 10;
                this->sm += 2;
            }
        }
    }
    //pt
    void pt(int smpt){
        if(this->tt == "ALIVE"){
            if(this->sm <= smpt){
                this->mau = 0;
                this->sm  = 0;
                this->tt = "DEAD";
            }
            else{
                // thang
                this->sm += 5;
            }
        }
    }
    //gap linh

    void linh(int smpt){
        if (this->tt == "ALIVE")
        {
            if (this->sm <= smpt)
            {
                this->mau  = 0;
                this->sm  = 0;
                this->tt = "DEAD";
            }
            else{
                // thang
                this->sm += 7;
                this->mau += 5;
            }
        }
    }

    void inttt(){
        cout << "POWER : " << this->sm << endl;
        cout << "BLOOD : " << this->mau << endl;
        cout << this->tt << endl;
        cout << "--------------------"<< endl;
    }
};

int main(){
    string sm,mau,tt;
    getline(cin,sm);
    getline(cin,mau);
    cin >> tt;
    int st = stoi(sm.substr(8));
    int hp = stoi(mau.substr(8));
    hoa h = hoa(st, hp, tt);
    int n;cin >> n;
    cin.ignore();//chu y dong nay
    while(n--){
        string lc;getline(cin,lc);
        if (lc == "mushroom"){
            h.nd();
        }
        if (lc == "pea"){
            h.dt();
        }
        if(lc[0] == 'w'){
            int smpt = stoi(lc.substr(6));
            h.pt(smpt);
        }
        if(lc[0] == 's'){
            int sm = stoi(lc.substr(8));
            h.linh(sm);
        }
        h.inttt();
    }
    //ac
}