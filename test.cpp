#include <iostream>
#include "time_elapse.hpp"
int main() {
    long sum = 0;
    time_elapse te;
    te.start();
    for (int i = 0;i < 1000000;i++) {
        sum += i;
    }
    std::cout << te.end() << std::endl;
    
    return 0;
}