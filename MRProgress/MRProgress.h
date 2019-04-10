//
//  MRProgress.h
//  MRProgress
//
//  Created by Henrique Gouveia on 10/04/2019.
//  Copyright © 2019 Marius Rackwitz. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for MRProgress.
FOUNDATION_EXPORT double MRProgressVersionNumber;

//! Project version string for MRProgress.
FOUNDATION_EXPORT const unsigned char MRProgressVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MRProgress/PublicHeader.h>

#if __has_include(<MRProgress/MRActivityIndicatorView.h>)
#import <MRProgress/MRActivityIndicatorView.h>
#endif

#if __has_include(<MRProgress/MRBlurView.h>)
#import <MRProgress/MRBlurView.h>
#import <MRProgress/UIImage+MRImageEffects.h>
#endif

#if __has_include(<MRProgress/MRCircularProgressView.h>)
#import <MRProgress/MRCircularProgressView.h>
#endif

#if __has_include(<MRProgress/MRIconView.h>)
#import <MRProgress/MRIconView.h>
#endif

#if __has_include(<MRProgress/MRMessageInterceptor.h>)
#import <MRProgress/MRMessageInterceptor.h>
#endif

#if __has_include(<MRProgress/MRNavigationBarProgressView.h>)
#import <MRProgress/MRNavigationBarProgressView.h>
#endif

#if __has_include(<MRProgress/MRProgressOverlayView.h>)
#import <MRProgress/MRProgressOverlayView.h>
#endif

#if __has_include(<MRProgress/MRWeakProxy.h>)
#import <MRProgress/MRWeakProxy.h>
#endif
