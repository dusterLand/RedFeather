/**
 * First crack at C++ programming.  Going for a programmatic representation of
 *  a square dungeon grid that can be traversed by player objects, encounter
 *  hazards or buffs, and eventually fight to the death.
 *
 * Resources used:
 *  http://www.cplusplus.com/doc/tutorial/
 *
 * TODO:
 *  Accomodate a rectangular grid with different X and Y axis lengths
 */

// This makes clog and endl available for use (I think)
#include <iostream>
// Include header file for dungeon class
#include "dungeon.h"

// namespace for program
namespace RedFeather {
    // class declaration
    class DungeonGame {
        public:
            DungeonGame();
    };
    /**
     * Class constructor method
     * This is called when an object of this class is initialized
     */
    DungeonGame::DungeonGame() {
        std::clog << "Creating dungeon game object" << std::endl;
        Dungeon dungeon;
        dungeon.generateGrid( 5, 5 );
        std::clog << "Dungeon game object created" << std::endl;
    }
}
/**
 * Main program function.
 */
int main() {
    // instantiate dungeon game
    RedFeather::DungeonGame dungeonGame;
    // terminate program with success code
    return 0;
}
