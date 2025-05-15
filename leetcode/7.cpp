#include<bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    if(x > INT_MAX) return 0;
    long long l = -2147483648;
    long long r = 2147483647;
    bool flag = (x > 0) ? true : false;
    string s = to_string((x));
    if(!flag) s = s.substr(1);
    long long ans = 0;
    for(int i = (int)s.size() - 1;i > -1;i--){
        //2 ^ 31 : co 10 chu so ->
        ans = ans * 10 + (s[i] - '0');
        if(flag){
            //neu x duong
            if(ans > r){
                ans = 0;
                break;
            }
        }
        else{
            if(ans > (long long) abs(l)){
                ans = 0;
                break;
            }
        }
    }
    return (flag ) ? ans : (-1 * ans);//tra ve long long cx dc do khong bi tran pham vi int 
    //acc : thi xong thu = toan (khong dung xau xem co nhanh hon hay khong)
}

int main(){
    cout << reverse(-21474);
}