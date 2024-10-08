#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <memory>

#include "constants.h"
#include "gameInput.h"
#include "gameOutput.h"




// GameEngine class handle the game loop and the game state
class GameEngine {
    PlayerPtr player;
    FloorPtr floor;
    GameMapPtr gameMap;
    GameInputPtr gameInput;
    GameOutputPtr gameOutput;
    int* playerScore;
    int stop = -1;
    std::string givenMapFile;
    std::vector<std::vector<char>> givenMap;
    bool haveGivenMap = false;
    bool hasRestart = false;
public:
    GameEngine(std::string mapFile, PlayerRace playerRace, bool useDLC, int* playerScore, std::string givenMapFile);

    bool gameRun();
    void handlePlayerCmd(PlayerCmd cmd);
    void handleEnemiesAction();
    void playerCreate(PlayerRace playerRace);
    PlayerCmd getAction();
    void restartGame();

    ~GameEngine();
};






#endif
