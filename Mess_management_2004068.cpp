#include <bits/stdc++.h>
using namespace std;


class Mess
{
protected:
    string mem_name, mem_homecity, mem_depart, mem_id;

};
class InfoMess: public Mess
{
public:
    static int im;
    InfoMess()
    {

    }

    InfoMess(string m_name, string m_homecity, string m_depart, string m_id)
    {
        im++;
        mem_name = m_name;
        mem_homecity = m_homecity;
        mem_depart = m_depart;
        mem_id = m_id;


    }
    static void showmemcount()
    {
        cout << im << endl;
    }
    friend void displayinfo(InfoMess m);
};



void displayinfo(InfoMess m)
{
    cout << setw(25) << m.mem_name;
    cout << setw(25) << m.mem_homecity;
    cout << setw(25) << m.mem_depart;
    cout << setw(25) << m.mem_id;

}
void intro()
{
    cout << "****************************************************************" << endl;
    cout<<endl;
    cout << "MESS MANAGEMENT SYSTEM" << endl;
    cout << "MADE BY : Farhan Amin" << endl;
    cout << "DEPT : Computer Science and Engineering" << endl;
    cout << "Varsity : Chittagong University of Engineering and Technology" << endl;
    cout<<endl;
    cout << "****************************************************************" << endl;


}
int InfoMess::im;

int main()
{
    vector<InfoMess>v;
    system("cls");
    intro();

    cout << "Welcome to our mess.It is located outside west gate of CUET.........." << endl;



    while (1)
    {
        int option;
        string m_name, m_homecity, m_depart, m_id;
        string d_date;
        cout << endl;

        cout << "****************************************************************" << endl;
        cout<<endl;
        cout << "Press-------->>>>>>>>>" << endl;
        cout << "\t 1.Basic Information on the mess " << endl;
        cout << "\t 2.Names of the members of the mess " << endl;
        cout << "\t 3.Create information about a member" << endl;
        cout << "\t 4.Display basic info of a member" << endl;
        cout << "\t 5.Necessary expenses of a member" << endl;
        cout << "\t 6.Work distribution among the members" << endl;
        cout << "\t 7.Grocery shopping distribution" << endl;
        cout << "\t 8.Dish washing day of each member" << endl;
        cout << "\t 9.Ex mess members" << endl;
        cout << "\t 10.Exit" << endl;
        cout<<endl;
        cout << "****************************************************************" << endl;
        cout << "Choose your option :" << endl;
        cin >> option;


        if(option==1)
        {
            system("cls");
            cout << "****************************************************************" << endl;
            cout<<endl;
            cout<<"Info's about the mess --------->:"<<endl;
            cout<<"Building type:"<<endl;
            cout<<" Two Storeyed with a rooftop."<<endl;
            cout<<"Rooms:"<<endl;
            cout<<" 3 rooms in which one is drawing room ."<<endl;
            cout<<"Additional features: "<<endl;
            cout<<" A kitchen and two bathrooms and a veranda. "<<endl;
            cout<<endl;
            cout << "****************************************************************" << endl;
        }


        else if (option == 2)
        {
            system("cls");
            cout << "****************************************************************" << endl;
            cout<<endl;
            cout << "Members are : " << endl;
            cout << "Ashekul Mustafa" << endl;
            cout << "Rakib Hasan" << endl;
            cout << "Yasin Arafat Tanim" << endl;
            cout << "Yasin Arafat Porosh" << endl;
            cout << "Ahsan Habib Akib" << endl;
            cout << "Farhan Amin" << endl;
            cout<<endl;
            cout << "****************************************************************" << endl;


        }
        else if (option == 3)
        {
            system("cls");
            cout << "****************************************************************" << endl;
            cout<<endl;
            cout << "Enter member name: ";
            fflush(stdin);
            getline(cin, m_name);
            cout << "Enter member home town: ";
            fflush(stdin);
            getline(cin, m_homecity);
            cout << "Enter member departemnt: ";
            fflush(stdin);
            getline(cin, m_depart);
            cout << "Enter member id: ";
            fflush(stdin);
            getline(cin, m_id);
            cout<<endl;
            cout << "****************************************************************" << endl;

            InfoMess m1(m_name, m_homecity, m_depart, m_id);

            v.push_back(m1);

        }
        else if (option == 4)
        {
            system("cls");
            cout << "****************************************************************" << endl;
            int x = v.size();
            cout<<endl;
            cout << "Displaying mess member details: " << endl;
            cout << setw(25) << "Member name :";
            cout << setw(25) << "Member hometown :";
            cout << setw(25) << "Member department :";
            cout << setw(25) << "Member id :";
            cout << endl;

            for (int i = 0; i < x; i++)
            {
                displayinfo(v[i]);
                cout << endl;
            }

            cout << "Number of members info created: ";
            InfoMess::showmemcount();
            cout<<endl;
            cout << "****************************************************************" << endl;


        }
        else if (option == 5)
        {
            system("cls");
            cout << "****************************************************************" << endl;
            cout<<endl;
            cout << "1.Rent  : 1000tk" << endl;
            cout << "2.Food  : 2500tk" << endl;
            cout << "3.Others: " << endl;
            cout<<"a.Wifi:200 tk "<<endl;
            cout<<"b.Current bill:150 tk "<<endl;
            cout<<"c.For the respected aunt who cooks for us:650 tk"<<endl;


            cout<<endl;
            cout << "****************************************************************" << endl;

        }
        else if (option == 6)
        {
            system("cls");
            cout << "****************************************************************" << endl;
            cout<<endl;
            cout << "Kitchen Cleaning    : Akib,Ashique" << endl;
            cout << "House Cleaning      : Porosh,Tanim" << endl;
            cout << "Taking the trash out: Farhan,Rakib" << endl;
            cout<<endl;
            cout << "****************************************************************" << endl;
        }
        else if (option == 7)
        {
            system("cls");
            cout << "****************************************************************" << endl;
            cout<<endl;
            cout << "First week of the month : Farhan,Tanim" << endl;
            cout << "Second week of the month: Porosh,Akib" << endl;
            cout << "Third week of the month : Ashique,Rakib" << endl;
            cout << "Final week will be decided via lottery" << endl;
            cout<<endl;
            cout << "****************************************************************" << endl;
        }
        else if (option == 8)
        {
            system("cls");
            cout << "****************************************************************" << endl;
            cout<<endl;
            cout << "Sunday    :" << "Farhan" << endl;
            cout << "Monday    :" << "Akib" << endl;
            cout << "Tuesday   :" << "Tanim" << endl;
            cout << "Wednesday :" << "Ashique" << endl;
            cout << "Thursday  :" << "Rakib" << endl;
            cout << "Friday    :" << "Porosh" << endl;
            cout << "Saturday  :" << "Will be decided via lottery" << endl;
            cout<<endl;
            cout << "****************************************************************" << endl;
        }

        else if (option == 9)
        {
            system("cls");
            cout << "****************************************************************" << endl;
            cout<<endl;
            cout << "Ripon and Mehedi are our ex mess members. They are also from CSE. "<<endl;
            cout << " They shifted to hall. Best wishes for their hall life." << endl;
            cout<<endl;
            cout << "****************************************************************" << endl;
        }
        else if (option == 10)
        {
            system("cls");


            cout << "Thank you. You are always welcome to our mess." << endl;
            break;
            cout << endl;
        }

        else if (option > 10)
        {
            system("cls");

            cout << "Sorry no option available.Press again......" << endl;
        }
    }
    return 0;
}
