//Sort the array of 0s, 1s, and 2s?
#include <iostream>
using namespace std;
void Display(int A[],int size){
    int count_zero=0;
    int count_one=0;
    for(int i=0;i<size;i++){
        if(A[i]==0){
            count_zero++;
        }else{
            count_one++;
        }
        
    }
    for(int i=0;i<count_zero;i++){
        A[i]=0;
    }
    for(int i=count_zero;i<count_one;i++){
        A[i]=1;
    }
    for(int i=count_one;i<size;i++){
        A[i]=2;
    }
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
int main() {
    int A[]={2,1,0,2,2,1,1,0,0};
    int size=sizeof(A)/sizeof(A[0]);
    Display(A,size);
    return 0;
}