#include<bits/stdc++.h>
using namespace std;

bool isPrefixAndSuffix(string a,string b){
    int lenA = a.size();
    int lenB = b.size();
    if(lenB < lenA) return false;
    return (a == b.substr(lenB - lenA)) && (a == b.substr(0,lenA));
    //nghia la xau b  phai dai hon xau a
}

int countPrefixSuffixPairs(vector<string> &words)
{
    int ans = 0;
    int n = words.size();
    for(int i=0;i<n-1;i++){
        string x = words[i];
        for(int j = i+1;j<n;j++){
            if(isPrefixAndSuffix(x,words[j])) ans++;
        }
    }
    return ans;
}

int main(){
    vector<string> v = {"a","b","ab"};
    cout << countPrefixSuffixPairs(v);
}