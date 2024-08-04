#include <iostream>
#include <string>
using namespace std;

// lets create an phone class

class Phone
{
private:
    string _name = "";
    string _os = "";
    int _price = 0;

public:
    Phone();                                                       // default constructor.
    Phone(const string &name, const string &os, const int &price); // parameterized constructor.
    Phone(const Phone &); // copy constructor..
    ~Phone();
    string getOs()
    {
        return _os;
    }
};

// default constructor..
Phone::Phone() : _name(), _os("Android"), _price()
{
    puts("Default Constructor are called!!");
}

// parameterized Constructor..
Phone::Phone(const string &name, const string &os, const int &price):_name(name),
_os(os),_price(price){
    puts("Parameterized constructor are called!!");
}

// copy constructor

Phone::Phone(const Phone &values){
    puts("OVERWRITE copy constructor are called!!");
    _name=values._name;
    _os="Skinned-"+values._os; // Overwrite
    _price=values._price;
}

// Destructor

Phone::~Phone(){
    cout<<"Destructor called by obejct "<<_name<<endl;
}

int main()
{
    // create an object

    Phone samsung;
    cout<<"Os Name is = "<<samsung.getOs()<<endl;


    Phone moto("Motorola","Android-12",17999);
    cout<<"Os Name is = "<<moto.getOs()<<endl;


    Phone realme=moto;
    cout<<"Os Name is = "<<realme.getOs()<<endl;


}