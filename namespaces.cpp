//Namespaces are used to resolve naming conflicts in large projects
//Each entity needs a unique name.
//Namespaces allow for identically named entities as long as the entities exist in different namespaces





#include <iostream>

namespace first{
    int x = 1;

}
namespace second{
    int x = 2;

}

// The main function
int main(){

    int x= 0;
    // Referencing the local variable
    std::cout << x << std::endl;
    // Referencing the first namespace
    std::cout << first::x << std::endl;
    // Referencing the second namespace
    std::cout << second::x << std::endl;

    return 0;
}


// Usind namespac std is kinda bad practise as it allows for a lot of naming conflicts
