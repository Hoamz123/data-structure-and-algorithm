#include<bits/stdc++.h>
using namespace std;
// Hang doi uu tien
int main(){
    priority_queue<int> Q;//cach khai bao hang doi uu tien
    //priority_queue<int,vector<int>,greater<int>> Q; Phan tu o dinh mac dinh la nho nhat
    Q.push(6);
    Q.push(4);
    Q.push(2);
    Q.push(9);
    Q.push(1);
    cout << Q.top() << endl;//Phan tu o dinh bao gio cung la lon nhat(uu tien)
    Q.pop();
    cout << Q.top() << endl;// Tu can bang (mat O(log(n)))

}