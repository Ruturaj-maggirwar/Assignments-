#include <iostream>
using namespace std;

int main()
{
        int a,b,h=0;
        int c[50][50];

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

        cout << endl;
        cout <<"The matrix is:";
        cout << endl;

        for(int i=0;i<a;i++)
                {for(int j=0;j<b;j++)
                {cout << c[i][j] <<"\t";} cout<<"\n";}


        cout<<"\n";
        cout << "Rows" << "\t" <<"Columns" <<"\t" <<"\t" <<"Non Zero";
        cout<<"\n";
        cout << a << "\t" << b << "\t" <<"\t" << h ;
        cout<< "\n";

        for(int i=0;i<a;i++)
                {for(int j=0;j<b;j++)
                {if(c[i][j]!=0)
                {cout<< i <<"\t"<< j <<"\t" <<"\t" << c[i][j]<<endl;;}}}

        return 0;
}
