#pragma once

#include <glm/glm.hpp>
#include <ArrowsIoEngine\SpriteBatch.h>
class Bullet
{
public:
	Bullet(glm::vec2 pos, glm::vec2 dir, float speed, int lifeTime);
	~Bullet();

	void draw(ArrowsIoEngine::SpriteBatch& spriteBatch);
	bool update();

private:
	int _lifeTime;
	float _speed;
	glm::vec2 _direction;
	glm::vec2 _postion;
};

