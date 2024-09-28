#include <bits/stdc++.h>
using namespace std;
//dem sl chu cai,ki tu so,ki tu dac biet trong xau
int main(){
    string s;getline(cin,s);
    int cntAl = 0;
    int cntNumber = 0;
    int cntSpecial = 0;
    for(char c: s){
        if(isalpha(c)){
            cntAl++;
        }
        else if(isdigit(c)){
            cntNumber++;
        }
        else{
            cntSpecial++;
        }
    }
    cout << cntAl << " " << cntNumber << " " << cntSpecial << endl;
    return 0;
}