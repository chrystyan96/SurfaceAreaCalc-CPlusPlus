#include <string>
#include <iostream>
#include <sstream>

void calculateFloorWallSurfaces();
void getUserInformation(std::string& name, std::string& number, std::string& address);
int getTaskAssignment();
void printTask(int task);
void getRoomInformation(int task, float& roomWidth, float& roomDepth, float& roomHeight);
void printJobInformation(std::string userName, std::string phoneNumber, std::string userAddress, std::string remodelRoom, int task);
float calcWallSurfaceArea(float roomWidth, float roomDepth, float roomHeight);
float calcPaintCost(float wallSurfaceArea, const float PAINTCOST);
float calcWallPaperCost(float wallSurfaceArea, const float WALLPAPERCOST);
void printWallCostComparisons(float paintCost, float wallpaperCost);
float calcFloorArea(float roomWidth, float roomDepth);
float calcCarpetCost(float floorArea, const float TILECOST);
float calcTileCost(float floorArea, const float TILECOST);
float calcWoodFloor(float floorArea, const float TILECOST);
void printFloorCostComparisons(float carpetCost, float tileCost, float woodFloorCost);
std::string getRoomChoice();
