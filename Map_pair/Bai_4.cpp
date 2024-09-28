#include<bits/stdc++.h>
using namespace std;
/*
size(): so luong cap trong map
//cach them mot cap vao trong map : mp.insert({5,10})
*/
int main(){
   //multimap<datatype,datatype> nameMap;//cho phep nhieu key giopng nhau
    multimap<int,int> mp;
    //khong the dung nhu map : mp[key] = value;
    mp.insert({100,200});
    mp.insert({100,300});
    mp.insert({100,400});
    mp.insert({200,100});

//  dem xem key 100 xk bao nhieu lan
    cout << mp.count(100) << endl;//out: 3
    auto it  = mp.find(100);
    /*if(it!=mp.end()){
        //neu xh se tra ve iterator cua cap key-value dau tien
        cout << it->first << " " << it->second << endl;
    }*/

    if(it!=mp.end()){
        ++it;//dich sang key ben phai 1 don vi
        mp.erase(it);
    }else{
        cout << "NOT FOUND" << endl;
    }
    for(auto it: mp){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}