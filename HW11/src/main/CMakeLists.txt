set(MAIN_SRC_DIR ${SRC_DIR}/main)
set(MAIN_SRC ${MAIN_SRC_DIR}/main.cpp)

add_executable(main ${MAIN_SRC})

set_target_properties(main PROPERTIES CXX_STANDERD 20 CXX_STANDARD_REQUIRED ON)

target_link_libraries(main lib)