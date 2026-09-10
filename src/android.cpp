#if defined(__ANDROID__)
#include <dlfcn.h>

using eglSwapInterval_t = int (*)(void*, int);

extern "C" int eglSwapInterval(void* display, int interval) {
    static auto original = reinterpret_cast<eglSwapInterval_t>(dlsym(RTLD_NEXT, "eglSwapInterval"));
    if (original) {
        return original(display, 0);
    }
    return 0;
}
#endif
