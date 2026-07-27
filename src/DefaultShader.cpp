#include "DefaultShader.h"

const char* DefaultShader::Vertex()
{
    return R"(#version 300 es

layout(location = 0) in vec3 aPosition;

void main()
{
    gl_Position = vec4(aPosition, 1.0);
}
)";
}

const char* DefaultShader::Fragment()
{
    return R"(#version 300 es

precision mediump float;

out vec4 FragColor;

void main()
{
    FragColor = vec4(
        1.0,
        0.5,
        0.2,
        1.0
    );
}
)";
}
