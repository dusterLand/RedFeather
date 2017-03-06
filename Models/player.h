/**
 * Header file for Player class.
 */
#ifndef DUNGEON_H
#define DUNGEON_H
#include <string>

namespace RedFeather{
    class Player{
            public:
                Player( std::string );
        
            private:
                int playerArmor;
                int playerHealth;
                int playerName;
                int playerPower;
    };
}

#endif
