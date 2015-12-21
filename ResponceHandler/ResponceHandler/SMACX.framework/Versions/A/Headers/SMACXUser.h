//
//  SMACXUser.h
//  SMACX
//
//  Created by Paradigm on 15/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//

#import "SMACX.h"

@class SMACXProfile;

/*!
 @class SMACXUser
 
 @abstract Represents an class to maintain
 user details to user whole over the application
 
 */

@interface SMACXUser : NSObject

/*!
 @method
 
 @abstract  do the action for logout

 @discussion
 At the time of user logout you must call
 this method to clear all user data from 
 SMACX.
 
 */

+(void)logout:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @property
 @abstract Typed access to the user's SMACX id.
 */

+(NSString*)uid;

/*!
 @property
 @abstract Typed access to the user's name.
 */

+(NSString*)name;

/*!
 @property
 @abstract Typed access to the user's email.
 */

+(NSString*)email;

/*!
 @property
 @abstract Typed access to the user's photo url.
 */

+(NSString*)photo_url;

/*!
 @property
 @abstract Typed access to the user's location.
 */

+(NSString*)location;

/*!
 @property
 @abstract Typed access to the user's whole profile.
 */

+(SMACXProfile*)myProfile;

@end
