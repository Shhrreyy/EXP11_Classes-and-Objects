#include<iostream>
using namespace std;

class Bike{
    public:
    string company;
    string name;
    string power;
    float price;
};

int main(){
    Bike b1;
    b1.company = "Kawasaki";
    b1.name = "H2R";
    b1.power = "999";
    b1.price = 5400000.00;
    
    cout<<b1.company<<endl;
    cout<<b1.name<<endl;
    cout<<b1.power<<endl;
    cout<<b1.price<<endl;
    
    return 0;
}
