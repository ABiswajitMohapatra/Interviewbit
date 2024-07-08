//C/C++ Program for Return maximum occurring character in the input string
#include <iostream>
using namespace std;
void Max_occ(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
        if(str[i]==str[j]){
            count++;
        }
        }
    }
    cout<<count<<endl;
}
int main() {
    string str="biwsddnndnjnjwn";
    Max_occ(str);
    return 0;
}