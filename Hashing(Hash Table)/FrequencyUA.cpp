#include<iostream>
#include<unordered_map>
using namespace std;


void frequencyUM(int arr[],int size){
    for(int i = 0; i < size;i++){
        //Checks if element seen before or right
        bool flag = false;
        for(int j = 0; j < i;j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
        //if element seen before then ignore it
        if(flag == true){
            continue;
        }
        //If not seen before then increment the frequency
        int freq = 1;
        for(int j = i+1;j < size;j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        cout<<arr[i]<<" "<<freq<<endl;
    }
}


void hashFreq(int arr[],int size){
    unordered_map<int,int> freqMap;
    for(int i = 0;i<size;i++){
        freqMap[arr[i]]++;
    }
    for(auto it : freqMap){
        cout<<it.first<<" "<<it.second<<endl;
    }
}


int main(){
    int arr[] = {10,12,10,15,10,20,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    frequencyUM(arr,size);
    return 0;
}