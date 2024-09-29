/*
Hang doi
Cach hoat dong: FIFO :first in first out
thao tac : enqueue : them mot phan tu vao cuoi hang doi
thao tac : dequeue : xoa mot phan tu khoi dau hang doi
how to create a queue:
queue<data_type> name;
push(x) : Them phan tu vao cuoi hang doi
front() : Truy cap vao phan tu o dau hang doi
pop() : Xoa phan tu khoi dau hang doi
back() :Truy cap vao phan tu cuoi hang doi

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
1 n  Đẩy số nguyên vào cuối hàng đợi
2 Loại bỏ phần tử ở đầu đầu hàng đợi (nếu hàng đợi rỗng thì thao tác này không có hiệu lực)
3 In ra phần tử ở đầu hàng đợi (không lấy ra khỏi hàng đợi, nếu hàng đợi rỗng thì in ra Empty! )
*/
int main(){
    queue<int> q;
    int t;cin >> t;
    while(t--){
        int choice;
        cin >> choice;
        if(choice == 1){
            int n;cin >> n;
            q.push(n);
        }
        else if(choice == 2){
            if(!q.empty()){
                q.pop();//lay phan tu o dau hang doi
            }
        }
        else{
            if(q.empty()) cout << "Empty!" << endl;
            else cout << q.front() << endl;
        }
    }
}