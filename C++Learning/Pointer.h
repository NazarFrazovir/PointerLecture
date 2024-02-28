#include <iostream>

class Pointer

{
private:
    int age;
public:
    void SetAge(int new_age){
        age = new_age;
    }
    void Display(){
        std::cout<<"Age: "<<age<<std::endl;
    }

};
