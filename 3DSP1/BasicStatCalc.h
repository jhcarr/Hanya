//
//  BasicStatCalc.h
//  3DSP1
//
//  Created by JC_DevKid on 4/20/13.
//
//

#import <Foundation/Foundation.h>

@interface BasicStatCalc : NSObject

- (BasicStatCalc *) BasicStatCalc: (NSString *) givenName;
- (void) dupdate: (double)newDatum;
- (void) fupdate: (float)newDatum;
- (NSString *) dToString;
- (NSString *) fToString;

@end
