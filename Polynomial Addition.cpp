#include<iostream>
using namespace std;

struct poly
{
        int coeff;
        int power;
        int result;             };


int main()
{
        int t,a,term,ch;
        struct poly p[20],b[20],g[20];

        cout<<"Enter the polynomial with the highest no. of terms here :";
        cin >> t;
        for(int i=0;i<t;i++)
        {       cout<<"Enter the Coefficient("<<i+1<<"):";
                cin>>p[i].coeff;
                cout<<"Enter the Power("<<i+1<<"):";
                cin>>p[i].power;                                                                                        }

        cout<<"\n Enter the total number of terms in the 2nd polynomial :";
        cin >> a;
        for(int i=0;i<a;i++)
                {       cout<<"Enter the Coefficient("<<i+1<<"):";
                        cin>>b[i].coeff;
                        cout<<"Enter the Power("<<i+1<<"):";
                        cin>>b[i].power;                                                                                        }

        do
                {   cout<< endl;
                        cout<<"Enter 1 to add the polynomials: \n";
                        cout<<"Enter 2 to display the polynomial: \n";
                        cin >>ch;

                        switch(ch)
                {
                        case 1:			for(int i=0;i<t;i++)
                                        {if     (p[i].power == b[i].power)
                                        {cout << p[i].coeff+b[i].coeff<<"x^"<< p[i].power<<"+";}

                                        else if (p[i].power != b[i].power)
                                        {cout << p[i].coeff <<"x^"<< p[i].power<<"+"<< b[i].coeff <<"x^"<< b[i].power;}}


                                                break;

                        case 2:         term=t;
                                                for(int k=0;k<term-1;k++)
                                                {       cout<<"1st polynomial is = "<<p[k].coeff<<"(x^"<<p[k].power<<")+";
                                                        cout<<p[k+1].coeff<<"(x^"<<p[k+1].power<<")+";
                                                        cout<<"\n";
                                                        cout<<"2st polynomial is = "<<b[k].coeff<<"(x^"<<b[k].power<<")+";
                                                        cout<<b[k+1].coeff<<"(x^"<<b[k+1].power<<")+";  }
                                                        break;

                        default:        ch=0;
                                                break;          } }
                while(a!=0);
                return 0;
        }
