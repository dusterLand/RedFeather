/**
 * Dungeon object
 */
#include <iostream>
#include <string>
#include "dungeon.h"

namespace RedFeather{
    /**
     * Class constructor function
     */
    Dungeon::Dungeon() {
    }
    /**
     * Generate the dungeon grid.  This is currently done by initializing a nested
     *  array of 5 elements, each element of which is an array of 5 elements.
     */
    void Dungeon::generateGrid( int xSize, int ySize ) {
        // Output to log stream
        std::clog << "Starting dungeon generation" << std::endl;
        
        // initialize grid array for a 5x5 tile dungeon
        int tileGrid [ xSize ][ ySize ];
        
        std::clog << "Dungeon generation complete" << std::endl;
    }
};
