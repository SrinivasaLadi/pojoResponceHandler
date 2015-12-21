//
//  MTMeasurements.h
//
//  Created by Paradigm Creatives on 12/2/15
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MTTop, MTBottom;

@interface MTMeasurements : NSObject <NSCoding, NSCopying>

@property (nonatomic, assign) double size;
@property (nonatomic, strong) NSString *gender;
@property (nonatomic, strong) NSString *internalBaseClassIdentifier;
@property (nonatomic, strong) MTTop *top;
@property (nonatomic, strong) MTBottom *bottom;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
