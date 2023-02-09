#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    

    while(row<=n){

        // print (1st tringle)
        int col=n-row+1;
        int count=1;
        while(col){
            cout<<count;
            count=count+1;
            col=col-1;
            

        }

        //print 2nd triangle
          int star=row;
          while(star){
            if (star>1){
               cout<<"*";
            }
            star=star+2;
          }


        // print 3rd triangle
        while(col){
            cout<<col;
            col=col-1;
        }

        

        // int start=row-1;
        // while(start){
        //     cout<<start;
        //     start=start-1;
        // }
        cout<<endl;
        row=row+1;
    }
}