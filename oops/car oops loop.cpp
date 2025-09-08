#include <iostream>
using namespace std;

class Car{
public:
    string name;
    float speed;
    void input(){
        cout<<"Enter car name:"<<endl;
        getline(cin,name);
        cout<<"Enter the speed of the car:"<<endl;
        cin>>speed;
        cin.ignore();
    }
    void display(){

        cout<<"The name of the car is: "<<name<<endl;
        cout<<"The speed of the car is: "<<speed<<" km/hr"<<endl;

    }
};

int main(){
    int n;
    cout<<"How many cars do you want?"<<endl;
    cin>>n;
    cin.ignore();
    Car cars[n];
    cout<<"Enter the details of the cars"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter details of car "<<i+1<<endl;
        cars[i].input();
    }
    for(int i=0;i<n;i++){
        cout<<"-------------------------"<<endl;
        cout<<"Details of car "<<i+1<<endl;
        cars[i].display();
        cout<<"-------------------------"<<endl;
    }

    return 0;
}
