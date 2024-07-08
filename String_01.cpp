//swap two string:
#include <iostream>
using namespace std;
void swap(string s1,string s2,string temp){
    temp=s1;
    s1=s2;
    s2=temp;
}
int main() {
    string s1="biswa";
    string s2="vish";
    swap(s1,s2);
    cout<<s1<<","<<s2<<endl;
    return 0;
}