// Reverse the Array:
#include <iostream>
using namespace std;
void reverse(int Arr[],int size){
    int left=0;
    int right=size-1;
    while(left<right){
        int temp=Arr[left];
        Arr[left]=Arr[right];
        Arr[right]=temp;
        left++;
        right--;
    }
    for(int i=0;i<size;i++){
      cout<<Arr[i]<<" ";
    }
   
}
int main() {
    int Arr[]={3,4,5,6,7};
    int size=sizeof(Arr)/sizeof(Arr[0]);
    reverse(Arr,size);

}