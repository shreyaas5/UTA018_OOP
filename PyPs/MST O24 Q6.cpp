#include <iostream>
using namespace std;

class Company {
protected:
    string company_name;
    string location;

public:
    Company(string company_name, string location) {
        this->company_name = company_name;   // using this pointer
        this->location = location;
    }

    void displayCompany() {
        cout << "Company: " << this->company_name
             << ", Location: " << this->location << endl;
    }
};

class Team : public Company {
protected:
    string team_name;
    string project;

public:
    Team(string company_name, string location, string team_name, string project)
        : Company(company_name, location) {  
        this->team_name = team_name;         
        this->project = project;
    }

    void displayTeam() {
        cout << "Team: " << this->team_name
             << ", Project: " << this->project << endl;
    }
};

class Developer : public Team {
private:
    string developer_name;
    string programming_language;

public:
    Developer(string company_name, string location,
              string team_name, string project,
              string developer_name, string programming_language)
        : Team(company_name, location, team_name, project) { 
        this->developer_name = developer_name;   
        this->programming_language = programming_language;
    }

    void displayDeveloper() {
        this->displayCompany();  
        this->displayTeam();
        cout << "Developer: " << this->developer_name
             << ", Language: " << this->programming_language << endl;
    }
};

int main() {
    Developer d("TechS", "New Delhi",
                "AI Team", "Chatbot Project",
                "Sheroo", "C++");

    d.displayDeveloper();
    return 0;
}
