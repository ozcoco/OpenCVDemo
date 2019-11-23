
#test

include_directories(.)

aux_source_directory(. SRC)

add_library(test ${SRC})

target_link_libraries(test PUBLIC ${OPENCV_LIB} utils)