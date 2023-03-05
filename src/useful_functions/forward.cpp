
// std::forward -> write function templates that can identically forward their arguments,
// generally used in factory functions or constructors
// forward.cpp

#if 0
#include <string>
#include <utility>
#include <vector>

using std::initialiser_list;

struct MyData{
MyData(int, double, char){};
};

template <typename T, typename...  Args>
T createT(Args&&... args){
return T(std::forward<Args>(args)... );
}


int a= createT<int>();
int b= createT<int>(1);

std::string s= createT<std::string>("Only for testing.");
MyData myData2= createT<MyData>(1, 3.19, 'a');

typedef std::vector<int> IntVec;
IntVec intVec= createT<IntVec>(std::initialiser_list<int>({1, 2, 3}));
#endif