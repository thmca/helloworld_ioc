qt_add_library(businesslogic STATIC
    calculator.cpp
    calculator.ui
    test.cpp
)
target_link_libraries(businesslogic PRIVATE Qt6::Widgets)
target_include_directories(businesslogic INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
