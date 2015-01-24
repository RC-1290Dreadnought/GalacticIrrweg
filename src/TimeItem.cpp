#include "globals.hpp";
#include "TimeItem.hpp";

TimeItem::TimeItem(sf::Sprite* sprite):Item(sprite,0,0,16,16){
}

void TimeItem::applyEffect()
{
	sceneManager.getCurrentScene().gui->applyTimeBufff(-20);
};