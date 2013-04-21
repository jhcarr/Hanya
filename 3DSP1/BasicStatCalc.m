//
//  BasicStatCalc.m
//  3DSP1
//
//  Created by JC_DevKid on 4/20/13.
//
//

#import "BasicStatCalc.h"

@implementation BasicStatCalc

NSString * dataName;
int datumCount = 0;
double dminVal, dmaxVal, davgVal, dsumTotal;
float fminVal, fmaxVal, favgVal, fsumTotal;

- (BasicStatCalc *) BasicStatCalc: (NSString *) givenName
{
    dminVal = dmaxVal = davgVal = dsumTotal = 0.0;
    fminVal = fmaxVal = favgVal = fsumTotal = 0.0f;
    dataName = givenName;
    return self;
}

- (void) dupdate: (double)newDatum
{
    datumCount++;
    if (newDatum < dminVal) dminVal = newDatum;
    if (newDatum > dmaxVal) dmaxVal = newDatum;
    dsumTotal += newDatum;
    davgVal = dsumTotal/datumCount;
}

- (void) fupdate: (float)newDatum
{
    datumCount++;
    if (newDatum < fminVal) fminVal = newDatum;
    if (newDatum > fmaxVal) fmaxVal = newDatum;
    fsumTotal += newDatum;
    favgVal = fsumTotal/datumCount;
}

- (NSString *) dToString
{
    NSString * min = [[NSString alloc] initWithFormat: @" min: %3.6f ", dminVal ];
    NSString * max = [[NSString alloc] initWithFormat: @" max: %3.6f ", dmaxVal ];
    NSString * avg = [[NSString alloc] initWithFormat: @" avg: %3.6f ", davgVal ];
    
    min = [dataName stringByAppendingString:min];
    max = [dataName stringByAppendingString:max];
    avg = [dataName stringByAppendingString:avg];
    
    return [min stringByAppendingString: [max stringByAppendingString: avg] ];
}

- (NSString *) fToString
{
    NSString * min = [[NSString alloc] initWithFormat: @" min: %3.6f ", fminVal ];
    NSString * max = [[NSString alloc] initWithFormat: @" max: %3.6f ", fmaxVal ];
    NSString * avg = [[NSString alloc] initWithFormat: @" avg: %3.6f ", favgVal ];
    
    min = [dataName stringByAppendingString:min];
    max = [dataName stringByAppendingString:max];
    avg = [dataName stringByAppendingString:avg];
    
    return [min stringByAppendingString: [max stringByAppendingString: avg] ];
}

@end
