#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

ifstream file_input;

class bounds_c {
    //scale is 0.0625/LY (lvl 3 = 4LY)
public:
    int stars = 4;
    float min_x_spacing = 0.5;
    float max_x_spacing = 8.0;
    float min_y_spacing = 0.5;
    float max_y_spacing = 8.0;
    int min_resources = 5;
    int max_resources = 60;
    int gate_percent = 0;
    int econ = 0;
    int industry = 0;
    int science = 0;
    int str = 0;
    
}

void init() {
    srand(69420) // CHANGE TO GENERATE NEW STRING
}

int main() {
    
}
