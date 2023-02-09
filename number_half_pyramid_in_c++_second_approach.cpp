#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    for(int row=0;row<n;row=row+1)
    {   
        int count = 0;
        for(int col=0;col<row+1;col=col+1)
        {
            count = count+1;
            cout<<count;
        }
        cout<<endl;
    }
}