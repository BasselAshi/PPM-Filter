@echo off
gcc -Wall -std=c99 -o image_editor image_editor.c image_processing.c
image_editor 1 < ppm/tinypix.ppm > output.ppm
echo.
pause
del image_editor.exe