qt_add_library(businesslogic STATIC
    calculatorform.cpp
    calculatorform.ui
    test.cpp
)
target_link_libraries(businesslogic PRIVATE Qt6::Widgets)
target_include_directories(businesslogic INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
