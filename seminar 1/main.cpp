#include <iostream>

using namespace std;
int n,m,a[100][100],i,j;

int creat_matrice(int n,int m,int a)
{
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }

}

int main() {
    cin>>n>>m;
    int b[100][100];
    citire_matrici(n,m,b)

    return 0;
}
