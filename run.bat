@echo off
gcc -Wall -std=c99 -o image_editor image_editor.c image_processing.c
image_editor 3 < hpyramids-insta.ppm > hpyramids-instagram.ppm
echo.
pause
del image_editor.exe