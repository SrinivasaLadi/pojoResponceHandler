//
//  MTSerialization.h
//  ResponceHandler
//
//  Created by Srinivas on 11/26/15.
//  Copyright © 2015 mtuity. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MTSerialization : NSJSONSerialization

+ (id)JSONObjectWithData:(NSData *)data;
+(NSString *)JSONStringWithDictinary:(NSDictionary *)dict;
@end
