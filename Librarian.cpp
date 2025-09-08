#include <iostream>
using namespace std;

class Librarian;
class Book{private : void log_access(); friend class Librarian;};
class Librarian{public: void accessBookLog(Book *pt);};
void Librarian::accessBookLog(Book *pt){
    cout << "Librarian is accessing the book's private log..." << endl;
    pt->log_access();
}
void Book::log_access(){
    cout << "--- Private log_access function called ---" << endl;
}

int main(){
    Book b;
    Librarian l;
    l.accessBooklog(&b);
    return 0;
}
