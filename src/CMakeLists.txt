add_library(
    phoenix
    SHARED
    main.cpp
    PhoenixEngine.cpp
    Renderer.cpp
    ShaderManager.cpp
    FrameBuffer.cpp
    OpenGLContext.cpp
    ShaderLoader.cpp
    DefaultShader.cpp
)

find_library(log-lib log)

find_library(gles-lib GLESv3)

target_link_libraries(
    phoenix
    ${log-lib}
    ${gles-lib}
)
