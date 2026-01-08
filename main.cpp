//Drawing a cup  program
//Annie Kuxa
//January 7, 2026

#include "SSDL.h"

int main (int argc, char** argv)
{
    sout << "Annie's favorite cup\n";
    
    // White part of the cup handle (we are drawing a white circle at this stage)
    SSDL_RenderFillCircle(320, 230, 50);

    // Set the color to the screen color (black in our case) and drawing a "hole" in the cup handle
    SSDL_SetRenderDrawColor(BLACK);
    SSDL_RenderFillCircle(320, 230, 30);
    
    // Set the color to white and draw the body of the cup
    SSDL_SetRenderDrawColor(WHITE);
    SSDL_RenderFillRect(180, 140, 140, 180);

    // Three white vertical lines to represent the steam from cup
    SSDL_RenderDrawLine(200, 130, 200, 100);
    SSDL_RenderDrawLine(250, 130, 250, 80);
    SSDL_RenderDrawLine(300, 130, 300, 100);

    SSDL_WaitKey (); //Waiting for user to hit any key
    
    return 0;
}
