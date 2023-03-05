#include <utility>
#include <iostream>

using namespace std;

template<typename T>
void swap_ashish(T& a, T& b){
    T temp (std::move(a));
    a = std::move(b);
    b = std::move(temp);
}

int main(){
    int a = 5;
    int b = 100;

    std::cout<<"a = "<<a<<" "<<"b = "<<b<<std::endl;
    swap_ashish (a, b);
    std::cout<<"a = "<<a<<" "<<"b = "<<b<<std::endl;
}