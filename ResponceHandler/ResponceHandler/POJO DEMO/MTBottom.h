//
//  MTBottom.h
//
//  Created by Paradigm Creatives on 12/2/15
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface MTBottom : NSObject <NSCoding, NSCopying>

@property (nonatomic, assign) double ankleLoose;
@property (nonatomic, assign) double kneeLoose;
@property (nonatomic, assign) double aroundHips;
@property (nonatomic, assign) double kneeLength;
@property (nonatomic, assign) double thigh;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
