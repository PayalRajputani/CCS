// function overloding-> name of functions are same but its parmeters are different
#include<iostream>
using namespace std;

class Area
{
    public:
    int calculateArea(int l, int b)//area of ractangle
    {
        return l*b;
    }
    int calculateArea(int r)//area of circle 
    {
       return 3.14*r*r;
    }
    
};
int main()
{
   Area A1, A2;
   cout<<A1.calculateArea(3,4)<<endl;
   cout<<A1.calculateArea(5)<<endl;
}