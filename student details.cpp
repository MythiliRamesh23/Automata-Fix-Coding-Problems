#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
        float perc;
    public:
        
        void getDetails(void);
       
        void putDetails(void);
};


void student::getDetails(void){
   
    cin >> name;
    
    cin >> rollNo;
   
    cin >> total;
    
    perc=(float)total/500*100;
}


void student::putDetails(void){
    
    cout << "perc:" << perc;
}

int main()
{
    student std;        
    
    std.getDetails();
    std.putDetails();
    
    return 0;
}
