#include <iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int **arr= new int*[row];
    int sizes[]={};
    cout<<"Enter sizes of different rows"<<endl;
    for(int i=0;i<row;i++){
        cin>>sizes[i];
    }
    for(int i=0;i<row;i++){
      arr[i]=new int[sizes[i]];
        }
        return 1;
}