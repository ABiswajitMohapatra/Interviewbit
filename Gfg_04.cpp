//Write a program to sort the given array
#include <iostream>
using namespace std;
void Sort_Array(int A[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(A[i]<A[j]){
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
int main() {
    
     int A[]={2,45,3,67,89,8,9,1,111};
    int size=sizeof(A)/sizeof(A[0]);
    Sort_Array(A,size);
}