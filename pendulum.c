 #include <stdio.h> 
 #include <stdbool.h> 
 #include <math.h> 
 #include "SDL2/SDL.h" 
 #include "main.h" 
  #ifndef MAIN_H 
 #define MAIN_H 
  
 #define DISPLAY_WIDTH 720.0 
 #define DISPLAY_HEIGHT 1600.0 
 #define pendulumLength 400.0 
 #define pendulumRad 30.0 
 #define gravitationalAcceleration 9.80667 
 #define rho 1.225 
 #define dt 0.1 
  
 #define Kp 0.9 
 #define Ki 0.01 
 #define Kd 0.08 
  
 FILE *file; 
 void DrawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius); 
  
 #endif
 int main() { 
     SDL_Init(SDL_INIT_VIDEO); 
     SDL_Window* Window = SDL_CreateWindow("pendulumSimulation", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, DISPLAY_WIDTH, DISPLAY_HEIGHT, SDL_WINDOW_SHOWN); 
     SDL_Renderer* Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED); 
     file = fopen("logs.txt", "w"); 
     fprintf(file, "<Angular Velocity> <Air Drag> <X> <Y>\n"); 
  
     // Initial Conditions 
     double pendulumAngle = 90*M_PI/180; 
     double angularVelocity = 0.0; 
     double prevError = 0.0; 
     double Integral = 0.0; 
  
     // Check SDL Events 
     while(true) { 
         SDL_Event Event; 
         while(SDL_PollEvent(&Event)) { 
             if(Event.type == SDL_QUIT) { 
                 SDL_DestroyRenderer(Renderer); 
                 SDL_DestroyWindow(Window); 
                 SDL_Quit(); 
                 return 0; 
             } 
         } 
  
         // PID Loop Control 
         double desiredAngle = 0.0*M_PI/180;  
         double Error = desiredAngle - pendulumAngle; 
         Integral += Error * dt; 
         double desiredOutput = Kp * Error + Ki * Integral + Kd * (Error - prevError) / dt; 
  
         angularVelocity += desiredOutput * dt; 
         double dampFactor = 0.99; 
         angularVelocity *= dampFactor; 
         double angularAcceleration = (-gravitationalAcceleration / pendulumLength) * sin(pendulumAngle); 
         angularVelocity += angularAcceleration * dt; 
         pendulumAngle += angularVelocity * dt; 
         double blobArea = M_PI * pow(pendulumRad, 2.0); 
         double drag = 0.5 * 0.47 * rho * pow(angularVelocity, 2) * (blobArea/DISPLAY_HEIGHT/DISPLAY_WIDTH); 
         angularVelocity += drag * dt; 
  
         int pendulumX = DISPLAY_WIDTH / 2 + pendulumLength * sin(pendulumAngle); 
         int pendulumY = DISPLAY_HEIGHT / 4 + pendulumLength * cos(pendulumAngle); 
         // Change <4> to lower value for bouncy effect 
  
         fprintf(file, "<%lf> <%lf> <%d> <%d>\n", angularVelocity, drag, pendulumX, pendulumY); 
         SDL_SetRenderDrawColor(Renderer, 40, 42, 54, 255); 
         SDL_RenderClear(Renderer); 
         SDL_SetRenderDrawColor(Renderer, 80, 250, 123, 255); 
         SDL_RenderDrawLine(Renderer, DISPLAY_WIDTH / 2, DISPLAY_HEIGHT / 4, pendulumX, pendulumY); 
         DrawCircle(Renderer, pendulumX, pendulumY, pendulumRad); 
         SDL_RenderPresent(Renderer); 
         SDL_Delay(10); 
  
  
         prevError = Error; // Store new previous erorr 
     } 
     fclose(file); 
     // Clean up 
     SDL_DestroyRenderer(Renderer); 
     SDL_DestroyWindow(Window); 
     SDL_Quit(); 
     return 0; 
 } 
  
 void DrawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius) { 
     for (int y = -radius; y <= radius; y++) { 
         for (int x = -radius; x <= radius; x++) { 
             if (x * x + y * y <= radius * radius) { 
                 SDL_RenderDrawPoint(renderer, centerX + x, centerY + y); 
             } 
         } 
     } 
 }