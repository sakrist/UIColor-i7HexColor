//
//  UIColor+i7HexColor.h
//  
//
//  Created by Jonas Schnelli on 01.07.10.
//  Modified by Vladimir Boichentsov on 23.10.11.
//  Copyright 2010 include7 AG. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface UIColor (i7HexColor)

- (NSString *) hexString;

+ (UIColor *) colorWithHex:(int)color;
+ (UIColor *) colorWithHexRed:(int)red green:(char)green blue:(char)blue alpha:(char)alpha;

+ (UIColor *) colorWithHexString:(NSString *)hexString;
+ (UIColor *) colorWithIntegerRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
@end
