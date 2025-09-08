#include <iostream>
using namespace std;

class Car{
public:
    string name;
    float speed;
    void display(){
        cout<<"The name of the car is: "<<name<<endl;
        cout<<"The speed of the car is: "<<speed<<" km/hr"<<endl;
    }
};

int main(){
    Car a;
    cout<<"Enter car name:"<<endl;
    cin>>a.name;
    cout<<"Enter speed in km/hr"<<endl;
    cin>>a.speed;
    a.display();

    Car b;
    cout<<"Enter car name:"<<endl;
    cin>>b.name;
    cout<<"Enter speed in km/hr"<<endl;
    cin>>b.speed;
    b.display();
    return 0;
}
