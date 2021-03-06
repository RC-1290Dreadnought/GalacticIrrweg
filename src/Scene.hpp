/*
 * Scene.hpp
 *
 *  Created on: 24.01.2015
 *      Author: sartz
 */

#ifndef SCENE_HPP_
#define SCENE_HPP_

#include <SFML/System.hpp>
#include <vector>
#include "GameObject.hpp"
#include "GUI.hpp"
#include "Item.hpp"
#include "GameObject.hpp"
#include "TextBox.hpp"
#include "Highscore.hpp"

struct TileFlightData
{
	GameObject *tile;
	sf::Vector2f currentPos;
	sf::Vector2f targetPos;
	sf::Vector2f momentum;
	sf::Vector2f startPos;
	float scale;
};

class Scene {
public:
	Scene();
	virtual ~Scene();

	GameObject* getTile(int x, int y);
	void setTile(GameObject* obj, int x, int y);
	void setGUI(GUI* obj);
	void switchLargeTile(int x1, int y1, int x2, int y2);
	void update(sf::Time deltaT);
	void leave();
	// hack hier, ne doch nicht xD
	GameObject * player;
	GUI* gui;
	TextBox* textBox;
	const std::vector<GameObject*> & getGameBoard() const;
/*private:
	std::vector<GameObject*> gameBoard;*/
	sf::Vector2i startPos;
	sf::Vector2i portalPos;
	std::vector<Item*> items;
//private:
	std::vector<GameObject*> gameBoard;
	std::vector<TileFlightData> tileAnimationPos;
	float tileAnimationTime;
	void updateTileAnimation(sf::Time deltaT);
	bool readyToLeave() const;
	void finishLevel();
private:
	bool leaved;
	Highscore *highscore;
	bool fooexit;
};

#endif /* SCENE_HPP_ */
