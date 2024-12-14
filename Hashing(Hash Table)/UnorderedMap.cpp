#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    unordered_map<string,int> m;
    m["apple"] = 10;
    m["cherry"] = 30;
    m["cherr"] = 50;
    m["banana"] = 20;

    if(m.find("apple") != m.end())
        cout<<"found\n";
    else
        cout<<"not found";
    for(auto it = m.begin();it!=m.end();it++){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }

    return 0;
}