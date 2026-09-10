#include <Geode/Geode.hpp>

using namespace geode::prelude;

#if defined(__APPLE__)
extern "C" void NoVsync_iOS();
#endif

$execute {
#if defined(__APPLE__)
    NoVsync_iOS();
#endif
}
