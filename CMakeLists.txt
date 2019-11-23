cmake_minimum_required(VERSION 3.15)
project(OpenCVDemo)

set(CMAKE_CXX_STANDARD 17)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

include_directories(${CMAKE_SOURCE_DIR})


add_subdirectory(core)

add_subdirectory(utils)

add_subdirectory(test)

add_executable(OpenCVDemo main.cpp)

set(OPENCV_LIB
        opencv_aruco
        opencv_bgsegm
        opencv_bioinspired
#        opencv_ca3d
#        opencv_cca
        opencv_core
        opencv_cvv
        opencv_datasets
        opencv_dnn
        opencv_dnn_objdetect
        opencv_dpm
        opencv_face
        opencv_features2d
        opencv_flann
        opencv_freetype
        opencv_fuzzy
        opencv_hdf
        opencv_hfs
        opencv_highgui
        opencv_imgcodecs
        opencv_img_hash
        opencv_imgproc
        opencv_line_descriptor
        opencv_ml
        opencv_objdetect
        opencv_optflow
        opencv_phase_unwrapping
        opencv_photo
        opencv_plot
        opencv_reg
        opencv_rgbd
        opencv_saliency
        opencv_shape
        opencv_stereo
        opencv_stitching
        opencv_structured_light
        opencv_superres
        opencv_surface_matching
        opencv_text
        opencv_tracking
        opencv_video
        opencv_videoio
        opencv_videostab
        opencv_viz
        opencv_ximgproc
        opencv_xobjdetect
        opencv_xphoto)

target_link_libraries(OpenCVDemo PUBLIC ${OPENCV_LIB} pthread core utils test)