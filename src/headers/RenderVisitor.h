#pragma once
#include "visitor.h"
#include <string>
#include <iostream>
//#include "../headers/GameObject.h"
#include "../headers/Door.h"
#include "../headers/Key.h"
#include "../headers/Astroid.h"

class RenderVisitor :
	public Visitor
{
public:
	void visit(GameObject *e) {
		e->render();
	}

	void visit(Controls *e) {
		std::cout << " DO NOT USE ME FOR CONTROLS" << std::endl;
	}

	void visit(Door *e) {
		e->render();
	}

	void visit(Key *e) {
		e->render();
	}

	void visit(Astroid *e){
		e->render();
	}
	
};

