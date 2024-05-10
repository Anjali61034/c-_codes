#include<iostream>
using namespace std;

int main(){
    int row1,row2,column1,column2;
    cout<<"Enter the size for row of matrix 1: ";
    cin>>row1;
    cout<<"Enter the size for column of matrix 1: ";
    cin>>column1;
    int  Matx1[row1][column1];
    cout<<"Enter elements for 1st Matrix\n";
    for( int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cin>>Matx1[i][j];
        }
    }
    cout<<"1st Matrix\n";
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cout<<Matx1[i][j]<<" ";
        }
    cout<<endl;
    }
    cout<<"Enter the size for row of matrix 2: ";
    cin>>row2;
    cout<<"Enter the size for column of matrix 2: ";
    cin>>column2;
    int  Matx2[row2][column2];
    cout<<"Enter elements for 2nd Matrix\n";
    for( int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cin>>Matx2[i][j];
        }
    }
    cout<<"2nd Matrix\n";
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cout<<Matx2[i][j]<<" ";
        }
    cout<<endl;
    }
if(row1==row2 && column1==column2){
     int Sum[row1][column1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            Sum[i][j]=Matx1[1][j] + Matx2[i][j];
        }
    cout<<endl;
    }
    cout<<"sum of above Matrixes\n";
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cout<<Sum[i][j]<<" ";
        }
    cout<<endl;
    }
}
else{
    cout<<"Sum of matrixes not possible as dimensions of matrixes are not equal";
}
return 0;
}


