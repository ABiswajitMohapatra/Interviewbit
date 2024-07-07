//Find the first repeating element in an array of integers?
#include <iostream>
using namespace std;
int Find_first_repeating(int A[],int size){
    cout<<"The first repeating element is:";
    
    for(int i=0;i<size;i++){
        if(A[i]==A[i+1]){
            return A[i];
        }
    }
    return -1;
}
int main() {
    int A[]={1,2,3,3,4,2,4,5,5,6,1};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<Find_first_repeating(A,size);
    return 0;
}