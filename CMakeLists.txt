﻿# CMakeList.txt: Projekt CMake pro prestupnyRok, sem přidejte logiku zdrojového
# kódu a definic specifickou pro projekt.
#
cmake_minimum_required (VERSION 3.8)

project ("prestupnyRok")

# Přidejte zdrojový kód ke spustitelnému souboru tohoto projektu.
add_executable (prestupnyRok "prestupnyRok.cpp" "prestupnyRok.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET prestupnyRok PROPERTY CXX_STANDARD 20)
endif()

# TODO: V případě potřeby přidejte testy a cíle instalace.
