#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for(int c=0; c < a; c++)
    {
        bool ehnao=false,ehnao2=false,ehnao3=false;
        int matrix[9][9];
        int a5;
        for(int c5=0; c5 < 9; c5++)
        {
            for(int c1=0; c1 < 9; c1++)
            {
                cin >> matrix[c5][c1];
            }
        }
        int q=0,w=3,e=0,r=3,total=0,total1=0;
        for(int c5=0; c5 < 9; c5++)
        {
            for(int x=q;x < w; x++)
            {
                for(int cu=e;cu < r; cu++)
                {
                    total1++;
                    total+=matrix[x][cu];
                }
            }
            if(total != 45)
            {
                ehnao=true;
            }
            if(total1 % 9 == 0)
            {
                e += 3;
                r += 3;
                if(total1 == 27 || total1 == 54 || total1 == 81)
                {
                    q+=3;
                    w+=3;
                    e=0;
                    r=3;
                }
            }
            total = 0;
        }
        int total3=0;
        for(int c1=0; c1<9; c1++)
        {
            for(int c2=0; c2 < 9; c2++)
            {
                total3 += matrix[c1][c2];
                if(matrix[c1][c2] == 5)
                {
                    a5++;
                }
            }
            if(a5 > 1)
            {
                ehnao = true;
            }
            if(total3 != 45)
            {
                ehnao2 = true;
            }
            total3=0;
            a5=0;
        }
        a5=0;
        int total4=0;
        for(int c1=0; c1 < 9; c1++)
        {
            for(int c2=0; c2 < 9; c2++)
            {
                total4 += matrix[c2][c1];
                if(matrix[c2][c1] == 5)
                {
                    a5++;
                }
            }
            if(a5 > 1)
            {
                ehnao = true;
            }
            if(total4 != 45)
            {
                ehnao3 = true;
            }
            total4=0;
            a5=0;
        }
        if(ehnao == true || ehnao2 == true || ehnao3 == true)
        {
            cout << "Instancia " << c+1 << "\nNAO\n\n";
        }
        else
        {
            cout << "Instancia " << c+1 << "\nSIM\n\n";
        }
    }
}
