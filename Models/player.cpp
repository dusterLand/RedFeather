/**
 * Player object
 */
#include <iostream>
#include <string>

namespace RedFeather{
    class Player {
        public:
            Player();
    };
    /**
     * Class constructor function
     */
    Player::Player() {
        std::clog << "Creating player object" << std::endl;
        // declare variables for player
        // health like hit points
        int playerHealth = 100;
        // armor provides damage reduction, starting value 25%
        int playerArmor = 25;
        // attack power, or damage amount, so an attack would do 10 base damage to
        //  an enemy
        int playerPower = 10;
        // player name
        // TODO: make this an argument from the calling class
        std::string playerName;
        playerName = "Bill";
        std::clog << "Player object created" << std::endl;
    }
};