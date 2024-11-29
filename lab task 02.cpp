#include<iostream>
using namespace std;
int main(){
    int e[3][4];
    for(int r=0;r<3;r++){
        for(int f=0;f<4;f++){
            cin>>e[r][f]; 
        }
    }
for(int r=0;r<3;r++){
        for(int c=0;c<4;c++){
            cout<<e[r][c]<<"\t";
        }
        cout<<"\n";
    }
}