#pragma once

// Include GLEW
#include <GL/glew.h>
 
// Include GLFW
#include <GL/glfw.h>

// Include GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

// Include GLM
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/euler_angles.hpp>
#include <glm/gtx/norm.hpp>

#include "Element.h"
using namespace glm;

class Controls : public Element {
	private:
		glm::mat4 ViewMatrix;
		glm::mat4 ProjectionMatrix;

	public:
		Controls();
		void updateCamera();
		void update();
		void accept(Visitor &v);
		glm::mat4 getViewMatrix();
		glm::mat4 getProjectionMatrix();

		glm::vec3 getCameraPosition();
		glm::vec3 getPosition();
		glm::vec3 getDirection();
		glm::vec3 getMousePosition();
		float getRotationSpeed();
		float getSpeed();
		float getSteering();

		void setSpeed(float accel);

		GameObject* spaceShip;
				
		glm::vec3 position, cameraPosition, carPosition, carDirection, direction;
		float horizontalAngle, verticalAngle, initialFoV, rotationSpeed, speedPerTick, acceleration, horizontalSteering, verticalSteering;
		float speed, mouseSpeed;
};