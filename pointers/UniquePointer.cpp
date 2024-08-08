#include<iostream>
#include<string>
#include<memory>
using namespace std;

class User{
    public:
        User(){
            cout<<"User Class Created\n";
        }
        ~User(){
            cout<<"User Class Destroyed\n";
        }
        void test(){
            cout<<"I am simply test Function\n";
        }
};


int main(){
    {
        // unique_ptr<User> susanta(new User());  // non fav.way

        unique_ptr<User> sam=make_unique<User>();
        sam->test();
        
        // unique_ptr<User> samm=sam;  // Not allowed

    }
    // lets see the shared pointer
    {
        shared_ptr<User> tim=make_shared<User>();
        shared_ptr<User> timm=tim; // allowed..
        tim->test();
        timm->test();
    }
    cout<<"Scope Outside\n";
}