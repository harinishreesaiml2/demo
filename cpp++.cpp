#include <iostream>
using namespace std;
class student
{
    private:
    int roll no;
    string name;
    public:
    //constructor
    student(int r,string n)
    {
        roll no=r;
        name=n;
        cout<<"student object are created"<<endl;
    }
    //member function
    void display()
    {
        cout<<"Roll number":<<rollno<<endl;
        cout<<"Name"<<name<<endl;
    }
    //destructor
    ~student
    {
        cout<<"objects are destroyed"<<endl;
    }
};
int main()
{
    student S1(101,"Arun")
    s1.display()
    return 0;
}