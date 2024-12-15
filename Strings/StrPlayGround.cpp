#include<iostream>
using namespace std;




int main(){
    string str = "Hello, world";
    //To add two strings use + operator.
    str = str + " \nGood Morning";
    cout<<str<<endl;

    //To get the sub string use library function substr(start,end).
    cout<<str.substr(3,5)<<endl;
    
    //To find the position of a substring use find() function.
    cout<<str.find(", ")<<endl;

    //Other comparison operators are '==', '<', '>', '<=', '>='.
    
    //reverse(begin,end) function can be used to reverse the string.

    // cout<<"Enter your name: ";
    // cin>> str; //Only prints first name if space separated.
    
    //Here is one more parameter in getline() find it yourself.
    // getline(cin,str);//Prints both first and last name.
    // cout<<"Hello, "+str<<endl;

    //Traverse characters in string using for each
    for(char ch:str){
        cout<<ch<<" ";//insted of space you could use any character or symbol or newline.
    }

    return 0;
}