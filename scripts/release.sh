#!/bin/sh

echo "Readying..."
QT_HOME = D:/Qt/5.14.2/5.14.2/mingw73_64

echo "Mocing..."
echo "/-qglcraft.h"
moc include/qglcraft.h -o build/moc_qglcraft.cpp

echo "Making"
echo "/-main.cpp"
g++ src/main.cpp -c -I include -I ${QT_HOME}/include -Wall -o build/main.o
echo "/-qglcraft.cpp"
g++ src/qglcraft.cpp -c -I include -I ${QT_HOME}/include -Wall -o build/qglcraft.o
echo "/-Qglcraft.exe"
g++ build/main.o build/qglcraft.o build/moc_qglcraft.cpp ${QT_HOME}/lib/*.a -I ${QT_HOME}/include -Wall -Wl,-subsystem,windows -o bin/Qglcraft.exe
windeployqt bin/Qglcraft.exe