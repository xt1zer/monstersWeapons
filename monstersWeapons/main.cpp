﻿#include "pch.hpp"

int main() {
    Game game;
    short retCode = game.Run();
    if (retCode)
        std::cout << "Game shut down incorrectly. Error code: " << retCode << "\n\n";

    return 0;
}
