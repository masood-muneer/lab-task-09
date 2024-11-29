#include<iostream>
using namespace std;
int main(){
    int r[4][4]={{2,2,3,3},
    {3,3,4,4},
    {1,2,3,4},
    {5,6,7,8}};
    for(int f=0;f<4;f++){
        for(int d=0;d<4;d++)
        {
            cout<<r[f][d]<<"\t";
        }
        cout<<endl;
    }
}