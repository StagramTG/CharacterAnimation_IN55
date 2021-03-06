#pragma once

#include <string>
#include <SFML/Graphics.hpp>

#include "GuiElement.h"
#include "Font.h"
#include "../VertexArrayObject.h"
#include "../VertexBufferObject.h"
#include "../IndicesBufferObject.h"

namespace mjt
{
	namespace gui
	{
		class Label: public GuiElement
		{
		private:
			std::string m_text;
			Font* m_font;

			VertexArrayObject* m_vao;
			VertexBufferObject* m_vbo;
			VertexBufferObject* m_uvs;
			IndicesBufferObject* m_indices;

			GLint m_verticesCount;

			void buildMesh();

		public:
			Label();
			Label(Font* font, std::string text);
			~Label();

			void setFont(Font* font);
			void setText(std::string text);

			virtual void update() override;
			virtual void render(ShaderProgram* shader, Camera* camera) override;
		};
	}
}