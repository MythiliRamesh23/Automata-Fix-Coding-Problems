#include<iostream>

using namespace std;

class Vehicle

{

    public:

    int no_of_litres;

    int fuel_prices;

    void FuelAmount()

    {

        cin>>no_of_litres;

        cin>>fuel_prices;

        cout<<"Fuel amount is: "<<fuel_prices<<endl;

    }

};

class Car:public Vehicle

{

  public:

  char colour[20];

  void Display()

  {

      cin>>colour;

      cout<<"Colour of the car is: "<<colour;

  }

};

int main()

{

    Car swift;

    swift.FuelAmount();

    swift.Display();

    return 0;

}
