#pragma once

#define XXLIB_PLATFORM_WINDOWS  1
#define XXLIB_PLATFORM_LINUX    2
#define XXLIB_PLATFORM_MACOS    3
#define XXLIB_PLATFORM_ANDROID  4
#define XXLIB_PLATFORM_IOS      5

#if defined (_WIN32)
#define XXLIB_PLATFORM_ID XXLIB_PLATFORM_WINDOWS
#elif defined (__ANDROID__)
#define XXLIB_PLATFORM_ID XXLIB_PLATFORM_ANDROID
#elif defined (__linux__)
#define XXLIB_PLATFORM_ID XXLIB_PLATFORM_LINUX
#elif defined (__MACH__)
#include <TargetConditionals.h>
#if (TARGET_OS_IPHONE == 1)
#define XXLIB_PLATFORM_ID XXLIB_PLATFORM_IOS
#else
#define XXLIB_PLATFORM_ID XXSLIB_PLATFORM_MACOS
#endif
#else
#error Platform must be defined.
#endif