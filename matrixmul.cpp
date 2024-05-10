#include<iostream>
using namespace std ;
int main(){
    int row1,column1,row2,column2;
    cout<<"Enter Size for row of matrix 1 :";
    cin>>row1;
    cout<<"Enter Size for column of matrix 1: ";
    cin>>column1;
    int Matx1[row1][column1];
    cout<<"Enter elements for 1st Matrix:\n ";
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cin>>Matx1[i][j];
        }
    }
    cout<<"Matrix 1: "<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cout<<Matx1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter Size for row of matrix 2 :";
    cin>>row2;
    cout<<"Enter Size for column of matrix 2 ";
    cin>>column2;
    int Matx2[row2][column2];
    cout<<"Enter elements for 2nd Matrix:\n ";
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cin>>Matx2[i][j];
        }
    }
    cout<<"Matrix 2: "<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cout<<Matx2[i][j]<<" ";
        }
        cout<<endl;
    }
    //logic for multiplication
    if(column1==row2){
        int mul[row1][column2];
        for(int i=0;i<row1;i++){
            for(int j=0;j<column2;j++){
                mul[i][j]=0;
                for(int k=0;k<column1;k++){
                    mul[i][j]+=Matx1[i][k]*Matx2[k][j];
                }
            }
        }
        cout<<"Matrix Multiplication: "<<endl;
        for(int i=0;i<row1;i++){
            for(int j=0;j<column2;j++){
                cout<<mul[i][j]<<" ";
    }
    cout<<endl;
}}
else{
    cout<<"Mulltiplication not possible";
}
return 0;
    }

