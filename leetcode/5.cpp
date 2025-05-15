#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string s)
{
    bool f[1001][1001];//f[i][j] : cho biet co the tao thanh xau doi xung tu chi so i den chi so j hay khong
    int n = s.size();
    int maxLen = 1;//luu do dai lon nhat
    string ans = "";
    s = "@" + s;//de bat dau tinh tu chi so 1
    for(int i=1;i<=n;i++) f[i][i] = true;// case nho nhat la co mot ki tu(do dai la mot)
    ans = s[1];
    //tinh tu xau co do dai = 2
    for(int len = 2;len <= n;len ++){
        for(int i=1;i<= n - len + 1;i++){
            //i : chi so bat dau
            int j = i + len - 1;
            //case : co hai ki tu trong mot xau
            if(len == 2) f[i][j] = (s[i] == s[j]);//true neu ki tu dau = ki tu cuoi
            else{
                //tu 3 ki tu tro len
                f[i][j] = (s[i] == s[j] && f[i+1][j-1]);
            }
            if(f[i][j]){
                //neu tu i -> j la xau doi xung
                if(len > maxLen){
                    maxLen = len;
                    ans = s.substr(i,len);
                }
            }
        }
    }
    
    
    return ans;//tim cach nhanh hon
    //medium
}
//acc

int main(){
    cout << longestPalindrome("abcde");
}