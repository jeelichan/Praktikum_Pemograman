#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<string> arr{101};
    for(int i=1;i<=100;i++){
        if( i%3==0 ) arr[i]+="Fizz";
        if( i%5==0 ) arr[i]+="Buzz";
        if( i%3!=0 && i%5!=0 ) arr[i]=to_string(i);
    }
    for(int i=1;i<=100;i++) cout<<arr[i]<<endl;
}

