//Move all the negative elements to one side of the array:
#include <iostream>
using namespace std;
void Move_negative(int A[],int size){
    int count=0;
    for (int i=0;i<size;i++){
        if(A[i]<0){
           if(i!=count){
            int temp=A[i];
            A[i]=A[count];
            A[count]=temp;
           }
           count++;
        }
    }
   for(int i=0;i<size;i++){
    cout<<A[i]<<" ";
   }
}
int main() {
    int A[]={2,5,-9,-6,5,-3};
    int size=sizeof(A)/sizeof(A[0]);
    Move_negative(A,size);
    return 0;
}