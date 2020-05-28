project(factory)

file(GLOB SOURCES "*.c*")
file(GLOB HEADERS "*.h*")


if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS -D_WINSOCK_DEPRECATED_NO_WARNINGS)
endif()

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} )