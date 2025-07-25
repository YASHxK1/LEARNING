
#include   <iostream>

class Human{
    public:
    std::string name;
    std::string ocupation;
    int age;

    void eat()
    {
        std::cout <<  "this person is eating." << std::endl;
    }
    void drink()
    {
        std::cout << "this person is drinking." << std::endl;
    }
    void sleep()
    {
        std::cout << "this person is sleeping." << std::endl;
    }
};

int main()
{
    Human human1;
    human1.name="rick";
    human1.ocupation="scientist";
    human1.age=70;
    
    std::cout<<human1.name<<'\n';
    std::cout<<human1.ocupation<<'\n';
    std::cout<<human1.age<<'\n';
    
    human1.eat();
    human1.drink();
    human1.sleep();
    
    //Human2
    Human Human2;
    Human2.name="yash";
    Human2.ocupation="data scientist";
    Human2.age=21;

    std::cout<<Human2.name<<'\n';
    std::cout<<Human2.ocupation<<'\n';
    std::cout<<Human2.age<<'\n';
    
    Human2.eat();
    Human2.drink();
    Human2.sleep();
    
    return 0;
    
    
}

