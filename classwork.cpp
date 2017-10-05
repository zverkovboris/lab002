#include <iostream>
#include <math.h>

int main()
{
    // x%2=y%2=0
    std::cout << "Enter x, gap, y, gap, z" << std::endl;
    int x = 0;
    int y = 0;
    int z = 0;
    std::cin >> x >> y >> z;
    if ((x % 2 == 1) && (y % 2 == 1))
    {
        std::cout << "Odd numbers" << std::endl;
    }
    else
    {
        std::cout << "one or two of numbers even" << std::endl;
    }
    // x xor y <20
    if (((x < 20) && (y >= 20)) || ((y < 20) && (x >= 20)))
    {
        std::cout << "x<20 xor y<20" << std::endl;
    }
    else
    {
        std::cout << "(x>20 and y>20) or (x<20 and y<20)" << std::endl;
    }
    // x or y ==0
    if ((x == 0) || (y == 0))
    {
        std::cout << "x==0 or(and) y==0" << std::endl;
    }
    else
    {
        std::cout << "x!=0 and y!=0" << std::endl;
    }
    // x and y and z <0
    if ((x < 0) && (y < 0) && (z < 0))
    {
        std::cout << "x<0 and y<0 and z<0" << std::endl;
    }
    else
    {
        std::cout << "x>=0 or y>=0 or z>=0" << std::endl;
    }
    // x xor y xor z %5==0
    if (((x % 5 == 0) && (y % 5 != 0) && (z % 5 != 0)) || ((y % 5 == 0) && (x % 5 != 0) &&
        (z % 5 != 0)) || ((z % 5 == 0) && (y % 5 != 0) && (x % 5 != 0)))
    {
        std::cout << "x%5==0 xor y%5==0 xor z%5==0" << std::endl;
    }
    else
    {
        std::cout << "x%5!=0 and(or) y%5!=0 and(or) z%5!=0" << std::endl;
    }
    // x or y or z >100
    if ((x > 100) || (y > 100) || (z > 100))
    {
        std::cout << "x>100 or y>100 or z>10=0" << std::endl;
    }
    else
    {
        std::cout << "x<=100 and y<=100 and z<=100" << std::endl;
    }
    // chess rooks
    std::pair<int, int> coo;
    int a = 0;
    int b = 0;
    std::cout << "Enter coordinates of the rooks (a,b)(a gap b)" << std::endl;
    std::cin >> coo.first >> coo.second;
    std::cout << "Enter coordinates of other figure (c,d)" << std::endl;
    std::pair<int, int> par;
    int c = 0;
    int d = 0;
    std::cin >> par.first >> par.second;
    if ((par.first == coo.first) && (par.second == coo.second))
    {
        std::cout << "Figures on the same place. Unbeliviable!!!!!" << std::endl;
    }
    else
    {
        if ((par.first == coo.first) || (par.second == coo.second))
        {
            std::cout << "Rooks can beat the other figure" << std::endl;
        }
        else
        {
            std::cout << "Rooks cannot beat the other figure" << std::endl;
        }
        // elephant
        if (abs(par.first - coo.first) == abs(par.second - coo.second))
        {
            std::cout << "Elephant can beat the other figure" << std::endl;
        }
        else
        {
            std::cout << "Elephant cannot beat the other figure" << std::endl;
        }
        // queen
        if ((abs(par.first - coo.first) == abs(par.second - coo.second)) ||
            ((par.first == coo.first) || (par.second == coo.second)))
        {
            std::cout << "Queen can beat the other figure" << std::endl;
        }
        else
        {
            std::cout << "Queen cannot beat the other figure" << std::endl;
        }
        // pawn
        if ((abs(par.first - coo.first) == 1) && (par.second - 1 == coo.second))
        {
            std::cout << "pawn can beat this figure" << std::endl;
        }
        else
        {
            std::cout << "pawn cannot beat this figure" << std::endl;
        }
        if ((coo.first == par.first) && (par.second - 1 == coo.second))
        {
            std::cout << "pawn can go to this place" << std::endl;
        }
        else if ((coo.second == 2) && (par.second - 2 == coo.second))
        {
            std::cout << "pawn can go to this place" << std::endl;
        }
        else
        {
            std::cout << "pawn cannot go to this place" << std::endl;
        }
        // king
        if ((abs(par.first - coo.first) <= 1) && (abs(par.second - coo.second) <= 1))
        {
            std::cout << "King can go to this place" << std::endl;
        }
        else
        {
            std::cout << "King cannot go to this place" << std::endl;
        }
    }
    for (a = 1; a <= 9; ++a)
    {
        std::cout << a << "*7=" << 7 * a << std::endl;
    }
    x = 1;
    for (a = 8; a <= 15; ++a)
    {
        x = x*a;
    }
    std::cout << "8*9*10*11*12*13*14*15=" << x << std::endl;
    std::cout << "print a" << std::endl;
    std::cin >> a;
    x = 1;
    for (c = a; c <= 20; ++c)
    {
        x = x*c;
    }
    std::cout << "a*(a+1)*..*20=" << x << std::endl;
    std::cout << "print b" << std::endl;
    std::cin >> b;
    x = 1;
    for (c = 1; c <= b; ++c)
    {
        x = x*c;
    }
    std::cout << "1*2*3*....*b=" << x << std::endl;
    std::cout << "print a, gap, b" << std::endl;
    std::cin >> a >> b;
    x = 1;
    for (c = a; c <= b; ++c)
    {
        x = x*c;
    }
    std::cout << "a*(a+1)*....*b=" << x << std::endl;
    return 0;
}
