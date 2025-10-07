#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v={1,2,2,3};
    cout<<v.size()<<endl;
    sort(v.begin(), v.end());
    auto i=unique(v.begin(), v.end());
    v.erase(i, v.end());
    cout<<v.size()<<endl;
    return 0;
}