#include <iostream>
using namespace std;
bool ispresent(int num[],int size,int x){
    for(int i=0;i<size;i++){
        if(num[i]==x){
            return true;
        }
    }
    return false;
}
void Union(int A[],int B[],int size1,int size2){
   for(int i=0;i<size1;i++){
    cout<<A[i]<<" ";
   }
   for(int i=0;i<size2;i++){
    if(!ispresent(A,size1,B[i])){
    cout<<B[i]<<" ";
    }
   }
}
int main() {
    
    int A[]={2,3,4,2,3,4};
    int size1=sizeof(A)/sizeof(A[0]);
    int B[]={12,3,4,56,1,2,3};
int size2=sizeof(B)/sizeof(B[0]);
Union(A,B,size1,size2);


   
         
}