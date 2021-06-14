#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class A 

{

public:

int x=3;

void A_input()

{

 cin>>x;

 }

};

class B : public A // B is derived from A

{

public:

void square()

{

cout<<"Square: "<< x * x<<endl;

}

};

class C : public A //C is derived from A

{

public:

void cube()

{

cout<<"Cube: "<< x*x*x <<endl;

}

};

int main()

{

B b; // Object b of derived class B

C c; // Object c of derived class C

b.A_input();

b.square();

c.A_input();

c.cube();

return 0;

}

