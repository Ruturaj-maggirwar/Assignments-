#include <iostream>
#include<string>
using namespace std;

int main()
{
        char name1[50],name2[50],surname[50];
        int i,k,a;
        string c,d,e;

        cout << "Enter the name of the person \n";
        cin >> name1;

        do
    {  	   		cout<<"Enter 1 to get the name of student \n";
                cout<<"Enter 2 to get length of the name \n";
                cout<<"Enter 3 to get the name in reverse \n";
                cout<<"Enter 4 to concatenate the names \n";
                cout<<"Enter 5 to Exit\n";
                cin >>a;

                switch(a)
{
                case 1:         for(i=0;name1[i]!='\0';i++)
                                                {name2[i]=name1[i];}
                                                name2[i]='\0';
                                        cout << "Name of the student = " << name2 << "\n";
                                        cout << "\n";
                                        break;

                case 2:         for(i=0;name1[i]!='\0';i++)
                                                {name2[i]=name1[i];}
                                                name2[i]='\0';
                                        cout << "Number of characters present = " << i << "\n";
                                        cout << "\n";
                                        break;

                case 3:         k=i;
                                        for     (i=0;name1[i]!='\0';i++)
                                                {       name2[k-1]=name1[i];
                                                        k--;                                                    }
                                                name2[i]='\0';
                                        cout << "The name in reverse is= " << name2 <<"\n";
                                        cout << "\n";
                                        break;

                case 4:			cout<<"Enter the surname \n";
                				cin>>surname;

                				for(i=0;name1[i]!='\0';i++)
                                        {name2[i]=name1[i];}
                                        name2[i]='\0';
                                        c = surname;
                                        d = name2;
                                        e = d+c;
                                        cout << e;
                                        cout << "\n";
                                        break;

                default:        a=0;
                                        break;          } }
        while(a!=0);
        return 0;
}
