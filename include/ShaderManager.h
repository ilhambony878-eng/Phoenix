#pragma once

class ShaderManager
{
public:
    static void Init();

    static void Load(
        const char* vertexShader,
        const char* fragmentShader);

    static void Use();

    static void Shutdown();
};
