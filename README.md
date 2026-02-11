
/**
 * @file README.md
 * @brief Flappy Bird Clone using Qt (C++)
 * @author Prateek Narkhede

 * @section  Description
 *
 * This project is a simple Flappy Bird-style 2D game developed using Qt and C++.
 * It demonstrates core Qt concepts such as:
 * - QWidget custom rendering
 * - QPainter for graphics drawing
 * - QTimer for game loop
 * - Keyboard event handling
 * - Basic collision detection
 * - Resource management using Qt Resource System
 *
 * The game includes gravity mechanics, pipe generation,
 * collision detection, score tracking, and restart functionality.
 *
 *
 * @section features Features
 *
 * - Real-time game loop (20ms timer)
 * - Gravity-based bird physics
 * - Random pipe gap generation
 * - Collision detection with pipes and boundaries
 * - Score counter
 * - Game Over screen
 * - Restart on SPACE key
 *
 *
 * @section controls Controls
 *
 * SPACE  -> Make the bird jump
 * SPACE (after Game Over) -> Restart game
 *
 *
 * @section gameplay Game Mechanics
 *
 * - Bird is affected by gravity (velocity increases over time)
 * - Pressing SPACE applies upward velocity
 * - Pipes move from right to left
 * - Random vertical gap is generated for each pipe
 * - Score increases when pipe exits screen
 * - Game ends if:
 *      - Bird hits top or bottom boundary
 *      - Bird collides with the pipe
 *
 *
 * @section project_structure Project Structure
 *
 * GameWidget
 * --- paintEvent()      -> Handles rendering
 * --- keyPressEvent()   -> Handles user input
 * --- updateGame()      -> Game loop logic
 *
 *
 * @section technologies Technologies Used
 *
 * - C++
 * - Qt Framework
 * - QPainter
 * - QTimer
 * - QRandomGenerator
 *
 *
 * @section how_to_build How to Build
 *
 * 1. Install Qt (Qt Creator recommended)
 * 2. Clone the repository:
 *      git clone <your-repo-url>
 * 3. Open the .pro or CMakeLists.txt file in Qt Creator
 * 4. Build and Run
 *
 *
 * @section future_improvements Future Improvements
 *
 * - Add sound effects
 * - Add background music
 * - Add start screen
 * - Add difficulty levels
 * - Add high score saving
 * - Add animations
 *
 *
 * @section learning_outcome Learning Outcome
 *
 * This project was created to strengthen the understanding of:
 * - Event-driven programming in Qt
 * - Real-time rendering
 * - Object-oriented design in C++
 * - Game logic structuring
 *
 */


## Output:-

https://github.com/user-attachments/assets/4f7bc601-a472-41d8-8844-2b4618309018

