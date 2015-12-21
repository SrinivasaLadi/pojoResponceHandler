//
//  MTBottom.m
//
//  Created by Paradigm Creatives on 12/2/15
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import "MTBottom.h"


NSString *const kMTBottomAnkleLoose = @"ankle_loose";
NSString *const kMTBottomKneeLoose = @"knee_loose";
NSString *const kMTBottomAroundHips = @"around_hips";
NSString *const kMTBottomKneeLength = @"knee_length";
NSString *const kMTBottomThigh = @"thigh";


@interface MTBottom ()

- (id)objectOrNilForKey:(id)aKey fromDictionary:(NSDictionary *)dict;

@end

@implementation MTBottom

@synthesize ankleLoose = _ankleLoose;
@synthesize kneeLoose = _kneeLoose;
@synthesize aroundHips = _aroundHips;
@synthesize kneeLength = _kneeLength;
@synthesize thigh = _thigh;


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
            self.ankleLoose = [[self objectOrNilForKey:kMTBottomAnkleLoose fromDictionary:dict] doubleValue];
            self.kneeLoose = [[self objectOrNilForKey:kMTBottomKneeLoose fromDictionary:dict] doubleValue];
            self.aroundHips = [[self objectOrNilForKey:kMTBottomAroundHips fromDictionary:dict] doubleValue];
            self.kneeLength = [[self objectOrNilForKey:kMTBottomKneeLength fromDictionary:dict] doubleValue];
            self.thigh = [[self objectOrNilForKey:kMTBottomThigh fromDictionary:dict] doubleValue];

    }
    
    return self;
    
}

- (NSDictionary *)dictionaryRepresentation
{
    NSMutableDictionary *mutableDict = [NSMutableDictionary dictionary];
    [mutableDict setValue:[NSNumber numberWithDouble:self.ankleLoose] forKey:kMTBottomAnkleLoose];
    [mutableDict setValue:[NSNumber numberWithDouble:self.kneeLoose] forKey:kMTBottomKneeLoose];
    [mutableDict setValue:[NSNumber numberWithDouble:self.aroundHips] forKey:kMTBottomAroundHips];
    [mutableDict setValue:[NSNumber numberWithDouble:self.kneeLength] forKey:kMTBottomKneeLength];
    [mutableDict setValue:[NSNumber numberWithDouble:self.thigh] forKey:kMTBottomThigh];

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

    self.ankleLoose = [aDecoder decodeDoubleForKey:kMTBottomAnkleLoose];
    self.kneeLoose = [aDecoder decodeDoubleForKey:kMTBottomKneeLoose];
    self.aroundHips = [aDecoder decodeDoubleForKey:kMTBottomAroundHips];
    self.kneeLength = [aDecoder decodeDoubleForKey:kMTBottomKneeLength];
    self.thigh = [aDecoder decodeDoubleForKey:kMTBottomThigh];
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{

    [aCoder encodeDouble:_ankleLoose forKey:kMTBottomAnkleLoose];
    [aCoder encodeDouble:_kneeLoose forKey:kMTBottomKneeLoose];
    [aCoder encodeDouble:_aroundHips forKey:kMTBottomAroundHips];
    [aCoder encodeDouble:_kneeLength forKey:kMTBottomKneeLength];
    [aCoder encodeDouble:_thigh forKey:kMTBottomThigh];
}

- (id)copyWithZone:(NSZone *)zone
{
    MTBottom *copy = [[MTBottom alloc] init];
    
    if (copy) {

        copy.ankleLoose = self.ankleLoose;
        copy.kneeLoose = self.kneeLoose;
        copy.aroundHips = self.aroundHips;
        copy.kneeLength = self.kneeLength;
        copy.thigh = self.thigh;
    }
    
    return copy;
}


@end
