#pragma once

#include "Game.h"
#include "FrameManager.h"

#include "PlayerCharacter.h"
#include "Particle.h"
#include "Wall.h"

#ifndef GAME_MANAGER_HPP
#define GAME_MANAGER_HPP

class GameManager {
public:
	GameManager();
	void MakePlayer();
	void MakeWall();
	void StartGame();
	bool PrecedeGame();
	void GetPlayerKeyInput();
private:
	FrameManager frameManager;
	Game* game;
};

#endif