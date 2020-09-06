//matrix multiplication using function


#include <iostream>

using namespace std;

void mult(int a[][3], int b [][2], int c[][2]);
void dsplay(int c[][2]);

int main()
{   int c[3][2];
    int a[3][3]={  {1,2,3},
                    {3,4,5},
                    {4,2,1}};

    int b[3][2]=  { {3,4},
                    {1,1},
                    {1,3}};



    mult(a,b,c);
    dsplay(c);

    return 0;
}

void mult (int a[][3], int b[][2],int c[][2]){
	for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
                c[i][j]=0;
            for (int k=0; k<3; k++){
            c[i][j]+=a[i][k]*b[k][j];
            }
        }
	}
}

void dsplay(int c[][2]){
for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            cout<<c[i][j] << " ";
        }
        cout<< endl;}
}

// must give one argument to function while giving 2D matrix to function
// matrix is transferred from main to function via pointer, hence value of matrix c will performing mult function in above program.

