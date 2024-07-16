#pragma once
#include "widget.h"
#include "role.h"
#include "enemy.h"
#include "timer.hpp"
class Control 
{
public:
	Control();
	void Draw();
	void Move();
	void Play();
private:
	Widget* pw;
	Role* prole;
	Enemy* penemy;
};