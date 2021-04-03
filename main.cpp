//
//  main.cpp
//  arrrayssss
//
//  Created by muqtar kassim on 4/3/21.
//simple project about arrays
//arrays are used to store multiple  values in a single variable
//To declare an array,we have to do the following:
//1:  define the variable type,
//2:  specify the name of the array followed by square brackets and...
//3:  specify the number of elements it should store:



#include <iostream>
#include<string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string cars [4] ={"volvo","bmw","tesla","toyota"};
        
    std::cout <<cars[0] <<"\n";
    //outputs volvo
    //arrays start with 0 hence volvo will be "0" followed by bmw which is '1'
    return 0;
}
