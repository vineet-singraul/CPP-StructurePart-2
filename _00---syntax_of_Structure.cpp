#include <iostream>
using namespace std;
struct student
{
    string name;
    int Rollnum;
    int arr[5];

    void Display(string &name ,int &Rollnum , int arr[])
    {
        cout<<"---------------------------"<<endl;
        cout<<name<<" Hare Your Details : "<<endl;
        cout<<"---------------------------"<<endl;
        cout<<"Your Name : "<<name<<endl;
        cout<<"Your Roll Number : "<<Rollnum<<endl;
        cout<<"---------------------------"<<endl;
        for (int i = 0; i < 5; ++i)
        {
            cout << "Your Marks Is Subject "<< i << " : " << arr[i] << endl;
        }
        cout<<"---------------------------"<<endl;

    }
}p;

int main()
{   
       cout<<"Enter Your Name :";
       cin>>p.name;
       cout<<"Enter Your Roll Number :";
       cin>>p.Rollnum;

    for (int i = 0; i < 5; ++i)
    {
        cout << "Enter " << i << " Subject Marks : ";
        cin >> p.arr[i];
    }

       p.Display(p.name , p.Rollnum , p.arr);
}