//
//  MTTop.m
//
//  Created by Paradigm Creatives on 12/2/15
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import "MTTop.h"


NSString *const kMTTopShoulder = @"shoulder";
NSString *const kMTTopArmHole = @"arm_hole";
NSString *const kMTTopChestSize = @"chest_size";
NSString *const kMTTopSleeveLength = @"sleeve_length";
NSString *const kMTTopWaist = @"waist";


@interface MTTop ()

- (id)objectOrNilForKey:(id)aKey fromDictionary:(NSDictionary *)dict;

@end

@implementation MTTop

@synthesize shoulder = _shoulder;
@synthesize armHole = _armHole;
@synthesize chestSize = _chestSize;
@synthesize sleeveLength = _sleeveLength;
@synthesize waist = _waist;


+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict
{
    return [[self alloc] initWithDictionary:dict];
}

- (instancetype)initWithDictionary:(NSDictionary *)dict
{
    self = [super init];
    
    // This check serves to make sure that a non-NSDictionary object
    // passed into the model class doesn't break the parsing.
    if(self && [dict isKindOfClass:[NSDictionary class]]) {
            self.shoulder = [[self objectOrNilForKey:kMTTopShoulder fromDictionary:dict] doubleValue];
            self.armHole = [[self objectOrNilForKey:kMTTopArmHole fromDictionary:dict] doubleValue];
            self.chestSize = [[self objectOrNilForKey:kMTTopChestSize fromDictionary:dict] doubleValue];
            self.sleeveLength = [[self objectOrNilForKey:kMTTopSleeveLength fromDictionary:dict] doubleValue];
            self.waist = [[self objectOrNilForKey:kMTTopWaist fromDictionary:dict] doubleValue];

    }
    
    return self;
    
}

- (NSDictionary *)dictionaryRepresentation
{
    NSMutableDictionary *mutableDict = [NSMutableDictionary dictionary];
    [mutableDict setValue:[NSNumber numberWithDouble:self.shoulder] forKey:kMTTopShoulder];
    [mutableDict setValue:[NSNumber numberWithDouble:self.armHole] forKey:kMTTopArmHole];
    [mutableDict setValue:[NSNumber numberWithDouble:self.chestSize] forKey:kMTTopChestSize];
    [mutableDict setValue:[NSNumber numberWithDouble:self.sleeveLength] forKey:kMTTopSleeveLength];
    [mutableDict setValue:[NSNumber numberWithDouble:self.waist] forKey:kMTTopWaist];

    return [NSDictionary dictionaryWithDictionary:mutableDict];
}

- (NSString *)description 
{
    return [NSString stringWithFormat:@"%@", [self dictionaryRepresentation]];
}

#pragma mark - Helper Method
- (id)objectOrNilForKey:(id)aKey fromDictionary:(NSDictionary *)dict
{
    id object = [dict objectForKey:aKey];
    return [object isEqual:[NSNull null]] ? nil : object;
}


#pragma mark - NSCoding Methods

- (id)initWithCoder:(NSCoder *)aDecoder
{
    self = [super init];

    self.shoulder = [aDecoder decodeDoubleForKey:kMTTopShoulder];
    self.armHole = [aDecoder decodeDoubleForKey:kMTTopArmHole];
    self.chestSize = [aDecoder decodeDoubleForKey:kMTTopChestSize];
    self.sleeveLength = [aDecoder decodeDoubleForKey:kMTTopSleeveLength];
    self.waist = [aDecoder decodeDoubleForKey:kMTTopWaist];
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{

    [aCoder encodeDouble:_shoulder forKey:kMTTopShoulder];
    [aCoder encodeDouble:_armHole forKey:kMTTopArmHole];
    [aCoder encodeDouble:_chestSize forKey:kMTTopChestSize];
    [aCoder encodeDouble:_sleeveLength forKey:kMTTopSleeveLength];
    [aCoder encodeDouble:_waist forKey:kMTTopWaist];
}

- (id)copyWithZone:(NSZone *)zone
{
    MTTop *copy = [[MTTop alloc] init];
    
    if (copy) {

        copy.shoulder = self.shoulder;
        copy.armHole = self.armHole;
        copy.chestSize = self.chestSize;
        copy.sleeveLength = self.sleeveLength;
        copy.waist = self.waist;
    }
    
    return copy;
}


@end
