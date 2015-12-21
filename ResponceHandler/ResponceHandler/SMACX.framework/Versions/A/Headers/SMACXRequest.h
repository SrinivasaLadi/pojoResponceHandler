//
//  SMACXRequest.h
//  SMACX
//
//  Created by Paradigm on 16/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//

#import "SMACX.h"

/*!
 @class SMACXRequest
 
 @abstract Represents an class to create a
                    service request based on requirement
 
 */

@interface SMACXRequest : NSMutableURLRequest

/*!
 @method
 
 @abstract  Create get method for request
 
 @param urlString is request url for server connection

 */

-(void)setGetMethodwithURL:(NSString*)urlString;

/*!
 @method
 
 @abstract  Create get method for request
 
 @param urlString is request url for server connection
                contentType is the mention type except "application/json"
 
 */

-(void)setPostMethodWithURL:(NSString*)urlString andContentType:(NSString*)contentType;

/*!
 @method
 
 @abstract  Create post method for request
 
 @param urlString is request url for server connection
                 param's is form fields for server connection
 
 */

-(void)setPostMethodWithDict:(NSDictionary*)dictParams andURL:(NSString*)urlString;

@end
