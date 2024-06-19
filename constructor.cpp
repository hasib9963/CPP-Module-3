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
int main()
{ 
    Student hasib(29,'A',15,"Hasib Hasan");
    Student shikhan(31,'B',15,"Shikahn Chakro");
    cout<<hasib.roll<<endl;
    cout<<hasib.section<<endl;
    cout<<hasib.cls<<endl;
    cout<<hasib.name<<endl;
    cout<<shikhan.roll<<endl;
    cout<<shikhan.section<<endl;
    cout<<shikhan.cls<<endl;
    cout<<shikhan.name<<endl;
    return 0;
}