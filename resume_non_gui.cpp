#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <ctime>

class MySelf {

public:
    int ages = 0;
    int *p = &ages;
    MySelf(){
        printf("-----------------------------------------------------------Resume:-----------------------------------------------------\n");
    }

    void setAge(){
    time_t my_time = std::time(NULL);
    std::string time = ctime(&my_time);
    std::string year = time.substr(time.length() - 5, time.length()-1);
    *p = std::stoi(year) - 2002;
    this -> age = *p;
    }

    void myinfo(){
        std::string info ="\n\tName:          "+name +"\n\tFather's Name: "+f_name +"\n\tMother's Name: "+m_name+ "\n\tGender:        "+gender+    
        "\n\tDate Of Birth: "+dateofbirth+ "\n\tAge:           18\n\tMaritial Status: "+maritalstatus+"\n\tEducation Qualification: \n"+education_qualification+"\n\tOther Cources:\n"+non_degree_cources+
         "\tHobbies:         "+hobbies+"\n\tExpected Salary: "+expected_salary;
         
         std::cout <<info;

         }

private:

    std::string name = "Abu Ghalib";
    std::string f_name = "Mohd Yusuf";
    std::string m_name = "BIBI Kaushri";
    std::string gender = "Male";
    std::string dateofbirth = "14-02-2002";
    std::string maritalstatus = "Unmarried";
    int age;

    std::string education_qualification = "\t| ----------------------------------Education Qualification-----------------------------------|\n\n"
                                          "\t| Degree-------University/Board-------Subject--------Marks Obtained/Grade--------Total Marks  |\n"
                                          "\t| B.Tech       AKU, PATNA             C.S.E            --                      --             |\n"
                                          "\t| 12th         CBSE                   P.C.M            --                      --             |\n"
                                          "\t| 10th         CBSE                   All              --                      --             |\n"
                                          "\t|----------------X-----------------Education Qualification---------------X--------------------|\n\n";

    std::string non_degree_cources ="\t|-----------------------------------------Non Degree Cources-------------------- -------------------|\n\n"
                                    "\t| Cource Name----------------------------------------Platform----------------------------------Year |\n"
                                    "\t| C++ Beginner+Intermediate+Advance by Microsoft     EDX                                       2017 |\n"
                                    "\t| Introduction to Python by Texas University         EDX                                       2017 |\n"
                                    "\t| Introduction to Probability by MIT                 EDX                                       2018 |\n"
                                    "\t| Introduction to Multivarious Calculus by London U  Coursea                                   2018 |\n"
                                    "\t| Introduction to Linear Algebra by MIT (MATLAB)     EDX                                       2018 |\n"
                                    "\t| Introduction to Machine Learning by MIT            EDX                                       2019 |\n"
                                    "\t| Introduction to Android Development by Google      Udacity                                   2019 |\n"
                                    "\t| Android Development using Kotlin by Google         Udacity                                   2019 |\n" 
                                    "\t| Competitive Programming stateries to win by ITMO   EDX                                       2020 |\n"
                                    "\t| Introduction to algorithm by Landon University     Coursea                                   2020 |\n"
                                    "\t|---------------------X------------------Non Degree Cources------------------X----------------------|\n\n";


    std::string hobbies = "\tProgramming and Computer Gamming";
    std::string willingtoworks ="\tAnywhere in the world except India";
    std::string whynotinIndia ="\tI have been in this country for a long time, Indian politics is more dominant\nSoory if your's country politics is better"
                                "\tI have only seen the less mind people forming government and fooling people around. I believe India in worst in this field";
    
    std::string expected_salary = "\tYours choice";

};

int main() {

    MySelf resume;

    resume.myinfo();

    printf("\n\n-----------------------------------------------------------X----------------------------------------------------------\n");

    system("pause");

    // time_t my_time = std::time(NULL);
    // std::string time = ctime(&my_time);
    // std::string year = time.substr(time.length() - 5, time.length()-1);

    // int ages = 0;
    // int *p = &ages;
    // *p = std::stoi(year) - 2002;

    // std::cout << year <<"\n" <<std::to_string(ages);

    
    return 0;
}
