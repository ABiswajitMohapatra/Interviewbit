//Find common elements in three sorted arrays:
#include <iostream>
using namespace std;
void Common(int A[],int B[],int C[],int s1,int s2,int s3){
    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
        for(int k=0;i<s3;k++){
        if(A[i]==B[j]&& B[j]==C[k]){
            cout<<A[i]<<" ";
            break;
        }
    }
    }
    }
}
int main() {
    int A[]={1,2,3,4,5};
    int B[]={11,23,45,67,2,3};
    int C[]={2,45,67,88,90};
    int s1=sizeof(A)/sizeof(A[0]);
    int s2=sizeof(B)/sizeof(B[0]);
    int s3=sizeof(C)/sizeof(C[0]);
    Common(A,B,C,s1,s2,s3);
    return 0;
}