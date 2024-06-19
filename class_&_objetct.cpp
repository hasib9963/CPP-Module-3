#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    Student shikhan;
    shikhan.roll = 112;
    shikhan.cls = 9;
    shikhan.section = 'A';
    char nm[100]="Shikhan Chakrobarty";
    strcpy(shikhan.name,nm);
    // class a direct string dewa jay na.
    // tai age string niye seta strcpy diye copy kore dite hobe
    Student hasib;
    hasib.roll = 111;
    hasib.cls = 9;
    hasib.section = 'B';
    char nm2[100]="Hasib Hasan";
    strcpy(hasib.name,nm2);
    cout<<hasib.name;
    return 0;
}