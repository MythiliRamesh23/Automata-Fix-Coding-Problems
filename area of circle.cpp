#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Test 
{
    public:
    float r, area;
    void input()
    {
        cin >> r;

    }

    void findArea()
    {
        area = 3.14 * r * r;
    }

    void display() 
    {
        cout << "Area of circle is:" << area;
    }
};

int main() 
{

    Test obj;

    obj.input();
    obj.findArea();
    obj.display();

    return 0;
}
