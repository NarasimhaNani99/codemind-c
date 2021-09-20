#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;
    
    if(year%400==0){
        cout<<"True";
    }else if(year%100==0){
        cout<<"False";
    }else if(year%4==0){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}