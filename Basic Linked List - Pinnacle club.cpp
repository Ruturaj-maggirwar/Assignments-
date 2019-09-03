
#include <iostream>
#include <iomanip>
using namespace std;

struct node
{       int pnext;
        string name;
        node * next;  };

class pinacle
{
        node * footer;
        node * newnode;

        public:
        node * header;

        pinacle()
        {       header = new node ();
                footer = new node ();
                header -> next = footer;
                footer -> next = NULL;                   }

        void president()
        {       cout <<"Enter the PRN: ";
                cin >> header-> pnext;
                cout << "Enter name: ";
                cin >> header-> name;
                cout<<"\n";                                             };

        void secretary()
        {       cout <<"Enter the PRN: ";
                cin >> footer-> pnext;
                cout << "Enter name: ";
                cin >> footer-> name;
                cout<<"\n";
                footer -> next = NULL;                  };

        void add()
        {       if(header-> pnext == NULL)
                {cout << "Enter president detail first: \n";
                 president(); }

                if(footer-> pnext == NULL)
                {cout<<"Enter secretary details also: \n";
                 secretary(); }

                cout << "\n" << "Enter member details: \n";
                newnode = new node();
                cout <<"Enter the PRN: ";
                cin >> newnode -> pnext;
                cout << "Enter name: ";
                cin >> newnode -> name;
                newnode -> next = NULL;

                if(header->next==footer)
                { header -> next = newnode;
                  newnode -> next = footer;}

                else {  node * cn = header;
                                while (cn->next-> pnext < newnode-> pnext && cn->next!=footer)
                                { cn = cn->next;}
                                if(newnode-> pnext ==header-> pnext)
                                {cout<<"This student is president";}
                                else if(newnode-> pnext ==footer-> pnext)
                                {cout<<"This student is secretary";}
                                else if(newnode-> pnext == cn->next-> pnext)
                                {cout<<"This student already exists";}
                                else { newnode -> next = cn->next;
                                           cn -> next = newnode;}                                                               }};


        void display()
        { node * cn = header;
          cout << "\n" << setw(2) << "PRN" << setw(10) <<"Name";

          while(cn!=NULL)
          { cout << "\n";
            if(cn==header)
                  {cout << setw(2) << cn->pnext;
                   cout << setw(10) << cn->name;
               cout << setw(15) << "President"; }
            else if(cn==footer)
                  {cout << setw(2) << cn->pnext;
                   cout << setw(10) << cn->name;
                   cout << setw(15) << "Secretary"; }
            else {cout << setw(2) << cn->pnext;
                          cout << setw(10) << cn->name;}
          cn = cn->next;
  }};


        void display_reverse(node * cn)
        {  if(cn->next!=NULL)
           {display_reverse(cn->next);}

                cout << "\n" << setw(2) << "PRN" << setw(10) <<"Name";
            cout << "\n";
            if(cn==header ){
                cout << setw(2) << cn->pnext;
                cout << setw(10) << cn->name;
                cout << setw(15) << "President";}
            else if(cn==footer){
                cout << setw(2) << cn->pnext;
                cout << setw(10) << cn->name;
                cout << setw(15) << "Secretary";}
            else{cout << setw(2) << cn->pnext;
                 cout << setw(10) << cn->name;}
                cout<<"\n";}


        void count()
        {   node * cn = header;
            int count=0;
            while(cn!=NULL){
                count++;
                cn= cn->next;       }
                cout << "\n" << " Total students : " << count ;}


        void delete_members()
        {   int prn;
        cout << "\n" << " Enter PRN of member to delete : ";
            cin >> prn;

            if(header-> pnext == prn){
                cout << "\n" << " President cannot be deleted." ;
            }
            else if(footer-> pnext == prn)
            {cout << "\n" << " Secretary cannot be deleted." ;}
            else{ node * cn = header;
                  while(cn-> next!=footer)
                     {if(cn-> next-> pnext==prn){
                      cn->next = cn->next->next;
                      cout << "\n" << " Member deleted." ;
                      break;}
                  cn = cn->next;    }}}
};


int main()
{
        int ch,a;
        pinacle x;

        do
                        {       cout<< "\n" << "\n";
                                cout<<"Enter 1 to add president: \n";
                                cout<<"Enter 2 to add secretary: \n";
                                cout<<"Enter 3 to add other members: \n";
                                cout<<"Enter 4 to display all the members: \n";
                                cout<<"Enter 5 to display the order in reverse: \n";
                                cout<<"Enter 6 to count the total number of members in the organization: \n";
                                cout<<"Enter 7 to delete members from the organization: \n";
                                cout<<"Enter 8 to exit: \n";
                                cin >>ch;

                                switch(ch)
                        {
                                case 1:         x.president();
                                                        break;

                                case 2:         x.secretary();
                                                        break;

                                case 3:         cout<<"Enter number of team members you want to add: ";
                                                cout<<"\n";
                                                cin >> a;
                                                        for(int i=0; i<a; i++)
                                                        {x.add();}
                                                        break;

                                case 4:         x.display();
                                                        break;

                                case 5:         x.display_reverse(x.header);
                                                        break;

                                case 6:         x.count();
                                                        break;

                                case 7:         x.delete_members();
                                                        break;

                                default:        ch=0;
                                                        break;          } }
                        while(ch!=0);


        return 0;
}
