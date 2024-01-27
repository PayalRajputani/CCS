#include<iostream>
using namespace std;

class complex 
{
    int real, img;
    public:
    complex(int real, int img)
    {
        this-> real=real;
        this-> img=img;
    }
};
void display()
{
 cout<<real<<"+i"<<img;
}
complex operator +(complex &c)
{
    complex ans;
    ans.real=real+c.real;
    ans.img=img+c.img;
    return ans;
}
int main()
{
  complex C1(3,2);
  complex C2(4,6);
  complex C3= C1+C2;
       C3.display();

}