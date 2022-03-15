
#include "mat.hpp"

#include <iostream>

#include <string>

#include <vector>
// using namespace std;
namespace ariel
{
    std::string mat(int width , int hight , char fillout, char fillin){
        //checks negativity odds and range of chars
        if (hight < 1 || width <1){
           throw std::out_of_range{"problem with negative hight or width "}; 
        }
        if (hight % 2 != 1 || width % 2 !=1){
            throw std::out_of_range{"problem with even hight or width"};  
        }
        if(fillout < START_RANGE_OF_CHARS || fillout > END_RANGE_OF_CHARS ||
            fillin < START_RANGE_OF_CHARS || fillin > END_RANGE_OF_CHARS ){
            throw std::out_of_range{"problem with chars"};
        }
        // variable dicleration
        std::string mat_string;
        std::vector<std::vector<char>> mat;
        // initalization of the matrix of chars that build with vectors and fill the char need to be inside
        for(int i = 0 ; i < hight ; i++){
            std::vector<char> v;
            v.assign(width, fillin);
            mat.push_back(v);
        }
        // fill the char that need to be out from up and down 
        for(int line = 0 ; line <= hight/2 + 1; line +=2){
            for(int j = line ; j < width - line ; j++){
                mat.at(line).at(j) = fillout;
                mat.at(hight -line-1).at(j) = fillout;
            }
        }
        // fill the char that need to be out from left and right 
        for(int column = 0 ; column <= width/2 +1 ; column +=2){
            for(int j = column ; j < hight - column ; j++){
                mat.at(j).at(column) = fillout;
                mat.at(j).at(width -column-1) = fillout;
            }
        }
        // create the string
        for(int i = 0 ; i < hight ; ++i){
            for(int j = 0; j < width ; j++){
                mat_string += mat.at(i).at(j);
            }
            mat_string+="\n";
        }  
        return mat_string;

    }
}
