//
//  ViewController.h
//  3DSP1
//
//  Created by Justin Carr on 7/30/12.
//  Copyright (c) 2012 Justin Carr. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import <CoreMotion/CoreMotion.h>

@interface ViewController : GLKViewController <UIAccelerometerDelegate>

{
    UILabel *x;
    UILabel *y;
    UILabel *z;
    UILabel *logOutput;
    UIButton *resetButton;
    UISegmentedControl *modeSwitch;
    UILabel *sensorUIHeader1;
    UILabel *sensorUIHeader2;
    UIStepper *sensorFrequencyStepper;
    UILabel *sensorFrequencyLabel;
    UILabel *resetSensorFreqTo;
    UILabel *filterUIHeader;
    UIStepper *filterValStepper;
    UILabel *filterValLabel;
    UISwitch *UICompsToggle;
}
@property (nonatomic, strong) IBOutlet UILabel *x;
@property (nonatomic, strong) IBOutlet UILabel *y;
@property (nonatomic, strong) IBOutlet UILabel *z;
@property (nonatomic, strong) IBOutlet UILabel *logOutput;
@property (nonatomic, strong) IBOutlet UIButton *resetButton;
@property (nonatomic, strong) IBOutlet UISegmentedControl *modeSwitch;
@property (nonatomic, strong) IBOutlet UILabel *sensorUIHeader1;
@property (nonatomic, strong) IBOutlet UILabel *sensorUIHeader2;
@property (nonatomic, strong) IBOutlet UIStepper *sensorFrequencyStepper;
@property (nonatomic, strong) IBOutlet UILabel *sensorFrequencyLabel;
@property (nonatomic, strong) IBOutlet UILabel *resetSensorFreqTo;
@property (nonatomic, strong) IBOutlet UILabel *filterUIHeader;
@property (nonatomic, strong) IBOutlet UIStepper *filterValStepper;
@property (nonatomic, strong) IBOutlet UILabel *filterValLabel;
@property (nonatomic, strong) IBOutlet UISwitch *UICompsToggle;

@end
