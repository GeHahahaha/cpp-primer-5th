#include <iostream>


struct SALEDATA
{
    int sold_num = 0;
};

int main()
{
    SALEDATA sale_data ;
    sale_data.sold_num = 10;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
