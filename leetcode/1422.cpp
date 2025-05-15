#include<bits/stdc++.h>
using namespace std;

int maxScore(string s)
{
    int sum = 0;
    for(char x : s) sum += (x - '0');
    int numberOfZeros = 0;
    int maxscore = -10;
    for(int i=0;i<(int)s.size()-1;i++){
        sum -= (s[i] - '0');
        if(s[i] == '0') numberOfZeros ++;
        maxscore = max(maxscore,sum + numberOfZeros);
    }
    return maxscore;
    //easy
    //acc : 0ms
}

int main(){
    cout << maxScore("00");
}