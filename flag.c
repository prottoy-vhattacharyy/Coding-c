//Including graphics library
#include<graphics.h>

//Including standard input output library
#include <stdio.h>

//Main function
void main(){ 
    //Initializing graphics
    int driver=DETECT, mode=0;
    initgraph(&driver, &mode, NULL);
    
    //setcolor function is used to change the current drawing color
    //We're changing it to green
    setcolor(GREEN);
    
    //rectangle function is used to draw a rectangle
    //left, top, right and bottom is required to draw a rectangle
    
    rectangle(40,80, 600, 400);
    //floodfill function is used to fill the area.
    floodfill(320, 240, GREEN);
   
  
    setcolor(RED);  
    //circle function is used to draw a circle
    //left, top and a radius is required to draw a circle
    circle(320, 240, 100);
    floodfill(320, 240, RED);
    
    setcolor(YELLOW);
    //Drawing a line from 600,80 to 600, 480
    line(600, 80, 600, 480);
    
    //Waiting for keyboard input. Without this the screen will close in a matter of seceond.
    getchar();
}