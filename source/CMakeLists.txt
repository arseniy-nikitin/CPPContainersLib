set(LIB_NAME CONTAINERS)

AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR} CONTAINERS_SRCS)
file(GLOB_RECURSE CONTAINERS_HEADER includes/*.h)

add_library(${LIB_NAME} STATIC
            ${CONTAINERS_SRCS}
            ${CONTAINERS_HEADER})

add_compile_options(-Werror

                    -Wall
                    -Wextra
                    -Wpedantic

                    -Wcast-align
                    -Wcast-qual
                    -Wconversion
                    -Wctor-dtor-privacy
                    -Wenum-compare
                    -Wfloat-equal
                    -Wnon-virtual-dtor
                    -Wold-style-cast
                    -Woverloaded-virtual
                    -Wredundant-decls
                    -Wsign-conversion
                    -Wsign-promo)