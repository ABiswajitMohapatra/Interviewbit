//Find duplicates in an array:
#include <iostream>
using namespace std;
bool isDuplicate(int A[],int size){
    bool found=false;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(A[i]==A[j]){
                found=true;
                cout<<A[i]<<endl;
                break;
            }
        }
    }
    if(!found){
        cout<<"not duplicated available"<<endl;
    }
}
int main() {
    int A[]={1,2,3,4,2,4,5,5,6,1};
    int size=sizeof(A)/sizeof(A[0]);
    isDuplicate(A,size);
    return 0;
}