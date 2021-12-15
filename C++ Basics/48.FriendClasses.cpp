#include<iostream>
using namespace std;



class Employee{
private:
    string name;
    int age;
    int salary;

public:
    Employee(string name,int age,int salary){
        this->name=name;
        this->age=age;
        this->salary=salary;
    }
    friend class Test;
};

class Test{
public:
    static void showInfos(Employee employee){
        cout<<employee.name<<" "<<employee.age<<" "<<employee.salary<<endl;
    }
};

int main(){
    Employee employee("Mehmet",35,4000);
    Test::showInfos(employee);
    

 
    return 0;
}