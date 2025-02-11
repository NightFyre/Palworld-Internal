#pragma once
#include <Windows.h>
#include <iostream>
#include <exMemory\exMemory.hpp>
#include <filesystem>

#ifndef _DEBUG
#define _DEBUG false
#else
#error "ERROR: DEBUG BUILDS NOT REQUIRED"
#endif



#ifndef XBOX_VER
#define XBOX_VER false
#endif

#if XBOX_VER
#pragma message("ATTENTION: XBOX MODULE NOT YET IMPLEMENTED")
#endif
constexpr bool isDebug = _DEBUG;
constexpr bool isXbox = XBOX_VER;