#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "Transform.h"

namespace mjt
{
	class SceneNode
	{
	protected:
		SceneNode* m_parent;
		std::vector<SceneNode*> m_children;
		Transform* m_transform;

	public:
		SceneNode();
		~SceneNode();

		virtual void update();
		virtual void render();

		void addChild(SceneNode* child);
		void removeChild(SceneNode* child);
	};
}
