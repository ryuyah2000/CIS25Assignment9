// Asks questions to determine whether you're eligible for the job
// will 
// code by Ryuya Hirota

#include <iostream>

int main() {
    bool us_citizen;
    bool bachelors;
    double years_experience;
    
    std::cout << "Are you a US citizen?" << std::endl;
    std::cin >> us_citizen;
    std::cout << "Do you have a bachelors degree?" << std::endl;
    std::cin >> bachelors;
    std::cout << "How many years of experience do you have?" << std::endl;
    std::cin >> years_experience;
    
    if (us_citizen && (bachelors || years_experience >= 2)) {
        std::cout << "You are eligible for the job" << std::endl;
    } else {
        std::cout << "You are not eligible for the job..." << std::endl;
    }
}
