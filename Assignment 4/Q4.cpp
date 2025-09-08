#include <iostream>
using namespace std;
class Student{
    protected:
        int RollNo;
        string Name;
    public:
        void GetDetails(){
            cout << "enter roll no. : ";
            cin >> RollNo;
            cin.ignore();
            cout << "enter name : ";
            getline(cin, Name);
        }
        void DisplayDetails(){
            cout << "roll no.: " << RollNo << " name : " << Name << endl;
        }
};
class Marks : public Student{
    protected:
        int Subject1,Subject2;
    public:
        void GetMarks(){
            cout << "enter marks for subject 1: ";
            cin >> Subject1;
            cout << "enter marks for subject 2: ";
            cin >> Subject2;
        }
        void DisplayMarks(){
            cout << "Subject 1 marks : " << Subject1 << " and Subject 2 marks : " << Subject2 << endl;
        }
};
class Result : public Marks{
    int TotalMarks;
    public:
        void CalculateResult(){
            TotalMarks = Subject1 + Subject2;
        }
        void DisplayResult() {
            DisplayDetails();
            DisplayMarks();
            cout << "Total Marks: " << TotalMarks << endl;
            if (TotalMarks > 70) { 
                cout << "Result: PASSED" << endl;
            } else {
                cout << "Result: FAILED" << endl;
            }
        }
};
int main() {
    int size;
    cout << "enter number of students : ";
    cin >> size;
    Result r[size];
    for(int i = 0;i<size;i++){
        r[i].GetDetails();
        r[i].GetMarks();
        r[i].CalculateResult();
    }    
    for(int j = 0;j<size;j++){r[j].DisplayResult();}

    return 0;
}
