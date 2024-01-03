#include <iostream>
#include <winbgim.h>
#include <conio.h>

void drawline(int x1, int y1, int x2, int y2)
{
    int x, y;

    if ((x1 < x2) && (y1 < y2))
    {
        x = x1;
        y = y1;
    }
    else
    {
        x = x2;
        y = y2;
    }

    float dx = x2 - x1;
    float dy = y2 - y1;
    float p = 2 * dy - dx;

    while (x <= x2)
    {
        printf("drawing:: ");
        if (p < 0)
        {
            putpixel(x++, y, YELLOW);
            printf("%d %d\n", x, y);
            p += 2 * dy;
        }
        else
        {
            printf("%d %d\n", x, y);
            putpixel(x++,y++, WHITE);
            p += 2 * dy - 2 * dx;
        }

       
    }
}
int main()
{

    int gm = DETECT, gd = DETECT;
    initgraph(&gm, &gd, nullptr);
    int x1, x2, y1, y2;
    printf("enter the initial point:");
    scanf("%d %d", &x1, &y1);
    printf("enter the final point:");
    scanf("%d %d",&x2, &y2);

    drawline(x1, y1, x2, y2);
    printf("ok done\n");

    getch();
    closegraph();

    return 0;
}
