
//Reverse a string
// #include <iostream>
// using namespace std;
// void Reverse(string s){
// string rev="";
// for(int i=s.length();i>=0;i--){
//   rev+=s[i];
// }
// cout<<rev<<endl;
// }
// int main() {
//     string s="Biswa";
//     Reverse(s);
//     return 0;
// }

#include <iostream>
using namespace std;
void Reverse(string s){
    int left=0;
    int  right=s.length()-1;
    while(left<right){
        char temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
cout<<s<<" ";
}
int main() {
    string s="Biswa";
    Reverse(s);
    return 0;
}