#include <iostream>
using namespace std;
void Insert(int A[],int size){
    int pos=2;
    int key=23;
    for(int i=size-1;i>=pos;i--){
        A[i+1]=A[i];
    }
    A[pos]=key;
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
int main() {
    int A[]={2,3,4,5,6,7};
    int size=sizeof(A)/sizeof(A[0]);
Insert(A,size);
    return 0;
}

