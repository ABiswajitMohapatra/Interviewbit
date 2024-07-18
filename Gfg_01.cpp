#include <iostream>
using namespace std;
int Findpeak(int Arr[],int size){
    int left=0;
    int right=size-1;
    while(left<right){
        int mid=(left+right)/2;
        if(Arr[mid]>Arr[mid+1]){
            right=mid;
        }else{
            left=mid+1;
        }
    }
    return left;
}
int main() {

//Find a peak element which is not smaller than its neighbors?

int Arr[]={3,5,6,8,12,9,23,10};
int size = sizeof(Arr) / sizeof(Arr[0]);
cout<<Findpeak(Arr,size)<<endl;;
    return 0;
}