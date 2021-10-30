add_executable(lambda_epressions main.cpp)

target_link_libraries(lambda_epressions source)
target_include_directories(lambda_epressions PUBLIC source)

install(TARGETS lambda_epressions DESTINATION ${INSTALL_DIR})
