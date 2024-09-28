#include<bits/stdc++.h>
using namespace std;
//kiem tra key co xh trong map hay khong
/*
tim kiem tren key
find : tra ve iterator 0(log(n))
count : dem xem co bao nhieu key 1(tim thay) or 0(khong tim thay)
erase() : xoa phan tu trong map O(log(n))
*/
int main(){
    map<int,int> mp;
    mp[10]  = 1;
    mp[100] = 2;
    mp[1000] = 3;
    mp[500] = 1000;
    /*if(mp.find(10) != mp.end()){
        //neu tim thay tra ve iterator tro den phan tu can tim trong map
        
    }
    else{
        ///tra ve mp.end()
        cout << "Not found" << endl;
    }*/
    /*auto pos = mp.find(100);
    if(pos != mp.end()){
        //giai tham chieu bang toan tu *
        cout << (*pos).first << " " << (*pos).second << endl;
    }
    else{
        //
        cout << "Not found" << endl;
    }*/

    mp.erase(500);//nem key vaop se xoa ca cap key-value
    /*for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }*/
    auto it = mp.begin();//tro den cap dau tien (key nho nhat)
    cout << it->first << " " << it->second << endl;
    auto pos = mp.rbegin();//tro den cap cuoi cung (key lon nhat)
    cout << pos->first << " " << pos->second << endl;
    return 0;
}
