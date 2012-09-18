//
//  AppDelegate.h
//  3DSP1
//
//  Created by kuwaharg on 7/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    CMMotionManager * motionManager;
}

@property (readonly) CMMotionManager * motionManager_appDelegate;

@property (strong, nonatomic) UIWindow *window;

@end
