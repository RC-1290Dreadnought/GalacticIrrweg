#pragma once

#include <SFML/Graphics.hpp>
#include <bitset>
#include "SceneManager.hpp"
#include "SoundManager.hpp"

// define number of keyboards binding 
#define INPUT_SIZE 5
typedef std::bitset<INPUT_SIZE> InputType;
extern sf::Keyboard::Key keyboardBinding[INPUT_SIZE];

extern sf::RenderWindow window;
extern SceneManager sceneManager;
extern SoundManager soundManager;

extern bool focus;
extern InputType input;