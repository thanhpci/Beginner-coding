#ifndef SDL_UTLILS__H
#define SDL_UTLILS__H


#include <iostream>
#include <SDL.h>

using namespace std;

void initSDL(SDL_Window* &window, SDL_Renderer* &renderer,
             int SCREEN_WIDTH, int SCREEN_HEIGHT, const string &WINDOW_TITLE);     //Khởi tạo cửa sổ

void logSDLError(std::ostream& os, const std::string &msg, bool fatal = false);     //Hàm báo lỗi

void quitSDL(SDL_Window* window, SDL_Renderer* renderer);       //Giải phóng SDL

void waitUntilKeyPressed();     //Đợi đến khi bấm 1 phím bất kì để thoát


#endif
