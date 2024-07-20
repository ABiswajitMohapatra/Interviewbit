#include <iostream>
using namespace std;

int main() {
    int A[]={2,3,4,-12,-34,89,-33,78,99,-100};
    int size=sizeof(A)/sizeof(A[0]);
    int B[size];
    int count=0;
    for(int i=0;i<size;i++){
    if(A[i]<0){
        B[count]=A[i];
         count++; 
    }
    }
    for(int i=0;i<size;i++){
        if(A[i]>0){
            B[count]=A[i];
            count++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<B[i]<<" ";
    }
}