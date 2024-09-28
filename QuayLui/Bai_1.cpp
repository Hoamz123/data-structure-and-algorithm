#include<bits/stdc++.h>
using namespace std;
/*int x[1001],n;
void Try(int i){
    //Thử gán các giá trị có thể cho phần tử x[i]
    for(j = < Gia tri 1> ........ < Gia tri m>){
        Kiểm tra xem có gán được j cho x[i] hay không
        x[i] = j;
        //kiem tra xem i có phải lầ phần tuwr cuói cùng của cấu hình hay không
        if(i==n){
            //tim duoc một cấu hình
        }
        else{
            //Tiep tục đi xây dựng phần tử thứ i + 1
            Try(i+1);//goij đệ quy
        }
        <Back track>
        <Bỏ ghi nhận x[i] = j>
    }
}*/
// Bai toan sinh nhi phan
int x[1001],n,cnt;
void display(){
    for(int i=1;i<=n;i++){
        cout << x[i];
    }
    cout << endl;
}

void Try(int i){
    cnt++;
    //gan cac gia tri co the cho i
    for(int j=0;j<=1;j++){
        x[i] = j;
        if(i==n){
            display();
        }
        else Try(i+1);
    }
    cout << cnt << endl;//sau khi mot Try vao ìf(i==n)
}
int main(){
    cin >> n;
    Try(1);
}