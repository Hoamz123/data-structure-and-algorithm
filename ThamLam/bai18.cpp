#include<bits/stdc++.h>
using namespace std;
//[Tham Lam]. Bài 19. Di chuyển dấu ngoặc
int count(string s){
    int cnt = 0;
    stack<char> st;
    for(int i=0;i<(int)s.length();i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            //gap dau dong ngoac
            if(st.empty()) cnt++;//
            else{
                st.pop();//lay ra mot phan tu o dinh satck de tao thanh mot cap ()
            }
        }
    }
    return cnt;
}
int main(){
    string s;cin >> s;
    cout << count(s) << endl;
}