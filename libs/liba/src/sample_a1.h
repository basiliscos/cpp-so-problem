#pragma once

#if defined( _MSC_VER )

#define MY_A1_EXPORT __declspec(dllexport)
#define MY_A1_IMPORT __declspec(dllimport)

#else

#define MY_A1_EXPORT __attribute__ ((visibility ("default")))
#define MY_A1_IMPORT __attribute__ ((visibility ("default")))

#endif /* _MSC_VER */

#if defined(USING_LIB_A)
#define MY_A1_FN MY_A1_IMPORT
#else
#define MY_A1_FN MY_A1_EXPORT
#endif

MY_A1_FN void fn_a1();
