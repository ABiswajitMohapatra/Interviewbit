//Find the missing integer?
#include <iostream>
using namespace std;
int Missing(int A[],int size){
    int num=size+1;
     int sumofnum=num*(num+1)/2;
     int sum=0;
     for(int i=0;i<size;i++){
        sum+=A[i];
     }
     return sumofnum-sum;
}
int main() {
    
    int A[]={1,2,3,4,5,6,8,9,10};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<Missing(A,size);
}