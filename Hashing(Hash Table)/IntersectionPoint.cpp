#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

//Using HashMap
void intersectionPoint(int arr1[],int arr2[],int m,int n){
    unordered_map<int,int> intSec;
    //Change the below two loops and see the magic
    for(int j=0;j<n;j++){ //1
        intSec[arr2[j]]++;
    }
    for(int i=0;i<m;i++){ //2
        intSec[arr1[i]]++;
    }
    for(auto e:intSec){
        if(e.second > 1){
            cout<<e.first<<" ";
        }
    }
}


//Using HashSet
void intersectionPoint2(int arr1[],int arr2[],int m,int n){
    unordered_set<int> s(arr2,arr2+n);
    for(int i=0;i<m;i++){
        if(s.find(arr1[i])!=s.end()){
            cout<<arr1[i]<<" ";
        }
    }
}


int main(){
    int arr1[] = {10,15,20,25,30,50};
    int arr2[] = {30,5,15,80};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    intersectionPoint2(arr1,arr2,m,n);
    return 0;
}