#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    for(int i = 1;i<=m;i++){
        for(int j = n-i+1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}