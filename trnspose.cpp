#include<iostream>
using namespace std;

int main(){
    int mul[6][6];
    int mat1 [5][5]={ {30,29,28,27,26},

                        {24,23,22,21,20},
                        {19,18,17,16,15},
                        {14,13,12,11,10},
                        {9,8,7,6,5}

                        };
                        cout<<"Array 1 elements: "<<endl;
                        for(int i=0; i<5;i++)
                        {
                            for(int j=0; j<5;j++)
                            {
                                cout<< mat1[i][j]<<" ";
                            }
                            cout<<endl;
                        }

                        cout<<"Array 2 elements: "<<endl;




                    int mat2 [5][6]={
                        {1,2,3,4,5,6},
                     {7,8,9,10,12,31},
                     {13,14,15,16,17,18},
                     {19,20,21,22,23,24},
                     {25,25,26,28,29,30}};

                    for(int i=0; i<5;i++)
                        {
                            for(int j=0; j<6;j++)
                            {
                                cout<< mat2[i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"========"<<endl;
                        cout<<"product of matrices= "<<endl;


   for(int i=0;i<5;i++)
{
for(int j=0;j<6;j++)
{

for(int k=0;k<6;k++)
{
mul[i][j]=mat1[i][k]*mat2[k][j];
}
}
}
