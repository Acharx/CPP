#include<iostream>
using namespace std;

struct Address{
    string cityName;
    int No;
};

struct Employee {
    int id;
    string name;
    string department;
    Address address;

};

int main(){
    Employee employee ={12,"Mehmet","Electronic",{"Istanbul",34}};
    Employee employee2;
    
    employee2.name="Murat";
    employee2.id=13;
    employee2.department="Seller";
    employee2.address.cityName="Istanbul";
    employee2.address.No=34;
    
    cout<<employee.id<<endl;
    cout<<employee.name<<endl;
    cout<<employee.department<<endl;
    cout<<employee.address.cityName<<endl;
    cout<<employee.address.No<<endl;


    return 0;
}