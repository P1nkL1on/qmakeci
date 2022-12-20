QT += core gui opengl concurrent testlib widgets
win32: QT += winextras
QT -= gui

TEMPLATE = app

QMAKE_CXXFLAGS *= -std=c++17 -Werror=return-type -O3
CONFIG += qt console warn_on depend_includepath testcase object_parallel_to_source windows
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  \
    tests_simple_math.cpp
