#include <iostream>
#include <string>
#include <vector>
#include <ctime>

class MySelf {

public:
    MySelf(){
        printf("You Can know following stuffs about me: ");
    }

    void setAge(){
    time_t my_time = std::time(NULL);
    std::string time = ctime(&my_time);
    std::string year = time.substr(time.length() - 5, time.length()-1);
    
    this-> age = std::stoi(year) - 2002;
    }

    std::string getname(){
        return name;
    }

    std::string dateofbirth(){
        return dateofbirth;
    }

private:
    std::string name = "Abu Ghalib";
    std::string dateofbirth = "14-02-2002";
    int age;




};

int main() {



    
    return 0;
}
