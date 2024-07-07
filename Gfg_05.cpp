// Find the occurrence of an integer in the array
#include <iostream>
using namespace std;
int count_num(int A[],int size){
    int count=0;
    int key=3;
    for(int i=0;i<size;i++){
        if(A[i]==key){
            count++;
        }
    }
    return count;
}
int main() {
    int A[]={3,4,5,3,3,3,6,7};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<count_num(A,size);
    return 0;
}