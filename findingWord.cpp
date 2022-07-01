#include <iostream>
#include <string>

int main()
{
    std::string writing = "Ala ma kota";
    std::string search = "kot";

    size_t position = writing.find(search);

    if (position != std::string::npos) {
        std::cout << "Found in position: " << position;
    }
    else {
        std::cout << "Not found!";
    }
    
    return 0;
}
