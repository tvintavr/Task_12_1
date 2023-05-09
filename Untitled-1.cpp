#include <iostream>
#include <limits>

int main() {


    
    std::string citizen[10];
    int i;
    for (i=0;i<10;i++) {
    bool incorrect=false;
        while (!incorrect) {
            std::cout<<"Appartment "<<i+1<<": citizen (surname): ";
            std::cin>>citizen[i];

            //check input data
            if (std::cin.fail() || std::cin.peek()!='\n') 
            {
                std::cout<<"Input Error\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                incorrect=false;
            } else {
                incorrect=true;
            }
            //check input data
        }
    }
    while (true) {
        std::cout<<"Enter appartment's number (1-10): ";
        int flatNumber;
        std::cin>>flatNumber;

        //check input data
        if (flatNumber<1 || flatNumber>10 ||
            std::cin.fail() || std::cin.peek()!='\n') 
        {
            std::cout<<"Input Error\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        //check input data

        } else {
            std::cout<<"Citizen "<<citizen[flatNumber-1]<<" lives in appartment #"<<flatNumber<<std::endl;
        }
    }




    
}

    
    

    


