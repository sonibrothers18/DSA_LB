// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main(){
    
    int rowCount;

    cout<<"Enter the number of rows: ";
    cin>>rowCount;

    for(int row = 0; row < rowCount; row++){
        for(int col = 0; col < row+1; col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}