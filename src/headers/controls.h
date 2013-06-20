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

using namespace glm;

class Controls {
	private:
		glm::mat4 ViewMatrix;
		glm::mat4 ProjectionMatrix;
		
		glm::vec3 position, carPosition, carDirection, direction;
		float horizontalAngle, verticalAngle, initialFoV, rotationSpeed, speedPerTick, acceleration, steering;
		float speed, mouseSpeed;

	public:
		Controls();
		void updateCamera();
		void update();

		glm::mat4 getViewMatrix();
		glm::mat4 getProjectionMatrix();

		glm::vec3 getCameraPosition();
		glm::vec3 getPosition();
		glm::vec3 getDirection();

		float getRotationSpeed();
		float getSpeed();
		float getSteering();

		void setSpeed(float accel);
};