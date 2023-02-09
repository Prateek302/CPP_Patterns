#include<iostream>
using namespace std;

int main(){

    int n;
    int i=1;
    int s=1;
    cin>>n;
    while(i<=n){
        int j=0;
        
        while(j<n){ 
            cout<<s<<" ";
            s=s+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }


}