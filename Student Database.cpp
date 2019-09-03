#include <iostream>
using namespace std;

class Student
{
        public:

        int  marks,roll;
        string name;

        void get()
        {   cout<<"\n";
                cout <<"Enter name of student";
                cin>>name;
                cout<<"Enter marks of student";
                cin>>marks;
                cout <<"Enter roll no. of student";
                cin >>roll;
                cout<<"\n";                                                             }

        void display()
        {       cout<<"NAME="<<name<<"\t";
                cout<<"MARKS="<<marks<<"\t";
                cout<<"ROLL NO."<<roll<<"\t";
                cout<<"\n";
                cout<<"\n";                                                     }

};

        int main()
{
        int k,a,c;
        float h;
        cout <<"Enter the total no of students: ";
        cin >>k;

        Student b[k];
        for(int i=0;i<k;i++)
        { b[i].get();}

        do
        {   cout<<"Enter 1 to get highest marks \n";
                cout<<"Enter 2 to get lowest marks \n";
                cout<<"Enter 3 to get average marks \n";
                cout<<"Enter 4 to get marks of all student \n";
                cout<<"Enter 5 to get no of absent and present students\n";
                cout<<"Enter 6 to Exit\n";
                cin >>a;

                switch(a)
        {
                        case 1: c=0;
                                        for(int i=0;i<k;i++)
                                                {if(b[i].marks>c)
                                                {c=b[i].marks;}}
                                        for(int i=0;i<k;i++)
                                                {if(b[i].marks==c)
                                                {b[i].display();}}
                                        break;

                case 2:         c=1000;
                                        for(int i=0;i<k;i++)
                                                {if(b[i].marks<c)
                                                {c=b[i].marks;}}
                                        for(int i=0;i<k;i++)
                                                {if(b[i].marks==c)
                                                {b[i].display();}}
                                        break;

                case 3:         h=0;
                                        for(int i=0;i<k;i++)
                                                { h=h+b[i].marks;}
                                        h=h/k;
                                        cout <<"AVERAGE="<<h<<"\n"<<"\n";
                                        break;

                case 4:         for(int i=0;i<k;i++)
                                                {b[i].display();}
                                        break;

                case 5:         h=0;
                                        for(int i=0;i<k;i++)
                                                {if(b[i].marks==0)
                                                {h=h+1;}}
                                        cout <<"No. of students absent="<<h<<"\n";
                                        cout <<"No. of students present="<<k-h<<"\n"<<"\n";
                                        break;

                default:        a=0;
                                        break;          } }
        while(a!=0);
        return 0;
}
