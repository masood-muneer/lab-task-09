#include<iostream>
using namespace std;
int main(){
    int s[3][3];
    int sum=0;
    for(int r=0;r<3;r++) {
        for(int c=0;c<3;c++){
            cin>>s[r][c];
            sum=s[r][c]+sum; 
        }
    }
    cout<<"the sum is : "<<sum;
}