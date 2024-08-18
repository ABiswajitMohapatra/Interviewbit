//Union:
#include <iostream>
using namespace std;
bool ispresent(int num[],int size,int x){
    for(int i=0;i<size;i++){
        if(num[i]==x){
            return true;
        }
    }
     return false;
}
void Union(int A[],int B[],int s1,int s2){
    for (int i=0;i<s1;i++){
        cout<<A[i]<<" ";
    }
    for(int i=0;i<s2;i++){
        if(!ispresent(A,s1,B[i])){
            cout<<B[i]<<" ";
        }
    }
    }

int main() {
     int A[]={1,2,3,4,5,6,23,2,2};
    int B[]={2,4,9,7,8,1,6,89};
    int s1=sizeof(A)/sizeof(A[0]);
    int s2=sizeof(B)/sizeof(B[0]);
    Union(A,B,s1,s2);
    return 0;
}