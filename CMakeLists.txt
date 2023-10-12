cmake_minimum_required(VERSION 3.5)
project(helloworld VERSION 0.1 LANGUAGES CXX)


set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

add_subdirectory(main)
add_subdirectory(src)

#target_link_libraries(helloworld PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

#set_target_properties(helloworld PROPERTIES
#    WIN32_EXECUTABLE TRUE
#)

#include(GNUInstallDirs)
#install(TARGETS helloworld
#    BUNDLE DESTINATION .
#    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
#)

#if(QT_VERSION_MAJOR EQUAL 6)
#    qt_finalize_executable(helloworld)
#endif()
