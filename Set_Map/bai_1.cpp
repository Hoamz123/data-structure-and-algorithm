#include<bits/stdc++.h>
using namespace std;
int main(){
    //set : cac phan tu khac nhau
    //multiset : cho phep cac phan tu giong nhau
    set<int> s;
    for(int i=0;i<10;i++){
        int x;cin >> x;
        s.insert(x);
    }
    //duyet set
    //for(int x : s) cout << x << " ";
    //sd iterator
    /*
    for(auto it = s.begin();it != s.end();it++){
        cout << *it << " ";//giai tham chieu
    }*/
   //rend() 1(begin) 2 3 4 5(rbegin) end()
    //duyet ngc
    /*for(auto it = s.rbegin();it!=s.rend();it++){
        cout << *it << " ";
    }*/

    // tim kien phan tu x trong set O(log(n))
    int x;cin >> x;
    //kt x co tt trong set hay k
    //if(s.find(x) != s.end()) cout << "Found" << endl;
    //else cout << "Not found" << endl;

    //dem so lan xh trong set->dung ham count de kt
    //if(s.count(x)!=0) cout << "Found" << endl;
    //else cout << "Not found" <<endl;

    //xoa phan tu x khoi set
    s.erase(x);
    for(int x : s) cout << x << " ";
}