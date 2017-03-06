/**
 * Fisher Price "My First Header File"
 * Header files contain declarations of class names and functions (with
 *  argument types)
 */
// first, the header guard; this prevents something from being included multiple times
#ifndef DUNGEON_H
#define DUNGEON_H

// declarations go next
namespace RedFeather{
    class Dungeon{
            public:
                Dungeon();
                void generateGrid( int, int );

            private:
                int xSize;
                int ySize;
                int tileGrid;
    };
}

// end header guard
#endif
