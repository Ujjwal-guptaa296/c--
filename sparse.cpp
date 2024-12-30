#include <iostream>
using namespace std;
void sparseprint(int n,int m,int arr[][4]){
    int j=0;
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;
    while(j<n*m){
        for(int i=scol;i<=ecol&&j<n*m;i++){
             cout << arr[srow][i];
             j++;
        }
        srow++;
        cout<<endl;
        for(int i=srow;i<=erow&&j<n*m;i++){
             cout << arr[i][ecol];
             j++;
        }

        ecol--;cout<<endl;
        for(int i=ecol;i>=scol&&j<n*m;i--){
             cout << arr[erow][i];
             j++;
        }
        erow--;cout<<endl;
          for(int i=erow;i>=srow&&j<n*m;i--){
             cout << arr[i][scol];
             j++;
        }
        scol++;cout<<endl;

    }

}
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    sparseprint(4,4,arr);
    
}