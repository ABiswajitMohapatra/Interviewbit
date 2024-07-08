//C/C++ Program for Print all the duplicates in the input string.:
#include <iostream>
using namespace std;
void duplicate(string str){
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                found=true;
                cout<<str[i]<<" ";
                break;
            }
        }
    }
    if(!found){
        cout<<"not duplicated "<<endl;
    }
}
int main() {
    string str="biswaknjbbbi";
    duplicate(str);
    return 0;
}