#version 330

in vec2 outColor;
out vec4 frag_color;

uniform sampler2D tex;

void main()
{
    frag_color = texture(tex, outColor);
}
