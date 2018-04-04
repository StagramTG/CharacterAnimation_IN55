#pragma once

#include <GL\glew.h>
#include <glm\vec3.hpp>

namespace mjt
{
	struct AmbiantLightData
	{
		GLfloat intensity;
		glm::vec3 color;
	};

	class AmbiantLight
	{
	private:

	public:
		AmbiantLight();
		~AmbiantLight();
	};
}