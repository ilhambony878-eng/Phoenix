#pragma once

class OpenGLContext
{
public:
    static bool Init();
    static void Shutdown();
    static bool IsReady();
};
