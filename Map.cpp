
#include "Map.h"
#include <fstream>
#include <string>

void GameMap::LoadMap(std::string name)
{
    std::ifstream in; // ngan hon dung fopen_s
    in.open(name);
    game_map_.max_x_ = MAX_MAP_X * TILE_SIZE;
    game_map_.max_y_ = MAX_MAP_Y * TILE_SIZE;

    for (int i =  0; i < MAX_MAP_Y; i++)
    {
        for (int j = 0; j < MAX_MAP_X; j++)
        {
            in >> game_map_.tile[i][j];
            int val = game_map_.tile[i][j];
        }
    }

    game_map_.start_x_ = 0;
    game_map_.start_y_ = 0;

    game_map_.file_name_ = name;

    in.close();
}

void GameMap::LoadTiles(SDL_Renderer* screen, std::string path)
{

    for (int i = 0; i < MAX_TILES; i++)
    {
        std::string file_img = path;
        std::string num = std::to_string(i);
        file_img.insert(11, num);

        tile_map[i].LoadImg(file_img, screen);
    }
}

void GameMap::DrawMap(SDL_Renderer* screen)
{
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    int map_x = 0;
    int map_y = 0;
    map_x = game_map_.start_x_ / TILE_SIZE;
    x1 = (game_map_.start_x_ % TILE_SIZE) * -1;
    x2 = x1 + SCREEN_WIDTH + (x1 == 0 ? 0 : TILE_SIZE);
    map_y = game_map_.start_y_ / TILE_SIZE;
    y1 = (game_map_.start_y_ % TILE_SIZE) * -1;
    y2 = y1 + SCREEN_HEIGHT + (y1 == 0 ? 0 : TILE_SIZE);
    for (int i = y1; i < y2; i += TILE_SIZE)
    {
        map_x = game_map_.start_x_ / TILE_SIZE;
        for (int j = x1; j < x2; j += TILE_SIZE)
        {
            int val = game_map_.tile[map_y][map_x];
            if (val > 0)
            {
                tile_map[val].SetRect(j, i);
                tile_map[val].Render(screen);
            }
            map_x++;
        }
        map_y++;
    }
}