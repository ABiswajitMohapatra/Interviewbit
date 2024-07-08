#include <iostream>
using namespace std;
void Deletion(int A[],int size,int ele){
    for(int i=ele;i<size;i++){
        A[i]=A[i+1];
    }
    for(int i=0;i<size-1;i++){
        cout<<A[i]<<" ";
    }
}
int main() {
    int A[]={10,20,30,44,55,66,77,88};
    int size=sizeof(A)/sizeof(A[0]);
Deletion(A,size,4);
    return 0;
}
