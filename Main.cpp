
#include "mat.hpp"

#include <iostream>
#include <stdexcept>
// using namespace std;

std::string nospaces(std::string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

int main() {
    std::cout << "good small mat:" << std::endl;
    bool result;
    result = (nospaces(ariel::mat(5, 5, '@', '-')) == nospaces("@@@@@\n@---@\n@-@-@\n@---@\n@@@@@")? true : false) ;
    std::cout << ariel::mat(5, 5, '@', '-') <<  std::endl;
    // @@@@@
    // @---@
    // @-@-@
    // @---@
    // @@@@@   
    std::cout << "@@@@@\n@---@\n@-@-@\n@---@\n@@@@@" <<  std::endl;
    std::cout << result <<  std::endl;

    std::cout << "good general mats @ case:" << std::endl;
    std::cout << ariel::mat(1, 1, '@', '-') << std::endl;
    //@
    std::cout << ariel::mat(7, 5, '@', '-') << std::endl;
    // @@@@@@@
    // @-----@
    // @-@@@-@
    // @-----@
    // @@@@@@@
    std::cout << ariel::mat(13, 9, '@', '-') << std::endl;
    // @@@@@@@@@@@@@
    // @-----------@
    // @-@@@@@@@@@-@
    // @-@-------@-@
    // @-@-@@@@@-@-@
    // @-@-------@-@
    // @-@@@@@@@@@-@
    // @-----------@
    // @@@@@@@@@@@@@
    std::cout << ariel::mat(19, 13, '@', '-') << std::endl;
    // @@@@@@@@@@@@@@@@@@@
    // @-----------------@
    // @-@@@@@@@@@@@@@@@-@
    // @-@-------------@-@
    // @-@-@@@@@@@@@@@-@-@
    // @-@-@---------@-@-@
    // @-@-@-@@@@@@@-@-@-@
    // @-@-@---------@-@-@
    // @-@-@@@@@@@@@@@-@-@
    // @-@-------------@-@
    // @-@@@@@@@@@@@@@@@-@
    // @-----------------@
    // @@@@@@@@@@@@@@@@@@@

    std::cout << "good general mats - case:" << std::endl;
    std::cout << ariel::mat(3, 3, '@', '-') << std::endl;
    // @@@
    // @-@
    // @@@
    std::cout << ariel::mat(7, 11, '@', '-') << std::endl;
    // @@@@@@@
    // @-----@
    // @-@@@-@
    // @-@-@-@
    // @-@-@-@
    // @-@-@-@
    // @-@-@-@
    // @-@-@-@
    // @-@@@-@
    // @-----@
    // @@@@@@@
    std::cout << ariel::mat(11, 19, '@', '-') << std::endl;
    // @@@@@@@@@@@
    // @---------@
    // @-@@@@@@@-@
    // @-@-----@-@
    // @-@-@@@-@-@
    // @-@-@-@-@-@
    // @-@-@-@-@-@
    // @-@-@-@-@-@
    // @-@-@-@-@-@
    // @-@-@-@-@-@
    // @-@-@-@-@-@
    // @-@-@-@-@-@
    // @-@-@-@-@-@
    // @-@-@-@-@-@
    // @-@-@@@-@-@
    // @-@-----@-@
    // @-@@@@@@@-@
    // @---------@
    // @@@@@@@@@@@
    
    try {
        std::cout << "Bad input one is even and the other is odd" << std::endl;
        std::cout << ariel::mat(7, 10, '@', '-') << std::endl;
    }catch (std::exception& ex) {
        std::cout << "   caught exception: " << ex.what() << std::endl;
    }


    try {
        std::cout << "Bad input one negetive and the other is odd" << std::endl;
        std::cout << ariel::mat(7, -11, '@', '-') << std::endl;
        }catch (std::exception& ex) {
        std::cout << "   caught exception: " << ex.what() << std::endl;
    }
    try {
        std::cout << "Bad input one negetive and the other is even" << std::endl;
        std::cout << ariel::mat(-7, 10, '@', '-') << std::endl;
        }catch (std::exception& ex) {
        std::cout << "   caught exception: " << ex.what() << std::endl;
    }
    try {
        std::cout << "Bad input two even" << std::endl;
        std::cout << ariel::mat(8, 10, '@', '-') << std::endl;
        }catch (std::exception& ex) {
        std::cout << "   caught exception: " << ex.what() << std::endl;
    }
    try {
        std::cout << "Bad input two negative" << std::endl;
        std::cout << ariel::mat(-7, -10, '@', '-') << std::endl;
        }catch (std::exception& ex) {
        std::cout << "   caught exception: " << ex.what() << std::endl;
    }
    
    try {
        std::cout << "Bad chars" << std::endl;
        std::cout << ariel::mat(7, 11, char(156), '-') << std::endl; //char(156) = £
        }catch (std::exception& ex) {
        std::cout << "   caught exception: " << ex.what() << std::endl;
    }






    
}