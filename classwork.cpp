#include <iostream>
#include <math.h>

int main() {
    // x%2=y%2=0
    std::cout << "Enter x, gap, y, gap, z" << std::endl;
    int x = 0;
    int y = 0;
    int z = 0;
    std::cin >> x >> y >> z;
    if ((x%2 == 1) && (y%2 == 1))
    {
        std::cout <<"Odd numbers"<< std::endl;
    }
    else
    {
        std::cout <<"one or two of numbers even"<< std::endl;
    }
    // x or y <20
    if (((x < 20) && (y >= 20)) || ((y < 20) && (x >= 20)))
    {
        std::cout <<"x<20 or y<20"<< std::endl;
    }
    else
    {
        std::cout <<"x>20 and y>20"<< std::endl;
    }
    // x or y ==0
    if ((x == 0) || (y == 0))
    {
        std::cout <<"x==0 or(and) y==0"<< std::endl;
    }
    else
    {
        std::cout <<"x!=0 and y!=0"<< std::endl;
    }
    // x and y and z <0
    if ((x < 0) && (y < 0) && (z < 0))
    {
        std::cout <<"x<0 and y<0 and z<0"<< std::endl;
    }
    else
    {
        std::cout <<"x>=0 or y>=0 or z>=0"<< std::endl;
    }
    // x or y or z %5==0
    if (((x%5 == 0) && (y%5 != 0) && (z%5 != 0)) || ((y%5 == 0) && (x%5 != 0) && (z%5 != 0)) ||
        ((z%5 == 0) && (y%5 != 0) && (x%5 != 0)))
    {
        std::cout <<"x%5==0 or y%5==0 or z%5==0"<< std::endl;
    }
    else
    {
        std::cout <<"x%5!=0 and(or) y%5!=0 and(or) z%5!=0"<< std::endl;
    }
    // x or y or z %5==0
    if ((x > 100) || (y > 100) || (z > 100))
    {
        std::cout <<"x>100 or y>100 or z>10=0"<< std::endl;
    }
    else
    {
        std::cout <<"x<=100 and y<=100 and z<=100"<< std::endl;
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
    if ((par.first == coo.first) || (par.second == coo.second))
    {
        if ((par.first == coo.first) && (par.second == coo.second))
        {
            std::cout << "Figures on the same place. Unbeliviable!!!!!" << std::endl;
        }
        else
        {
            std::cout << "Rooks can beat the other figure" << std::endl;
        }
    }
    else
    {
        std::cout << "Rooks cannot beat the other figure" << std::endl;
    }
    // elephant
    if (abs(par.first - coo.first) == abs(par.second - coo.second))
    {
        if ((par.first == coo.first) && (par.second == coo.second))
        {
            std::cout << "Figures on the same place. Unbeliviable!!!!!" << std::endl;
        }
        else
        {
            std::cout << "Elephant can beat the other figure" << std::endl;
        }
    }
    else
    {
        std::cout << "Elephant cannot beat the other figure" << std::endl;
    }
    // king
    if ((abs(par.first - coo.first) <= 1) && (abs(par.second - coo.second) <= 1))
    {
        if ((par.first == coo.first) && (par.second == coo.second))
        {
            std::cout << "Figures on the same place. Unbeliviable!!!!!" << std::endl;
        }
        else
        {
            std::cout << "King can go to this place" << std::endl;
        }
    }
    else
    {
        std::cout << "King cannot go to this place" << std::endl;
    }
    // queen
    if ((abs(par.first - coo.first) == abs(par.second - coo.second)) ||
        ((par.first == coo.first) || (par.second == coo.second)))
    {
        if ((par.first == coo.first) && (par.second == coo.second))
        {
            std::cout << "Figures on the same place. Unbeliviable!!!!!" << std::endl;
        }
        else
        {
            std::cout << "Queen can beat the other figure" << std::endl;
        }
    }
    else
    {
        std::cout << "Queen cannot beat the other figure" << std::endl;
    }
    return 0;
}
