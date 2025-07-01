#include <iostream>
using namespace std;

int main()
{
    int n,f,z;
    cin >> n >> f >> z;

    f += 50; z += 50;
    int matrix[90][90] = {0};
    int a=1;
    for(int c=50; c < n+50; c++)
    {
        for(int c1=50; c1 < n+50; c1++)
        {
            matrix[c][c1] = a++; 
        }
    }
    int saco1=0, casas=0;
    int naosei=1;
    int sds=1;
    bool fdp= true;
    cout << matrix[f][z] << " ";
    while(fdp)
    {
        for(int c=1; c < saco1; c++)
        {
            z += 1;
            if(matrix[f][z] != 0)
            {
                naosei++;
                if(naosei != n*n)
                cout << matrix[f][z] << " "; 
                else
                cout << matrix[f][z]; 
            }
            sds++;
            if(naosei == n*n){cout << "\n" << sds << "\n";return 0;}
        }
        for(int c=1; c < saco1; c++)
        {
            f += 1;
            if(matrix[f][z] != 0)
            {
                naosei++;
                if(naosei != n*n)
                cout << matrix[f][z] << " "; 
                else
                cout << matrix[f][z]; 
            }
            sds++;
            if(naosei == n*n){cout << "\n"<<sds << "\n"; return 0;}
        }
        saco1++;
        for(int c=1; c < saco1; c++)
        {
            z -= 1;
            if(matrix[f][z] != 0)
            {
                naosei++;
                if(naosei != n*n)
                cout << matrix[f][z] << " "; 
                else
                cout << matrix[f][z]; 
            }
            sds++;
            if(naosei == n*n){cout << "\n"<< sds << "\n"; return 0;}

        }
        for(int c=1; c < saco1; c++)
        {
            f -= 1;
            if(matrix[f][z] != 0)
            {
                naosei++;
                if(naosei != n*n)
                cout << matrix[f][z] << " "; 
                else
                cout << matrix[f][z]; 
            }
            sds++;
            if(naosei == n*n){cout << "\n"<<sds << "\n"; return 0;}
        }
        saco1++;
    }
}
