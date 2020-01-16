#ifndef FILTER_H
#define FILTER_H

#ifndef _WIN32
#pragma GCC visibility push(hidden)
#endif

#ifdef LUASOCKET_ENABLE_WHITELIST
int filter_isacceptablehost(const char *node, const char *service);
#else
static inline int filter_isacceptablehost(const char *node, const char *service) {
    (void)node;
    (void)service;
    return 1;
}
#endif

#ifndef _WIN32
#pragma GCC visibility pop
#endif

#endif /* FILTER_H */
