#include <iostream>
using namespace std;

class Applicant{
    public:
        Applicant(){
            cout << "File Created" << endl;
        }
        ~Applicant(){
            cout << "File Destroyed" << endl;
        }
};

int main(){
    Applicant a;
    
}
