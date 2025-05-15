#include<bits/stdc++.h>
using namespace std;

/*string intToRoman(int sum)
{
    map<int,string> mp;
    string ans = "";
    mp[1] = "I";mp[5] = "V";mp[10] = "X";mp[50] = "L";mp[100] = "C";mp[500] = "D";mp[1000] = "M";
    mp[4] = "IV";mp[9] = "IX";mp[40] = "XL";mp[90] = "XC";
    mp[400] = "CD";mp[900] = "CM";
    while(sum >= 1000){
        ans += mp[1000];
        sum -= 1000;
    }
    while(sum >= 900){
        ans += (mp[900]);
        sum -= 900;
    }
    while(sum >= 500){
        ans += (mp[500]);
        sum -= 500;
    }
    while(sum >= 400){
        ans += mp[400];
        sum -= 400;
    }
    while(sum >= 100){
        ans += (mp[100]);
        sum -= 100;
    }
    while(sum >= 90){
        ans += mp[90];
        sum -= 90;
    }
    while(sum >= 50){
        ans += (mp[50]);
        sum -= 50;
    }
    while(sum >= 40){
        ans += (mp[40]);
        sum -= 40;
    }
    while(sum >= 10){
        ans += (mp[10]);
        sum -= 10;
    }
    
    if(sum == 9){
        ans += (mp[9]);
        sum = 0;
    }
    else if(sum == 4){
        ans += (mp[4]);
        sum = 0;
    }
    else{
        if(sum >= 5){
            ans += (mp[5]);
            sum -= 5;
        }
        for(int i=1;i<=sum;i++){
            ans += (mp[1]);
        }
    }
    return ans;
}*/

string intToRoman(int sum)
{
    string ans = "";
    vector<string> v = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    vector<int> vl = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    for(int i=0;i<13;i++){
        while(sum >= vl[i]){
            ans += v[i];
            sum -= vl[i];
        }
    }
    return ans;
}

int main(){
    cout << intToRoman(1994);
}