#pragma once
class GameObject;
class Controls;
class Door;
class Key;
class Astroid;
class Visitor {
public:
	virtual void visit(GameObject *e) = 0;
	virtual void visit(Controls *e)   = 0;
	virtual void visit(Door *e)		  = 0;
	virtual void visit(Key *k )		  = 0;
	virtual void visit(Astroid *k )		  = 0;
};

/*void GameObject::accept(RenderVisitor &v) {
	v.visit(this);
}
*/