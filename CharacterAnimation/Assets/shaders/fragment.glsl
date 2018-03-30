#version 330 core

subroutine vec4 outFragColor();

uniform sampler2D texture;
subroutine uniform outFragColor fragColor;

in vec2 outUvs;
in vec3 outColor;

subroutine(outFragColor)
vec4 outFromTexture()
{
	return texture2D(texture, outUvs);
}

subroutine(outFragColor)
vec4 outFromColor()
{
	return vec4(outColor.xyz, 1.0);
}

out vec4 frag_color;

void main()
{
    frag_color = fragColor();
}
