
#include <TargetConditionals.h>
#if TARGET_OS_IOS == 1
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif

#define IPLUG_AUVIEWCONTROLLER IPlugAUViewController_vRitmota2
#define IPLUG_AUAUDIOUNIT IPlugAUAudioUnit_vRitmota2
#import <Ritmota2AU/IPlugAUViewController.h>
#import <Ritmota2AU/IPlugAUAudioUnit.h>

//! Project version number for Ritmota2AU.
FOUNDATION_EXPORT double Ritmota2AUVersionNumber;

//! Project version string for Ritmota2AU.
FOUNDATION_EXPORT const unsigned char Ritmota2AUVersionString[];

@class IPlugAUViewController_vRitmota2;
