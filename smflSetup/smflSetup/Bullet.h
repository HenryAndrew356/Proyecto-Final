#ifndef BULLET_H
#define BULLET_H

#include"SFML\Graphics.hpp"	
#include"SFML\Window.hpp"
#include"SFML\System.hpp"
#include"SFML\Audio.hpp"
#include<iostream>

#include<math.h>
#include<cstdlib>
#include<vector>

using namespace sf;

class Bullet {
public:
	Sprite shape;
	Bullet(Texture* texture, Vector2f pos) {
		this->shape.setTexture(*texture);
		this->shape.setScale(0.07f, 0.07f);
		this->shape.setPosition(pos);
	}
	~Bullet() {}
};


#endif BULLET_H