#include<iostream>

using namespace std;
// create a Rectengular class
class Rectangle
{
private:
        double _length;
        double _breadth;
public:
    Rectangle(double l=2.0,double b=2.0){
        this->_length=l;
        this->_breadth=b;
    }

    double Area(){
        return _length * _breadth;
    }

    int compare(Rectangle rectanle){
        return this->Area() > rectanle.Area();
    }
    // this-> it's used for self referencing class...
    
};


int main(){
    Rectangle R1(3.0,3.0);
    Rectangle R2(4.0,4.0);
    Rectangle R3; // access by default value..
    
    // Print the area

    cout<< "Area of R1 class is "<< R1.Area()<<endl;
    cout<< "Area of R2 class is "<< R2.Area()<<endl;
    cout<< "Area of R3 class is "<< R3.Area()<<endl;
    if(R1.compare(R2)){
        cout << "R2 is Smaller "<<endl;
    }else{
        cout<< "R2 is Bigger "<<endl;
    }

}