#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    int lenMax = -100;int n = s.size();
    if(s.empty()) return 0;
    set<char> se; // luu tam thoi xau co cac phan tu khac nhau lien tiep
    int l = 0;
    for(int r=0;r<n;r++){
        while(se.find(s[r]) != se.end()){
            se.erase(s[l++]);
        }
        se.insert(s[r]);
        lenMax = max(lenMax,r - l + 1);
    }
    return lenMax;
    //on lai sliding window
    //acc
}
int main(){
    cout << lengthOfLongestSubstring("umvejcuuk");
}