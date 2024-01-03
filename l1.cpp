#include <graphics.h>
#include <winbgim.h>
#include <conio.h>
void swap (int &a, int &b)
{
    int 
     t=a;
     a=b;
    b=t;
}

void drawline(int x1, int y1, int x2, int y2)
{
    if (x2<x1)
    {
        swap(x1,y1);
        swap(x2,y2);
    }
    int dx, dy;
    float m;

    dx = x2 - x1;
    dy = y2 - y1;
    m = float(dy) / float(dx);

    int y = y1;
    int x;
    for (x = x1; x <= x2; ++x)
    {
        y += m;
        putpixel(x, y, RED);
    }
}



int main() {
    int gm = DETECT, gd = DETECT;
    initgraph(&gm, &gd, nullptr);

    int x1, x2, y1, y2;

    drawline(100, 100, 200, 200);

    getch();
    closegraph();

    return 0;
}


