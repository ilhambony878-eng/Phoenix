#pragma once

class ShaderManager
{
public:
    static void Init();

    static void Load(
        const char* vertex,
        const char* fragment);

    static void Use();

    static void Shutdown();
};
