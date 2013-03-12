# Nom du projet
project(Eclipse)

include_directories(${sfml_include_dir})

file(
    GLOB_RECURSE
    source_files
    src/*
)

# Déclaration de l'exécutable
add_executable(
    bin/sfml
    
    # Sources files
    ${source_files}
)

target_link_libraries(
        bin/sfml
        ${sfml_lib_name}
)