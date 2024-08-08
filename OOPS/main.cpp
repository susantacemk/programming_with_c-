#include <iostream>

using namespace std;

// create a User class

class User
{
private:
    int _age = 22;

public:
    string name = "default";
    void message();
    // {
    //     cout << "user class is great " << name << endl;
    // }
    // getter and setter message..
    void setAge(const int & newAge)
    {
        _age = newAge;
    }

    int getAge()
    {
        return _age;
    }
};

void User::message(){
    cout << "user class is great " << name << endl;
}

int main()
{
    // create an object
    User susanta;
    susanta.name = "Susanta Maity";
    susanta.message();
    // let's try to get the age of Susanta
    susanta.setAge(23);
    cout << "Susanta Age is " << susanta.getAge() << endl;

    User sreya;
    sreya.message(); // o.p== class is great default
    sreya.name = "Sreya Das";
    sreya.message(); // o.p == class is great Sreya Das
}