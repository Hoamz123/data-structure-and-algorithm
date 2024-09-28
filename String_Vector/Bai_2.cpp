#include<bits/stdc++.h>
using namespace std;
//vector<datatype> nameVector;
int main(){
    vector<int> v;//create a vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    //cout << v.size() << endl;//size of vector
    //cout << v[0] << endl;

    //v.pop_back();//xoa mot phan tu o cuoi vector
    //for(int x : v) cout << x << " ";duyet vector
    //cout << *v.begin() << endl;//phan tu dau tien trong vector
    //cout << *v.end() << endl; // phan tu cuoi cung trong vector

    //duyet vector su dung iterator
    for(auto i = v.begin();i<v.end();i++){
        cout << *i << " ";//giai tham chieu
    }
    return 0;
}