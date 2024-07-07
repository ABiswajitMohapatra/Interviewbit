//Find the Union and Intersection of the two sorted arrays?
#include <iostream>
using namespace std;
void Intersection(int A[],int B[],int size1,int size2){
   for (int i=0;i<size1;i++){
    for(int j=0;j<size2;j++){
     if(A[i]==B[j]){
        cout<<A[i]<<" ";
     }
    }
   }
}
int main() {
    int A[]={1,2,3,4,5,6};
    int B[]={2,4,9,7,8,1,6};
    int size1=sizeof(A)/sizeof(A[0]);
    int size2=sizeof(B)/sizeof(B[0]);
    Intersection(A,B,size1,size2);
    return 0;
}