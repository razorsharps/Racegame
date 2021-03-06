#pragma once

#include "../headers/Key.h"
#include "../headers/Game.h"
#include "../headers/Inventory.h"

Key::Key() {
}

Key::Key(std::string _name, glm::vec3 aPosition, glm::vec3 scale, bool steer, glm::vec3 rotation, float aCollisionDistance) : GameObject(_name,aPosition,scale,steer,rotation, aCollisionDistance) {
}

Key::~Key(){
}


void Key::accept(Visitor &v) {
		v.visit(this);
}


void Key::onCollision() {
	if(!Inventory::getKey(this->name))
		Inventory::findKey(this);
}