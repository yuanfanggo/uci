add_library(uci STATIC uci.c)
target_include_directories(uci PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(uci PUBLIC spi)

