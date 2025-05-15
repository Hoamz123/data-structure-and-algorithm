#include<bits/stdc++.h>
using namespace std;

string shiftingLetters(string s, vector<vector<int>> &shifts)
{
    int n = shifts.size();
    int len = s.size();
    vector<int> fre(len+1,0);//mang cong don
    for(int i=0;i<n;i++){
        int start = shifts[i][0];
        int end = shifts[i][1];
        int dir = shifts[i][2];
        if(dir == 1){
            //tang
            fre[start]++;//bat dau tang
            fre[end + 1]--;//dung tang
        }else{
            fre[start]--;//bat dau giam
            fre[end+1]++;//dung giam
        }
    }
    vector<int> frefix(len);
    frefix[0] = fre[0];
    for(int i=1;i<len;i++){
        frefix[i] = fre[i] + frefix[i-1];
    }

    for(int i=0;i<len;i++){
        int cnt = (frefix[i] % 26 + 26) % 26;
        s[i] = 'a' + (s[i] - 'a' + cnt) % 26;
    }
    return s;
    //accacc
}
//khi muon thay doi (tang) giam tu st đêns end một giá trị chỉ cần thay đổi tang(giam) ở vị trí start và giam(tang) ở vị trí end + 1
//khi cộng dồn tất cả các phần tử tử start đên =end sẽ đc loang thay đổi
int main(){
    for(char x = 'a';x <= 'z';(x)++) cout << x << " ";
}