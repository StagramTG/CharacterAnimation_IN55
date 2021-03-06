#include "SceneNode.h"

namespace mjt
{
	SceneNode::SceneNode()
	{
		m_transform = new Transform();
	}

	SceneNode::~SceneNode()
	{
		delete m_transform;

		/*Delete all children*/
		for (SceneNode* child : m_children)
		{
			delete child;
		}
	}

	void SceneNode::update()
	{
		for (SceneNode* child : m_children)
		{
			child->update();
		}
	}

	void SceneNode::render(ShaderProgram* shader, Camera* camera)
	{
		for (SceneNode* child : m_children)
		{
			child->render(shader, camera);
		}
	}

	void SceneNode::move_camera(sf::Keyboard::Key input)
	{
		for (SceneNode* child : m_children)
		{
			child->move_camera(input);
		}
	}

	void SceneNode::move_camera(int x, int y)
	{
		for (SceneNode* child : m_children)
		{
			child->move_camera(x, y);
		}
	}

	void SceneNode::addChild(SceneNode * child)
	{
		if (child != nullptr)
		{
			child->m_parent = this;

			m_children.push_back(child);
		}
	}

	void SceneNode::removeChild(SceneNode * child)
	{
		for (size_t i = 0; i < m_children.size(); ++i)
		{
			if (m_children[i] == child)
			{
				m_children.erase(m_children.begin() + i);
				break;
			}
		}
	}

	Transform* SceneNode::getTransform()
	{
		return m_transform;
	}
}
