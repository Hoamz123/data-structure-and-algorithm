#include<bits/stdc++.h>
using namespace std;

vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
{
    //mot xau tm thi moi xau trong words2 la con cua no
    int fx[26] = {0};
    for(auto word : words2){
        int tmp[26] = {0};
        for(char c : word){
            tmp[c - 'a']++;// c - 'a' -> dua ve so nguyen
        }
        for(int i=0;i<26;i++){
            fx[i] = max(fx[i],tmp[i]);//voi moi ki tu luu lai tan xuat xuat hien loon nhat -> khi do case tan xuat nho hon chac chan se la con
        }
    }
    vector<string> ans;
    for(auto word : words1){
        int tmp[26] = {0};
        //duyet tat ca cac tu trong words1
        for(char c : word){
            tmp[c - 'a']++;
        }
        bool flag = true;
        for(int i=0;i<26;i++){
            if(tmp[i] < fx[i]){
                flag = false;
                break;
            }
        }
        //neu ko chay vao if -> flag
        if(flag) ans.push_back(word);
    }
    return ans;
    //acc
}

int main(){
    vector<string> words1 = {"amazon","apple","facebook","google","leetcode"};
    vector<string> words2 = {"e","o"};
    vector<string> ans = wordSubsets(words1,words2);
    for(auto it : ans) cout << it << "  ";
    cout << endl;
}