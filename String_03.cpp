
//palindrome:
#include <iostream>
using namespace std;
void palindrome(string str){
string rev="";
//string temp=str;
for(int i=str.length()-1;i>=0;i--){
    rev+=str[i];
}
cout<<rev<<endl;
if(rev==str){
    cout<<"palindrome"<<endl;
}else{
    cout<<"Not  palindrome"<<endl;
}
}
int main() {
    string str="abcba";
    palindrome(str);
    return 0;
}