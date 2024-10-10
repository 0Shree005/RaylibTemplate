#include <raylib.h>
#include "../include/game.hpp"

void Game::initialize() {
    InitWindow(screenWidth, screenHeight, "Raylib Template");
    SetExitKey(KEY_NULL);
    SetTargetFPS(fps);
}

void Game::render() {
    BeginDrawing();

    ClearBackground(SKYBLUE);
    if (exitRequested) {
        DrawRectangle(0, 100, screenWidth, 200, BLACK);
        DrawText("Exit the game? Press Y or N", screenWidth / 4, 180, 30, WHITE);
    } else {
        DrawLine(screenWidth/2, 0, screenWidth/2, screenHeight, RED); // vertical guide line
        DrawLine(0, screenHeight/2, screenWidth, screenHeight/2, BLACK); // horizontal guide line
    }
    DrawFPS(10, 10);
    EndDrawing();
}

void Game::exitWindowRequested() {
    if (IsKeyPressed(KEY_Q)) exitRequested = true;
    if (exitRequested) {
        if (IsKeyPressed(KEY_Y)) exitWindow = true;
        else if (IsKeyPressed(KEY_N)) exitRequested = false;
    }
}

bool Game::shouldClose() {
    return exitWindow;
}

void Game::shutdown() {
    CloseWindow();
}
