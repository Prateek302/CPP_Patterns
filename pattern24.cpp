#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    
    while(row<=n){

          int space = row-1;
          while(space){
            cout<<" ";
            space=space-1;
          }
          
          int star = n-row+1;
          int count=row;
          while(star){

            cout<<count;
            count=count+1;
            star=star-1;
          }
          cout<<endl;
          row=row+1;

    }

}