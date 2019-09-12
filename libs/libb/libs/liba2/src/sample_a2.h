#pragma once

#if defined( _MSC_VER )

#define MY_A2_EXPORT __declspec(dllexport)
#define MY_A2_IMPORT __declspec(dllimport)

#else

#define MY_A2_EXPORT __attribute__ ((visibility ("default")))
#define MY_A2_IMPORT __attribute__ ((visibility ("default")))

#endif /* _MSC_VER */

#if defined(USING_LIB_A2)
#define MY_A2_FN MY_A2_IMPORT
#else
#define MY_A2_FN MY_A2_EXPORT
#endif

MY_A2_FN void fn_a2();
