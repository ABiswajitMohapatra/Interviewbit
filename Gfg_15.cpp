//Find the first non-repeating element in a given array of integers?

#include <iostream>
using namespace std;
void first_non_repeating(int A[],int size){
for(int i=0;i<size;i++){
    bool found=false;
    for(int  j=0;j<size;j++){
        if(i!=j && A[i]==A[j]){
            found=true;
            break;
        }
    }
    if(!found){
        cout<<A[i];
        return;
    }
}
cout<<"mililani";
}
int main() {
    int A[]={1,2,3,2,3,1,4,78};
    int size=sizeof(A)/sizeof(A[0]);
    first_non_repeating(A,size);
    return 0;
}

