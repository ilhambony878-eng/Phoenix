add_library(
    phoenix
    SHARED
    main.cpp
    PhoenixEngine.cpp
    Renderer.cpp
    ShaderManager.cpp
    ShaderLoader.cpp
    FrameBuffer.cpp
    OpenGLContext.cpp
    DefaultShader.cpp
    VertexBuffer.cpp
)

target_include_directories(
    phoenix
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}
)

find_library(log-lib log)
find_library(gles-lib GLESv3)

target_link_libraries(
    phoenix
    ${log-lib}
    ${gles-lib}
)
