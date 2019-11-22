#include <iostream>

using namespace std;

class Plattform{
public:
    int lenght(int maxlenght);
    int height(int maxheight);
    double x,y;


};

void posoffset(Plattform &x, double offsetx, double offsety)
{
    x.x += offsetx;
    x.y += offsety;
}
void printpos(Plattform x)
    {
        cout<< "("<< x.x <<","<< x.y<< ")" << endl;
    }

int Plattform::lenght(int maxlenght)
{
    return maxlenght;
}

int Plattform::height(int maxheight)
{
    return maxheight;
}

int main()
{
Plattform plattform1;
plattform1.height(50);
plattform1.lenght(100);
plattform1.x = 0;
plattform1.y = 100;
printpos(plattform1);
posoffset(plattform1, 200, -50);
printpos(plattform1);
}
