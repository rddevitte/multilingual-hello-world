add_library(hello-world-portuguese-impl STATIC hello-world-portuguese-impl.cc)
add_library(hello-world-english-impl STATIC hello-world-english-impl.cc)

add_executable(hello-world-portuguese-app hello-world-app.cc)
add_executable(hello-world-english-app hello-world-app.cc)

target_link_libraries(hello-world-portuguese-app PRIVATE hello-world-portuguese-impl)
target_link_libraries(hello-world-english-app PRIVATE hello-world-english-impl)

install(TARGETS hello-world-portuguese-app
                hello-world-english-app
        DESTINATION bin)
