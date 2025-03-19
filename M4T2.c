/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute 'raylib_compile_execute' script
*   Note that compiled executable is placed in the same folder as .c file
*
*   To test the examples on Web, press F6 and execute 'raylib_compile_execute_web' script
*   Web version of the program is generated in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

//M4T2
//Andrae Thomas
//3-19-2025

#include "raylib.h"
#include <stdlib.h>

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    
    int tile_width = 80;
    int tile_length = 60;
    int tile_height = 40;
    Color color1 = GOLD;
    Color color2 = BLUE;
    int c_x = 0; 
    int c_y = 0;
    
    //Box to Collect
    int collect_block_width = 20;
    int collect_block_height = 20;
     Vector2 collect_block_position = { (float)(rand() % (screenWidth - collect_block_width)),
                                       (float)(rand() % (screenHeight - collect_block_height)) };
    bool collected = false;
    int points=0;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
    if (IsKeyDown(KEY_RIGHT)) c_x +=5; //move right
    if (IsKeyDown(KEY_LEFT)) c_x -=5; //move Left
    if (IsKeyDown(KEY_UP)) c_y -=5; //move up
    if (IsKeyDown(KEY_DOWN)) c_y +=5; //move down
    
    //Ensure Rectange stays within boundary
    if (c_x < 0) c_x = 0;
    if (c_y < 0) c_y = 0;
    if (c_x > screenWidth - tile_width) c_x = screenWidth - tile_width;
    if (c_y > screenHeight - tile_height) c_y = screenHeight - tile_height;
    
        Rectangle tile = {c_x, c_y, tile_width, tile_height};
        Rectangle collect_block = {collect_block_position.x, collect_block_position.y, collect_block_width, collect_block_height};
        
        if (CheckCollisionRecs(tile, collect_block)) {
            // If collided, set collected to true and respawn the block
            collected = true;
                points +=5;
                collect_block_position.x = (float)(rand() % (screenWidth - collect_block_width));
            collect_block_position.y = (float)(rand() % (screenHeight - collect_block_height));
        }
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(BLACK);

            DrawRectangle(c_x, c_y, tile_width, tile_height, color1);
            int left_x = c_x + (tile_width / 4);
            int left_y = c_y + (tile_width / 4);
            DrawRectangle (c_x, c_y, 10, 10, color2);
            
            DrawRectangle((int)collect_block_position.x, (int)collect_block_position.y, collect_block_width, collect_block_height, RAYWHITE);
            
            ///*
            // is this a unicode thing?
            //char pointsText[20];
            
            DrawText (TextFormat( "Points: %d", points), 10,10,20, WHITE);
            //*/
            //DrawText(TextFormat("Points: %05i", points), 10, 10, 20, WHITE);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}