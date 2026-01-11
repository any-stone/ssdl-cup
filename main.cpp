//Drawing a cup  program
//Annie Kuxa
//January 7, 2026

#include "SSDL.h"

int main (int argc, char** argv)
{
    SSDL_SetWindowTitle ("Annie's favorite cup - in color");
    
    //Setting up new colors for the picture
    const SSDL_Color SAGE_GREEN = SSDL_CreateColor (158, 185, 168);
    const SSDL_Color TERRACOTA = SSDL_CreateColor (204, 114, 101);
    const SSDL_Color GHOST_WHITE = SSDL_CreateColor (248, 248, 255);

    //Make a cream colored background
    SSDL_RenderClear (TERRACOTA);

    // Cup's handle
    SSDL_SetRenderDrawColor     (SAGE_GREEN);
    SSDL_RenderFillCircle       (320, 230, 50);

    // Set the color to the background color and draw a "hole" in the cup handle
    SSDL_SetRenderDrawColor     (TERRACOTA);
    SSDL_RenderFillCircle       (320, 230, 30);

    // Set the color back to sage green and draw the rest of the cup
    SSDL_SetRenderDrawColor     (SAGE_GREEN);
    SSDL_RenderFillRect         (180, 140, 140, 180);

    // Three white vertical lines to represent the steam from cup
    SSDL_SetRenderDrawColor     (GHOST_WHITE);

    SSDL_RenderDrawLine(200, 130, 200, 100);
    SSDL_RenderDrawLine(250, 130, 250, 80);
    SSDL_RenderDrawLine(300, 130, 300, 100);

    SSDL_WaitKey (); //Waiting for user to hit any key
    
    return 0;
}
