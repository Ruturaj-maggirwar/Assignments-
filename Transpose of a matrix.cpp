#include <iostream>
using namespace std;

int main()
{
        int aa,bb,hh=0;
        int vv[50][50];
        int gg[50][50];
        int cc[50][50];


        cout<<"Enter the number of rows";
        cin >> aa;
        cout<<"Enter the number of columns";
        cin >> bb;

        cout << endl;
        cout <<"Enter the numbers:";
        cout << endl;


        for(int i=0;i<aa;i++)
        {for(int j=0;j<bb;j++)
        {cin >> cc[i][j];
        if(cc[i][j]!=0)
        {hh++;}}}


        cout << endl;
        cout <<"The matrix is:";
        cout << endl;
        for(int i=0;i<aa;i++)
        {for(int j=0;j<bb;j++)
        {cout << cc[i][j] <<"\t";} cout<<"\n";}


        cout<<"\n";
        cout << "Rows" << "\t" <<"Columns" <<"\t" <<"\t" <<"Non Zero";
        cout<<"\n";
        cout << aa << "\t" << bb << "\t" <<"\t" << hh ;
        cout<< "\n";
        for(int i=0;i<aa;i++)
        {for(int j=0;j<bb;j++)
        {if(cc[i][j]!=0)
        {       gg[i][j]=cc[i][j];
                cout<< i <<"\t"<< j <<"\t" <<"\t" << cc[i][j]<<endl;;}}}


        cout << endl;
        cout <<"The transpose of the matrix is:";
        cout << endl;
        for(int i=0;i<bb;i++)
        {for(int j=0;j<aa;j++)
        {cout << gg[j][i] <<"\t";
         vv[i][j]=gg[j][i];} cout<<"\n";}

        cout<<"\n";
        cout << "Rows" << "\t" <<"Columns" <<"\t" <<"\t" <<"Non Zero";
        cout<<"\n";
        cout << aa << "\t" << bb << "\t" <<"\t" << hh ;
        cout<< "\n";
        for(int i=0;i<bb;i++)
        {for(int j=0;j<aa;j++)
        {if(vv[i][j]!=0)
        {cout<< i <<"\t"<< j <<"\t" <<"\t" << vv[i][j]<<endl;;}}}

        return 0;
}
