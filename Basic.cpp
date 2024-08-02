#include <iostream>
#include <chrono>
#include <ctime>

int main(){

    auto now = std::chrono::system_clock::now();
    
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);

    std::tm* local_time = std::localtime(&now_time);

    std::cout<<"Current time local time: " << std::asctime(local_time);
    
    return 0;
}