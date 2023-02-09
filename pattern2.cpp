#include<iostream>
using namespace std;

int main(){
    int a;
    int i=1;
    cin>>a;

    while(i<=a){
        int j=1;

        while(j<=a){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}