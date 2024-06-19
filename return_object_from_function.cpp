#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r, int s, int c, char* n)
        {
            roll = r;
            section = s;
            cls = c;
            strcpy(name,n);
            // class a direct string dewa jay na.
    // tai age string niye seta strcpy diye copy kore dite hobe
        }
};
Student fun()
{
    char name[100]="Hasib HAsan";
    Student hasib(111,'C',15,name);
    return hasib;
}
int main()
{ 
    Student hasib = fun();
    cout<<hasib.name<<endl;
    cout<<hasib.roll<<endl;
    cout<<hasib.section<<endl;
    cout<<hasib.cls<<endl;
    return 0;
}