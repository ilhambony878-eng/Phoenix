#pragma once

class ShaderLoader
{
public:
    static void Init();
    static void Shutdown();

    static const char* GetDefaultVertexShader();
    static const char* GetDefaultFragmentShader();
};
