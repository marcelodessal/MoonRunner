//
//  MathController.h
//  MoonRunner
//
//  Created by Marcelo Dessal on 3/6/15.
//  Copyright (c) 2015 MarceloDessal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MathController : NSObject

+ (NSString *)stringifyDistance:(float)meters;
+ (NSString *)stringifySecondCount:(int)seconds usingLongFormat:(BOOL)longFormat;
+ (NSString *)stringifyAvgPaceFromDist:(float)meters overTime:(int)seconds;

@end
