// Implement the class with four private integer data members and public:
// showdata() function for the below main() code snippet.

#include <iostream>
using namespace std;

class Number{
    int i1,i2,i3,i4;
    public:
        Number(int i1=0,int i2=0,int i3=0,int i4=0)
        {this->i1 = i1; this->i2 = i2; this->i3 = i3; this->i4 = i4;}
        Number(Number &N)
        {this->i1 = N.i1; this->i2 = N.i2; this->i3 = N.i3; this->i4 = N.i4;}
        void showdata() {
        cout << i1 << " " << i2 << " " << i3 << " " << i4 << endl;
    }
};

int main()
{
    Number n1;
    Number n2(10,20);
    Number n3(30,40,50,60);
    Number n4(n2);
    Number n5=n1;
    n1.showdata();
    n2.showdata();
    n3.showdata();
    n4.showdata();
    n5.showdata();
}
