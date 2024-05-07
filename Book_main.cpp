/**********************************************************
*                                                         *
*                                                         *
*            Digital book for english class in c++        *
*                                                         *
*                                                         *
***********************************************************/

#include "raylib.h"
#include "Logic.h"
#include <string>
#include <iostream>

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 900;
    int fontSize = 20;
    int ySpacing =10;
   
    Vector2 pos = {10,20};
    InitWindow(screenWidth, screenHeight, " Book ");

    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)
   


    SetTargetFPS(60);
   
    

    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        
            
            
            
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
            SetTextLineSpacing(20);  
            DrawTextEx(GetFontDefault(),Logic::LoadText().c_str(), pos, fontSize, ySpacing, BLACK);
            ClearBackground(RAYWHITE);
          
            
        EndDrawing();
        //----------------------------------------------------------------------------------
    }
     
     

    // De-Initialization
    //--------------------------------------------------------------------------------------
      // Texture unloading

    CloseWindow();                // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}