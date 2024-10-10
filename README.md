# RaylibTemplate

## Description
A simple C++ Raylib template with essential features to help you quickly get started on new projects. This template includes a basic game loop, window handling, and rendering setup.

## Features
- Pre-configured Makefile for easy compilation
- Basic game loop and window management
- Customizable screen dimensions and frame rate
- Guide lines for visual reference (useful during development)
- Input handling for exiting the window ( `q` for exit )

## Getting Started

### Prerequisites
- **Raylib** (You can install it by following the instructions on [Raylib's GitHub](https://github.com/raysan5/raylib#installing-on-linux))
- **g++** or any C++11 (or higher) compatible compiler
- **Make** (for managing the build process)

### Setup

1. Clone the repository:
   ```bash
   git clone https://github.com/0Shree005/RaylibTemplate.git
   ```

2. Navigate into the project directory:
   ```bash
   cd RaylibTemplate
   ```

3. Build the project:
   ```bash
   make
   ```

4. Run the game:
   ```bash
   ./program
   ```

### Customization
- You can adjust the window size and frame rate in `game.hpp` by modifying these constants:
  ```cpp
  const int screenWidth = 1000;
  const int screenHeight = 800;
  const int fps = 60;
  ```

### Project Structure
- `include/`: Contains header files (`game.hpp`).
- `src/`: Contains source files (`main.cpp`, `game.cpp`).
- `Makefile`: Handles the build process.
---
