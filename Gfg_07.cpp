//Move all the negative elements to one side of the array:
#include <iostream>
using namespace std;
void Move_negative(int A[],int size){
    
    int left=0;
    int right=size-1;
    while(left<right){
        if(A[left]<0){
            left++;
        }else{
            swap(A[left],A[right]);
            right--;
        }
    }
   for(int i=0;i<size;i++){
    cout<<A[i]<<" ";
   }
}

int main() {
    int A[]={2,-8,-89,78,5,-9,-6,5,-3};
    int size=sizeof(A)/sizeof(A[0]);
    Move_negative(A,size);
    return 0;
}