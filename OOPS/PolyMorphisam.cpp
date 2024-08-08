#include<iostream>
using namespace std;

// Method overriding
class One{
    public:
       virtual void message(){
            puts("I am One\n");
        }
};

class Two : public One{
    public:
        void message(){
            puts("I am Two\n");
        }
};

class Three :public One{
    public: 
        void message(){
            puts("I am Three\n");
        }
};


int main(){
    // One a;
    // Two b;
    // Three c;


    // a.message();
    // b.message();
    // c.message();

    // lets try to see the pointer 

    One *a;
    Two b;
    Three c;

    a=&b;
    a->message(); // Its expected result I am Two , bcz a object pointing to b object .. But the result is I am one.

    a=&c;
    a->message();// Its expected result I am Two , bcz a object pointing to b object .. But the result is I am one.

    // To neglect this problem we add new variable virtual in One class
    // Now , The result is I am Two and I am Three.

}