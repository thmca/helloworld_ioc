qt_add_executable(helloworld
    main.cpp
)

target_link_libraries(helloworld PRIVATE
    businesslogic
    Qt6::Widgets)

set_target_properties(helloworld PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
