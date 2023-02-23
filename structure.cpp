//Structure Activity//
//Write  a program to process the dtudent data(i.e. name,rollno,dob,branch, and marks) using structures)
/*#include<iostream>
#include<string>>
using namespace std;

struct student
{
    char name[20];
    int rollno;
    int d,m,y;
    char branch[30];
    float marks;
};

int main()
{
 int n;
cout<<"enter the number of students you want to enter";
cin>>n;
student s[n];
for (int i=0; i<n; i++)
{
    cout<< "Enter the name of the student :" << endl;
    cin>>s[i].name;
    cout<< "Enter the roll no of the student : " << endl;
    cin>>s[i].rollno;
    cout<< "Enter the date of birth : " << endl;
    cin>> s[i].d >> s[i].m >> s[i].y;
    cout<< "Enter the name of the branch : " << endl;
    cin>>s[i].branch;2

    cout<< " Enter the marks of the students : " <<endl;
    cin>>s[i].marks;
}
for (int i=0; i<n; i++)
{
    cout<<"Name of the student : " << s[i].name << endl;
    cout<< "Roll no. of the student : " << s[i].rollno << endl;
    cout << " Date of birth :" << s[i].d << "-" << s[i].m << "-" << s[i].y << endl;
    cout <<  " Name of the branch : " <<s[i].branch << endl;
    cout <<"Marks of the student : " << s[i].marks << endl;
}
    return 0;

}
//Write a program that allows the user to enter the information for three employees(i.e. emp_Id no.,//
//name,house no.,area , city ,state)and then enter the employee id to retrieve and display the information// 
//for the employees with the given Id number//

#include<iostream>
#include<string>
using namespace std;

struct employee
{
int emp_id;
int house_no;
char name[20];
char area[20];
char city[20];
char state[20];
};

int main()
{
    int n;
cout<<"Enter the number of employees you want to enter";
cin>>n;
employee emp[n];
for(int i=0;i<n;i++)
{
    cout<<" Enter the Name of the employee id no."<<endl;
    cin>>emp[i].emp_id;
    cout<<"Enter the house no"<<endl;
    cin>>emp[i].house_no;
    cout<<"Enter the name of the employee"<<endl;
    cin>>emp[i].name;
    cout<<"Enter the name of the area "<<endl;
    cin>>emp[i].area;
    cout<<"Enter the name of the city"<<endl;
     cin>>emp[i].city;
     cout<<"Enter the name of the state"<<endl;
     cin>>emp[i].state;
}
for(int i=0;i<n;i++)
{


    cout<<"Enter the employee id no."<<emp[i].emp_id<<endl;
    cout<<" House no of the employee"<<emp[i].house_no<<endl;
    cout<<"Enter the name of the employee"<<emp[i].name<<endl;
    cout<<"Area of the employee "<<emp[i].area<<endl;
    cout<<"Name of the city"<<emp[i].city<<endl;
     cout<<" Name of the state"<<emp[i].state<<endl;
}
return 0;
}*/


//Write a program to perform arithmetic operations on numbers using structure//
#include<iostream>
using namespace std;
 struct arithmetic
 {
    int add;
    int prod;
    int diff;
    int div;
    int rem;
 }a,b;
 int main()
 {
    int a,b;
    cout<<"Enter the two numbers:"<<endl;
    cin>>a>>b;
    {
        
        cout<<"Enter the two numbers"<<endl;
        cin>>a.add>>b.add;
        cout<<"Enter the two numbers"<<endl;
        cin>>a.prod>>b.prod;
        cout<<"Enter the two numbers"<<endl;
        cin>>a.diff>>b.diff;
        cout<<"Enter the two numbers"<<endl;
        cin>>a.div>>b.div;
        cout<<"Enter the two numbers"<<endl;
        cin>>a.rem>>b.rem;

 }
 {
    cout<<"Addition of numbers is : "<<a+b<<endl;
    cout<<"Product of numbers is : "<<a*b<<endl;
    cout<<"Difference of numbers is : "<<a-b<<endl;
    cout<<"Division of numbers is : "<<a/b<<endl;
    cout<<"Remainder of numbers is : "<<a%b<<endl;

 }
 return 0;
 }
