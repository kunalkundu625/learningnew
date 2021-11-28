#include<iostream>
using namespace std;
void removeword(string str){
      int j;
        for(int i = 0; str[i] != '\0'; ++i)
    {
        while (!( (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || str[i] == '\0') )
        {
            for(j=i; str[j] != '\0'; ++j)
            {
                str[j] = str[j+1];
            }
            str[j] = '\0'; 
        }
       
    }
cout<<str;
}
int main(){
    string s="*1abc7&hgf";
    removeword(s);
    }