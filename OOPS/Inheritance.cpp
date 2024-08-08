#include<iostream>
#include<string>
using namespace std;

// create a Base Class man
class Man{
private:
    string _name;
    int _age;
    Man(){}
protected:
    Man(const string & name,const int & age):
    _name(name),_age(age){}
    void run(){
        cout<< "I can run"<<endl;
    }
public:
    void info() const;

};

void Man::info()const{
        cout<<"My name is "<< _name << " and my age is " << _age<<endl;
}
// create a another class

class A{
public: 
    void gotMoney(){
        cout<< "I have 5K money in my Account" <<endl; 
    }
};

// derived class
// Superman
class Superman : public Man{
private:
    bool _flight;
public:
    Superman(string name) : Man(name,23){}; // constructor
    void run(){
        cout << "I can run at light speed"<<endl;
    }
};

// Spiderman
class Spiderman : public Man , public A { // Multiple Inheritance suppoort in C++.
private:
    bool _webbing;
public:
    Spiderman(string name): Man(name,19){};
    void run(){
        cout<<"I can run at normal Speed"<<endl;
    }

};

int main(){
    Superman susanta("Susanta Maity");
    susanta.info();
    susanta.run();

    Spiderman sreya("Sreya Das");
    sreya.info();
    sreya.run();
    sreya.gotMoney();

}