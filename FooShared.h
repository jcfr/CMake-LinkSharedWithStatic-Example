
#ifndef FOO_SHARED_H
#define FOO_SHARED_H

#ifdef _WIN32
# ifdef FooShared_EXPORTS
#  define FUNC_EXPORT int __declspec(dllexport) sumFooShared(int a, int b);
# else
#  define FUNC_EXPORT int __declspec(dllimport) sumFooShared(int a, int b);
# endif
#else
# define FUNC_EXPORT
#endif

FUNC_EXPORT int sumFooShared(int a, int b);

#endif
