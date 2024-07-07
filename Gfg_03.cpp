//Find the max and min element in the array:
#include <iostream>
using namespace std;
int Find_max(int A[],int size){
 int max=A[0];
 for(int i=0;i<size;i++){
    
        if(A[i]>max){
            max=A[i];
        }
 }
 return max;
}
int Find_min(int A[],int size){
int min=A[0];
 for(int i=0;i<size;i++){
        if(A[i]<min){
            min=A[i];
        }
    } 
 return min;
}
int main() {
    int A[]={2,45,3,67,89,8,9,1,111};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<Find_max(A,size)<<","<<Find_min(A,size);
    return 0;
}