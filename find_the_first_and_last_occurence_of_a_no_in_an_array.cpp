#include<iostream>
using namespace std;
void ReverseString(string s){
    if(s.length()==0){
        return;
    }
    string ros=s.substr(1);
    ReverseString(ros);
    cout<<s[0];

}
int main(){
    ReverseString("kunal");
}

    
