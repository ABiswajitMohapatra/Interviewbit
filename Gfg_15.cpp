//Find the first non-repeating element in a given array of integers?

#include <iostream>
using namespace std;
int first_non_repeating(int A[],int size){
for(int i=0;i<size;i++){
    int j;
    for( j=i+1;j<size;j++){
        if(i !=j && A[i]==A[j]){   
            break;
 }
}
if(j==size){
return A[i];
 } 
}
return -1;
    }
int main() {
    int A[]={1,2,3,2,3,1,4,78};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<first_non_repeating(A,size);
    return 0;
}

