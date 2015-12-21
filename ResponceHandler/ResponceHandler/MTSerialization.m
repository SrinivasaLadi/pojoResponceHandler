//
//  MTSerialization.m
//  ResponceHandler
//
//  Created by Srinivas on 11/26/15.
//  Copyright © 2015 mtuity. All rights reserved.
//

#import "MTSerialization.h"

@implementation MTSerialization

/*!
 * @discussion Its converts data to respctive json object
 * @param data its represents which data needs to converted
 * @return it will return convered json object if data is proper else wil return nil
 */
+ (id)JSONObjectWithData:(NSData *)data {
    NSError *error;
    return [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error:&error];
}

+ (NSString *)JSONStringWithDictinary:(NSDictionary *)dict {
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dict options:0 error:&error];
    if (!jsonData) {
        return nil;
    } else {
        NSString *JSONString = [[NSString alloc] initWithBytes:[jsonData bytes] length:[jsonData length] encoding:NSUTF8StringEncoding];
        return JSONString;
    }
    
    return nil;
}

@end
