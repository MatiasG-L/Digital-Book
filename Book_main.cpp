/**********************************************************
*                                                         *
*                                                         *
*            Digital book for english class in c++        *
*                                                         *
*                                                         *
***********************************************************/

#include "raylib.h"
#include <fstream> //needed for file data extraction
#include <string>

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 900;
    
    const char *text = "Hello Vro... this is a test.";

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
        
            DrawText(text, 10, 0, 20, BLACK);
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