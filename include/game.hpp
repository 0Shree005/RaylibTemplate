#pragma once

class Game {

    public:
        void initialize();
        void render();
        bool shouldClose();
        void exitWindowRequested();
        void shutdown();

        const int screenWidth = 1000;
        const int screenHeight = 800;

        const int fps = 60;


    private:
        bool exitWindow = false;
        bool exitRequested = false;

};
