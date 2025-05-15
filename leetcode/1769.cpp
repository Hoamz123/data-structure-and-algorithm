#include<bits/stdc++.h>
#include<math.h>
using namespace std;

vector<int> minOperations(string boxes)
{
    boxes = "@" + boxes;
    int n = boxes.size() - 1;
    vector<int> ans;
    int idex = 1;//bat dau
    while(idex <= n){
        int cnt = 0;
        for(int i=1;i<=n;i++){
            if(boxes[i] != '0'){
                //neu trong hop co bong
                cnt += abs(i - idex);
            }
        }
        ans.push_back(cnt);
        idex++;
    }
    return ans;
    //acc nhung chua toi uu (thi xong nho xem solution)
    //medium
}

int main(){
    vector<int> v = minOperations("001011");
    for(int i : v) cout << i << " ";
}