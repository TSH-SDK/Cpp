#include <iostream>

int main()
{
    int nums[2] {};
    std::string oper{};
    char operations[4]{'-', '+', '*', ':'};
    for (int n=0; n<2; n++)
    {   
        int new_num {};
        std::cin >> new_num;
        nums[n] = new_num;
    }
    std::cout << "Choose math operation:\n1: '-';\n2: '+';\n3: '*';\n4: ':';\nEnter number" << std::endl;
    std::cin >> oper;
    if (oper == "1")
    {
        std::cout << nums[0] - nums[1] << std::endl;
    }else if(oper == "2")
    {
        std::cout << nums[0] + nums[1] << std::endl;
    }else if(oper == "3")
    {
        std::cout << nums[0] * nums[1] << std::endl;
    }else if(oper == "4")
    {
        std::cout << nums[0] / nums[1] << std::endl;
    }
    
}