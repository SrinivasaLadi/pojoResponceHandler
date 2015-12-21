//
//  MTTop.h
//
//  Created by Paradigm Creatives on 12/2/15
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface MTTop : NSObject <NSCoding, NSCopying>

@property (nonatomic, assign) double shoulder;
@property (nonatomic, assign) double armHole;
@property (nonatomic, assign) double chestSize;
@property (nonatomic, assign) double sleeveLength;
@property (nonatomic, assign) double waist;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
