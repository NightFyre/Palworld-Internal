#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>

#ifndef _DEBUG
#define _DEBUG false
#else
#error "ERROR: DEBUG BUILDS NOT REQUIRED"
#endif

#ifndef XBOX_VER
#define XBOX_VER true
#endif

constexpr bool isDebug = false;
constexpr bool isXbox = XBOX_VER;