#include <iostream>

int main()
{
    //
    std::string Name="bro";
    std::string *pName=&Name;
    std::cout<<pName<< std::endl;
    //
    int Age = 21;
    int *pAge=&Age;
    std::cout<<*pAge<< std::endl;
    //
    std::string freepizza[5]={"pizza1","pizza2","pizza3","pizza4","pizza5"};
    std::string *pfreepizza= freepizza;
    std::cout << freepizza << std::endl;
    return 0;
}
