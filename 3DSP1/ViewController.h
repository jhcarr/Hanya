//
//  ViewController.h
//  3DSP1
//
//  Created by carrju on 7/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface ViewController : GLKViewController <UIAccelerometerDelegate>

{
    UILabel *x;
    UILabel *y;
    UILabel *z;
}
@property (nonatomic, retain) IBOutlet UILabel *x;
@property (nonatomic, retain) IBOutlet UILabel *y;
@property (nonatomic, retain) IBOutlet UILabel *z;

@end
