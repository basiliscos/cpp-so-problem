#pragma once

#if defined( _MSC_VER )

#define MY_B_EXPORT __declspec(dllexport)
#define MY_B_IMPORT __declspec(dllimport)

#else

#define MY_B_EXPORT __attribute__ ((visibility ("default")))
#define MY_B_IMPORT __attribute__ ((visibility ("default")))

#endif /* _MSC_VER */

#if defined(USING_LIB_A)
#define MY_B_FN MY_B_IMPORT
#else
#define MY_B_FN MY_B_EXPORT
#endif

MY_B_FN void fn_b();
