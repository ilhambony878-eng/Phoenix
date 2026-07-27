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
)

find_library(log-lib log)

target_link_libraries(
    phoenix
    ${log-lib}
)
