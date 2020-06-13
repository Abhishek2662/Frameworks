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

#import "ConnectionManager.h"
#import "Core.h"
#import "CoreDummy.h"
#import "CoreDummy1.h"
#import "CoreShared.h"

FOUNDATION_EXPORT double CoreVersionNumber;
FOUNDATION_EXPORT const unsigned char CoreVersionString[];

