#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<string> vec{101};
    for(int i=1;i<=100;i++){
        if( i%3==0 ) vec[i]+="Fizz";
        if( i%5==0 ) vec[i]+="Buzz";
        if( i%3!=0 && i%5!=0 ) vec[i]=to_string(i);
    }
    for(int i=1;i<=100;i++) cout<<vec[i]<<endl;
}

