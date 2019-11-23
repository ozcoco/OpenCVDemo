
#core

aux_source_directory(. SRC)

add_library(core ${SRC})

target_include_directories(core PUBLIC ${CMAKE_SOURCE_DIR}/utils ${CMAKE_SOURCE_DIR}/test)