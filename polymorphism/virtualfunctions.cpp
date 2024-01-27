//Run time polymorphism
//virtual function-> a member function you may redefine for oyher derived classes.
#include<iostream>
#include<vector>
using namespace std;

class Animal // parent class
{
    public: 
//for pure virtual function->not write codepart under VF,only assign zero valuelike virtual void speak()=0
    virtual void speak() // decide at run time 
    {
        cout<<"Hu Hu"<<endl;
    } 
};
class Dog : public Animal //child class
{
    public:
    void speak()
    {
        cout<<"Bark"<<endl;
    }
};
class cat : public Animal // child class
{
    public:
    void speak()
    {
        cout<<"Meow"<<endl;
    }
};
int main()
{
    Animal *p; //parent class ka pointer aapni child class address store kara sakta h
   // p= new Dog();
    //p->speak();
    vector<Animal*>animals;
    animals.push_back(new Dog());
    animals.push_back(new cat());
    animals.push_back(new Animal());   
    animals.push_back(new Dog());
    animals.push_back(new cat());

    for(int i=0; i<animals.size(); i++)
    {
        p = animals[i];
        p->speak();
    }
};