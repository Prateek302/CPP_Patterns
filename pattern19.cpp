#include<iostream>
using namespace std;

int main(){
      
      int n;
      cin>>n;
      int row=1;
      while(row<=n){

        int col=0;
        
        while(col<n){
            char ch=('A'+row+col-1);
            cout<<ch;
            ch=ch+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
      }


}