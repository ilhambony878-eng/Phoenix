add_library(
    phoenix
    SHARED
    main.cpp
)

find_library(log-lib log)

target_link_libraries(
    phoenix
    ${log-lib}
)
