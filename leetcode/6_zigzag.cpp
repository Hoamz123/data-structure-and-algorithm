#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{
    vector<string> ans;
    ans.push_back("@");
    for(int i=1;i<=numRows;i++){
        ans.push_back("");
    }
    int lenS = s.size();
    s = "@" + s;//chi so bat dau chay tu khong
    int idx = 1;
    while(idx <= lenS){
        for(int i=1;i<=numRows;i++){
            ans[i].push_back(s[idx]);
            //cout << s[idx] << " hang " << i << " ki tu thu " << idx << endl;
            idx++;//sang ki tu ben phai
            if(idx > lenS){
                //dung : ket thuc qua trinh
                numRows = -1;//muc dich l de no ko chay xuong vong for ben duoi
                break;
            }
        }
        for(int i = numRows - 1;i > 1;i--){
            //cout << s[idx] << " hang " << i << " ki tu thu " << idx << endl;
            ans[i].push_back(s[idx]);
            idx++;
            if(idx > lenS) break;
        }
    }
    string result = "";
    for(int i=1;i<(int)ans.size();i++){
        result += ans[i];
    }
    return result;
    //acc
}

int main(){

    cout << convert("PAYPALISHIRING", 4);
}