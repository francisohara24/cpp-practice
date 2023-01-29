//
// STRING STREAMS 8/12/2022.
//

#include <sstream>
#include <iostream>

int main(){
    //Parsing a string of comma-separated integers using a string stream object.
    std::stringstream ss("1, 2, 3, 4, 5");
    int a, b, c, d, e;
    char ch;
    ss>>a>>ch>>b>>ch>>c>>ch>>d>>ch>>e;
    std::cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<std::endl;
    std::cout<<ss.str();
    return 0;
}