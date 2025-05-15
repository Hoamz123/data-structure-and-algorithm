#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s)
{
    long long l = -2147483648;
    long long r = 2147483647;

    long long ans = 0;
    while(s[0] == ' '){
        s = s.substr(1);
    }
    //doc dau '+' || '-'
    bool check = true;
    if(!isdigit(s[0])){
        if(s[0] == '+' || s[0] == '-'){
            check = (s[0] == '+') ? true : false;
            s = s.substr(1);//bo dau "-,+" ra khoi xau
        }
    }

    int i = 0;
    while(i < (int)s.size() && isdigit(s[i])){
        //trung nao s[i] van la so
        ans = ans * 10 + (s[i] - '0');
        
        if(check){
            // case : 1 -> co dau '+' o dau (check = true) -> so sanh voi r
            if(ans > r){
                ans = r;
                break;
            }
        }
        else{
            // case : 2 -> co dau '-' o dau (check = false) -> so sanh voi l
            if(ans > abs(l)){
                ans = l;
                break;
            }
        }
        ++i;
    }
    return (check) ? ans : (-1) * ans;
    //acc beats : 100%
    //medium
}


int main(){
    cout << myAtoi(".1");
}