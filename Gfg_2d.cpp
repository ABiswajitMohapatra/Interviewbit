//Transpose:
#include <iostream>
using namespace std;
void Transpose(int A[][3],int row,int col){
   int trans[3][3];
   for(int i=0;i<i<row;i++){
    for(int j=0;j<col;j++){
        trans[i][j]=A[j][i];
    }
   }
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<trans[i][j]<<" ";
    }
    cout<<endl;
}
}
int main() {
  int A[][3]={{1,2,3},{4,5,6},{6,7,8}};
int row=3;
int col=3;
Transpose(A,row,col);
}