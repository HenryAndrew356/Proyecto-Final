#include<iostream>
#include"SFML\Graphics.hpp"							//\ 
#include"SFML\Window.hpp"							///-->Inclusion de librerias de plataformas
#include"SFML\System.hpp"
#include<math.h>									// Inclusion de Libreria para operaciones matematicas
#include<cstdlib>									// Inclusion de libreria para añadir
#include<vector>
#pragma once
class Bullet
{
public:
	Sprite shape;

	Bullet(Texture* texture, Vector2f pos)
	{
		this->shape.setTexture(*texture);

		this->shape.setScale(0.07f, 0.07f);

		this->shape.setPosition(pos);
	}

	~Bullet() {}
};

