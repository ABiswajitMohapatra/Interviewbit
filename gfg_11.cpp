//Count Pairs with the given sum?
#include <iostream>
using namespace std;
void Pairsum(int A[],int size,int given){
  //  bool found=false;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
             if(A[i]+A[j]==given){
                cout<<"found at index :"<<i<<"," <<j<<endl;; // gives index
                cout<<"found the elements: "<<A[i]<<","<<A[j];// gives elements
           //  found=true;
            }
        }
    }
// if(!found){
//     cout<<"nehi mila"<<endl;
// }
}
int main() {
    
    int A[]={3,4,5,6,5,8};
    int size=sizeof(A)/sizeof(A[0]);
    Pairsum(A,size,12);
}