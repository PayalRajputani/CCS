//compiler time polymorphism
// operator overloading->allows same operator name or symbol to be used for multi. operation
#include<iostream>
using namespace std;

class complex
{
    int real, img;
    public:
    complex ()
    {
       //default constuctor -> refers to where no argument pass
    };
    complex(int real, int img)
    {
        this->real=real;
        this->img=img;
    };
    void display()
    {
        cout<<real<<" +i"<<img; //displaying real+ib(complex no.) b->img
    }
    complex operator +(complex &c)
    {                          // define the + operator
        complex ans;
        ans.real=real+c.real;
        ans.img=img+c.img;
    }
};
int main()
{
    complex c1(1,5);
    complex c2(4,0);
    complex c3= c1+c2;//we can overload any operator except few operator . 
    c3.display();

};