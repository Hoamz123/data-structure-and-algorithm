#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    if(x < 0) return false;
    int tmp = x;
    long long ans = 0;
    while(tmp){
        ans = (ans * 10) + (tmp % 10);
        tmp /= 10;
    }
    return ans == x;
    //type :easy
}

int main(){
    cout << isPalindrome(127);
}