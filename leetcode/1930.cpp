#include<bits/stdc++.h>
using namespace std;


int countPalindromicSubsequence(string s) {
    int n = s.size();
    set<string> rs;
    unordered_map<char, int> first,last;//luu chi so dau va chi so cuoi cua 1 ki tu
    for(int i=0;i<n;i++){
        //neu lan dau gap(tuong duong vi tri dau tien)
        if(first.find(s[i]) == first.end()){
            first[s[i]] = i;
        }
        last[s[i]] = i;//tu chem vao den khi gap phan tu cuoi cung do (map khong cho phep luu key gn -> tu de nen)
    }

    string tmp = "";//luu cac xau co the create duoc
    for(auto it : first){
        char x = it.first;//key
        int start = it.second;//value : chi so dau tien cua x
        int end = last[x];//chi so cua lan cuoi cung gap s[i]
        set<char> mid;    // luu tat ca cac ki tu nam giua
        if(end > start + 1){
            //co it nhat 1 ki tu nam giua
            //luu tat ca cac ki tu nam giua lai
            for(int i = start + 1;i<end;i++){
                mid.insert(s[i]);
            }

            for(auto m : mid){
                tmp = string(1,x) + m + string(1,x);
                //day vao rs
                rs.insert(tmp);
            }
        }
    }
    return rs.size();
}
//acc
int main(){
    string s = "aabca";
    cout << countPalindromicSubsequence(s);
}