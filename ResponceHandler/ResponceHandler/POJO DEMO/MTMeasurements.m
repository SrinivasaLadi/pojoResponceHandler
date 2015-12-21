//
//  MTMeasurements.m
//
//  Created by Paradigm Creatives on 12/2/15
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import "MTMeasurements.h"
#import "MTTop.h"
#import "MTBottom.h"


NSString *const kMTMeasurementsSize = @"size";
NSString *const kMTMeasurementsGender = @"gender";
NSString *const kMTMeasurementsId = @"_id";
NSString *const kMTMeasurementsTop = @"top";
NSString *const kMTMeasurementsBottom = @"bottom";


@interface MTMeasurements ()

- (id)objectOrNilForKey:(id)aKey fromDictionary:(NSDictionary *)dict;

@end

@implementation MTMeasurements

@synthesize size = _size;
@synthesize gender = _gender;
@synthesize internalBaseClassIdentifier = _internalBaseClassIdentifier;
@synthesize top = _top;
@synthesize bottom = _bottom;


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
            self.size = [[self objectOrNilForKey:kMTMeasurementsSize fromDictionary:dict] doubleValue];
            self.gender = [self objectOrNilForKey:kMTMeasurementsGender fromDictionary:dict];
            self.internalBaseClassIdentifier = [self objectOrNilForKey:kMTMeasurementsId fromDictionary:dict];
            self.top = [MTTop modelObjectWithDictionary:[dict objectForKey:kMTMeasurementsTop]];
            self.bottom = [MTBottom modelObjectWithDictionary:[dict objectForKey:kMTMeasurementsBottom]];

    }
    
    return self;
    
}

- (NSDictionary *)dictionaryRepresentation
{
    NSMutableDictionary *mutableDict = [NSMutableDictionary dictionary];
    [mutableDict setValue:[NSNumber numberWithDouble:self.size] forKey:kMTMeasurementsSize];
    [mutableDict setValue:self.gender forKey:kMTMeasurementsGender];
    [mutableDict setValue:self.internalBaseClassIdentifier forKey:kMTMeasurementsId];
    [mutableDict setValue:[self.top dictionaryRepresentation] forKey:kMTMeasurementsTop];
    [mutableDict setValue:[self.bottom dictionaryRepresentation] forKey:kMTMeasurementsBottom];

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

    self.size = [aDecoder decodeDoubleForKey:kMTMeasurementsSize];
    self.gender = [aDecoder decodeObjectForKey:kMTMeasurementsGender];
    self.internalBaseClassIdentifier = [aDecoder decodeObjectForKey:kMTMeasurementsId];
    self.top = [aDecoder decodeObjectForKey:kMTMeasurementsTop];
    self.bottom = [aDecoder decodeObjectForKey:kMTMeasurementsBottom];
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{

    [aCoder encodeDouble:_size forKey:kMTMeasurementsSize];
    [aCoder encodeObject:_gender forKey:kMTMeasurementsGender];
    [aCoder encodeObject:_internalBaseClassIdentifier forKey:kMTMeasurementsId];
    [aCoder encodeObject:_top forKey:kMTMeasurementsTop];
    [aCoder encodeObject:_bottom forKey:kMTMeasurementsBottom];
}

- (id)copyWithZone:(NSZone *)zone
{
    MTMeasurements *copy = [[MTMeasurements alloc] init];
    
    if (copy) {

        copy.size = self.size;
        copy.gender = [self.gender copyWithZone:zone];
        copy.internalBaseClassIdentifier = [self.internalBaseClassIdentifier copyWithZone:zone];
        copy.top = [self.top copyWithZone:zone];
        copy.bottom = [self.bottom copyWithZone:zone];
    }
    
    return copy;
}


@end
