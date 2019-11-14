project('csv-reader', 'cpp', default_options: ['cpp_std=c++17'])

sources = [
    'src/arguments.cpp',
    'src/columns.cpp',
    'src/io.cpp',
    'src/main.cpp',
    'src/util/join.cpp',
    'src/util/split.cpp',
    'src/util/string_to_int.cpp',
]

includes = include_directories(
    'include',
)

executable('csv-reader', sources, include_directories: includes)
