#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MJBaseUtils.h"
#import "MJWeakProxy.h"

FOUNDATION_EXPORT double MJBaseUtilsVersionNumber;
FOUNDATION_EXPORT const unsigned char MJBaseUtilsVersionString[];

