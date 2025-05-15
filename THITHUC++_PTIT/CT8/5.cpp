#include<bits/stdc++.h>
using namespace std;
class hoamz
{
private:
    int power,blood;
    string alive;
public:

    hoamz(int power,int blood,string alive){
        this->blood = blood;
        this->power = power;
        this->alive = alive;
    }
    
    int getPower(){
        return this->power;
    }
    int getBlood(){
        return this->blood;
    }
    string getAlive(){
        return this->alive;
    }
    //neu gap nam doc
    void meetMushroom(){
        // Máu giảm đi 15, Sức mạnh giảm 2
        if (this->alive == "ALIVE"){
            this->blood -= 15;
            this->power -= 2;
        }
        //da chet
        if(this->blood <= 0 || this->power <= 0){
            this->alive = "DEAD";
            this->blood = 0;
            this->power = 0;
        }
    }

    // witch
    void meetWitch(int powerOfWitch){
        if (this->alive == "ALIVE"){
            if(powerOfWitch >= this->power){
                //chet
                this->alive = "DEAD";
                this->blood = 0;
                this->power = 0;
            }
            else{
                this->power += 5;
            }
        }
    }
    //pea
    void meetPea(){
        if (this->alive == "ALIVE"){
            this->blood += 10;
            this->power += 2;
        }
    }

    // soldier
    void meetSoldier(int powerOfSoldier){
        if (this->alive == "ALIVE"){
            if(powerOfSoldier >= this->power){
                //chet
                this->alive = "DEAD";
                this->blood = 0;
                this->power = 0;
            }
            else{
                this->blood += 5;
                this->power += 7;
            }
        }
    }

    void inTT(){
        cout << "POWER : " << this->power << endl << "BLOOD : " << this->blood << endl << this->alive << endl;
        cout << "--------------------\n";
    }

};
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string power,blood,alive;
    getline(cin,power);
    getline(cin,blood);
    cin >> alive;
    int pow = stoi(power.substr(8));
    int bloo = stoi(blood.substr(8));
    hoamz h = hoamz(pow,bloo,alive);//nhan vat ht
    int n;cin >> n;
    cin.ignore();
    while(n--){
        string t;
        getline(cin,t);
        //bat truong hop
        if(t[0] == 'p'){
            h.meetPea();
            h.inTT();
        }
        else if(t[0] == 'm'){
            h.meetMushroom();
            h.inTT();
        }
        else if(t[0] == 's'){
            int powerOfSoldier = stoi(t.substr(8));
            h.meetSoldier(powerOfSoldier);
            h.inTT();
        }
        else{
            int powerOfWitch = stoi(t.substr(6));
            h.meetWitch(powerOfWitch);
            h.inTT();
        }
    }
}

