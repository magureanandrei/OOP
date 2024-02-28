//
// Created by User on 2/28/2024

#include <iostream>
#include <fstream>

using namespace std;
ifstream fin ("fisierin.txt");
ofstream fout ("fisierout.txt");
int x;

int main()
{
    while(fin>>x)
    {
        fout<<x<<endl;
    }
    return 0;
}