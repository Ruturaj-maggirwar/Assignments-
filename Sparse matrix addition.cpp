#include <iostream>
using namespace std;

int main()
{
        int a,b,aa,bb,h=0,hh=0,hhh=0,ch=0;
        int c[50][50];
        int cc[50][50];
        int ccc[50][50];

        cout<<"Enter the number of rows";
        cin >> a;
        cout<<"Enter the number of columns";
        cin >> b;

        cout << endl;
        cout <<"Enter the numbers:";
        cout << endl;

        for(int i=0;i<a;i++)
                {for(int j=0;j<b;j++)
                {cin >> c[i][j];
                 if(c[i][j]!=0)
                 {h++;}}}

        do
                        {   cout<< endl;
                                cout<<"Enter 1 to enter another sparse matrix: \n";
                                cout<<"Enter 2 display 1st sparse matrix: \n";
                                cout<<"Enter 3 display 2nd sparse matrix: \n";
                                cout<<"Enter 4 to display 1st sparse matrix in 3 column representation: \n";
                                cout<<"Enter 5 to display 2nd sparse matrix in 3 column representation: \n";
                                cout<<"Enter 6 to add 2 sparse matrices: \n";
                                cout<<"Enter 7 to display the addition of the 2 sparse matrices: \n";
                                cin >>ch;

                                switch(ch)
                        {
                                case 1:         cout<<"Enter the number of rows";
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
                                                        break;

                                case 2:         cout << endl;
                                                        cout <<"The matrix is:";
                                                        cout << endl;
                                                        for(int k=0;k<a;k++)
                                                        {for(int l=0;l<b;l++)
                                                        {cout << c[k][l] <<"\t";} cout<<"\n";}
                                                        break;

                                case 3:         cout << endl;
                                                        cout <<"The matrix is:";
                                                        cout << endl;
                                                        for(int i=0;i<aa;i++)
                                                        {for(int j=0;j<bb;j++)
                                                        {cout << cc[i][j] <<"\t";} cout<<"\n";}
                                                        break;

                                case 4:         cout<<"\n";
                                                        cout << "Rows" << "\t" <<"Columns" <<"\t" <<"\t" <<"Non Zero";
                                                        cout<<"\n";
                                                        cout << a << "\t" << b << "\t" <<"\t" << h ;
                                                        cout<< "\n";
                                                        for(int k=0;k<a;k++)
                                                        {for(int l=0;l<b;l++)
                                                        {if(c[k][l]!=0)
                                                        {cout<< k <<"\t"<< l <<"\t" <<"\t" << c[k][l]<<endl;;}}}
                                                        break;

                                case 5:         cout<<"\n";
                                                        cout << "Rows" << "\t" <<"Columns" <<"\t" <<"\t" <<"Non Zero";
                                                        cout<<"\n";
                                                        cout << aa << "\t" << bb << "\t" <<"\t" << hh ;
                                                        cout<< "\n";
                                                        for(int i=0;i<aa;i++)
                                                        {for(int j=0;j<bb;j++)
                                                        {if(cc[i][j]!=0)
                                                        {cout<< i <<"\t"<< j <<"\t" <<"\t" << cc[i][j]<<endl;;}}}
                                                        break;

                                case 6:         for(int k=0;k<a;k++)
                                                        {for(int l=0;l<b;l++)
                                                        {if(a==aa&&b==bb)
                                                        {ccc[k][l]=c[k][l]+cc[k][l];
                                                        if(ccc[k][l]!=0)
                                                        {hhh++;}}
                                                        else cout<<"The number or rows and columns of your "
                                                                                "Sparse matrix do not match";}}

                                                        cout<<"\n";
                                                        cout << "Rows" << "\t" <<"Columns" <<"\t" <<"\t" <<"Non Zero";
                                                        cout<<"\n";
                                                        cout << aa << "\t" << bb << "\t" <<"\t" << hhh ;
                                                        cout<< "\n";
                                                        for(int i=0;i<aa;i++)
                                                        {for(int j=0;j<bb;j++)
                                                        {if(ccc[i][j]!=0)
                                                        {cout<< i <<"\t"<< j <<"\t" <<"\t" << ccc[i][j]<<endl;;}}}
                                                        break;

                                case 7:         cout << endl;
                                                        cout <<"The matrix is:";
                                                        cout << endl;
                                                        for(int k=0;k<a;k++)
                                                        {for(int l=0;l<b;l++)
                                                        {cout << ccc[k][l] <<"\t";} cout<<"\n";}
                                                        break;

                                default:        ch=0;
                                                        break;          } }
                        while(a!=0);


        return 0;
}
