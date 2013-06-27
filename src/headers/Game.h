#pragma once

#include <GL/glew.h>
#include <GL/glfw.h>
#include <glm/glm.hpp>
#include <vector>
#include <algorithm>

#include "../headers/Shader.h"
#include "../headers/Texture.h"
#include "../headers/objloader.h"
#include "../headers/Environment.h"
#include "../headers/controls.h"
#include "../headers/GameObject.h"
#include "../headers/Door.h"
#include "../headers/Renderer.h"
#include "../headers/text2D.h"
#include "../headers/Sound.h"
#include "../headers/UpdateVisitor.h"
#include "../headers/Collision.h"
#include "../headers/Key.h"
#include "../headers/Inventory.h"

class Game {
	enum {NORMAL = 0, SKYBOX};
	GLuint shaders[3]; 

	enum {MATRIXID = 0, VIEWMATRIXID, MODELMATRIXID, SKYBOXMATRIXID};
	GLuint handles[4]; 

	enum {CHECK1 = 0, CHECK2, CHECK3, CHECK4, CHECK5, CHECK6};
	glm::vec3 checkpoints[6]; 

	private:
		int checkIndex;

		GLuint TextureIDs;
		GLuint LightID1, LightID2;

		Renderer* renderer;

		GameObject *halo;
	
		double startTime;

		bool carMoved;
		bool playSound;
		float bestLap;
		bool win;
		Environment *environment;
		Controls* control;
		Collision* collision;
		UpdateVisitor updateVisitor;

		float pie;
	public:
		
		Game();
		virtual ~Game();

		void initGLFW();
		void initGLEW();
		
		void setGlParameters();
		void buildGameObjects();

		void foundKey(Key* aKey);

		void build();
		void run();
		void stop();
};