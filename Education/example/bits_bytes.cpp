#include <cstdint>
#include <iomanip>
#include <iostream>

int main()
{
    auto d = 42;
    auto o = 052;
    auto x = 0x2a;
    auto b = 0b101010;

    std::cout << std::oct << 42 << '\n'
              << std::dec << 42 << '\n'
              << std::hex << 42 << std::endl;

    std::uint16_t mask  = 0x00f0;
    std::uint32_t value = 0x12345678;

    std::cout << std::hex << std::showbase    
        <<            mask  << '\n'
        <<   value          << '\n' 
        << ( value |  mask) << '\n' 
        << ( value & ~mask) << '\n'  
        << ( value &  mask) << '\n' 
        << ( value ^  mask) << '\n' 
        << (~value        ) << std::endl;

    auto v1 = 0x123;

    std::cout << (v1 << 1) << std::endl;

    auto v2 = -1000;

    std::cout << std::dec << (v2 >> 2) << std::endl;

    return 0;
}