#include<iostream>

using namespace std;

int main(){
    int rowCount,colCount;
    cin>>rowCount>>colCount;

    //first row and last row star print
    for(int row=0; row<rowCount; row=row+1){
        if(row==0 || row==rowCount-1){
            for(int col=0; col<rowCount; col=col+1){
                cout<<"*";
            }
        }
        else{
            //remaining middle rows
            //first star
            cout << "*";
            for(int i=0;i<colCount-2; i++){
                //spaces
                cout<<" ";
            }
            //last star
            cout<<"*";

        }
        cout<<endl;
    }
}