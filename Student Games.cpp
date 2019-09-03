#include <iostream>
using namespace std;

class play
{
        public:

        string name;
        string game;
        int age;
        int roll;

        void getdata()
        {       cout<<"\n";
                cout<<"Enter the name of the student: ";
                cin>>name;
                cout<<"Enter the age of the student: ";
                cin>>age;
                cout<<"Enter the roll no of the student: ";
                cin>>roll;
                cout<<"Enter the game the student plays: ";
                cin>>game;                                                                                                      }

        void display()
        {       cout<<"\n";
                cout<<"NAME= "<<name<<"\n";
                cout<<"AGE= "<<age<<"\n";
                cout<<"ROLL NO= "<<roll<<"\n";
                cout<<"GAME= "<<game<<"\n";
                                                                                                                                        }
};


int main()
{
        int ch=0;
        int a,h=0,g=0,b=0,d=0;
        cout <<"Enter the total no of students: ";
        cin >>a;

        play y[a];
        for(int i=0;i<a;i++)
        { y[i].getdata();}

do {

        cout<<"\n";
        cout<<"Enter the option you want to choose \n";
        cout<<"Enter 1 to displaying students who play cricket \n";
        cout<<"Enter 2 to display student who play badminton \n";
        cout<<"Enter 3 to display students who play both \n";
        cout<<"Enter 4 to display students who do not play either \n";
        cout<<"Enter 5 to display the data of all the students \n";
        cout<<"Exit \n";
        cin>>ch;

        switch(ch)
        {
                case 1:         for(int i=0;i<a;i++)
                                        {if     (y[i].game=="cricket")
                                        {       h += 1; }}
                                        cout <<"No. of students who play cricket="<<h<<"\n";

                                        for(int i=0;i<a;i++)
                                        {if     (y[i].game=="cricket")
                                        {y[i].display();}}
                                        break;

                case 2:         for(int i=0;i<a;i++)
                                        {if     (y[i].game=="badminton")
                                        {       b += 1; }}
                                        cout <<"No. of students who play badminton="<<b<<"\n";

                                        for(int i=0;i<a;i++)
                                        {if     (y[i].game=="badminton")
                                        {y[i].display();}}
                                        break;

                case 3:         for(int i=0;i<a;i++)
                                        {if     (y[i].game=="cricket_and_badminton")
                                        {       g += 1; }}
                                        cout <<"No. of students who play both="<<g<<"\n";

                                        for(int i=0;i<a;i++)
                                        {if     (y[i].game=="cricket_and_badminton")
                                        {y[i].display();}}
                                        break;

                case 4:         for(int i=0;i<a;i++)
                                        {if     (y[i].game=="nothing")
                                        {       d += 1; }}
                                        cout <<"No. of students who play neither="<<d<<"\n";

                                        for(int i=0;i<a;i++)
                                        {if     (y[i].game=="nothing")
                                        {y[i].display();}}
                                        break;

                case 5:         for(int i=0;i<a;i++)
                                        {y[i].display();}
                                        break;

                default:        ch=0;
                                        break;

        }}

        while(ch!=0);
        return 0;
}
