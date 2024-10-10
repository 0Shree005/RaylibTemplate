#include "../include/game.hpp"

int main() {
    Game game;

    game.initialize();

    while(!game.shouldClose()) {
        game.exitWindowRequested();
        game.render();
    }
    game.shutdown();
}
