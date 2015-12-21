//
//  SMACXLoginKit.h
//  SMACX
//
//  Created by Paradigm on 14/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//


#import "SMACX.h"

@class SMACXProfile;

/*!
 @typedef SMACXLoginBlock
 
 @abstract
 A block that is passed to performAppLogin to register for a callback with the results
 of that login
 
 @discussion
 Pass a block of this type when calling performAppLogin.  This will be called on the UI
 thread, once the performAppLogin completes.
 
 */

typedef void(^SMACXLoginBlock)(SMACXProfile *currentProfile , NSHTTPURLResponse *response, NSError *err);

/*! @abstract LOGIN_TYPE to differenciate the
 different types of login types under SMACX
 */

typedef enum : NSUInteger {
    LOGIN_TYPE_FACEBOOK,
    LOGIN_TYPE_GOOGLE,
    LOGIN_TYPE_TWITTER,
} LOGIN_TYPE;


/*!
 @class SMACXLogin
 
 @abstract Represents an class to do login funtionalities with
 * Facebook,
 * Google,
 * Twitter,
 * Email,
 
 */

@interface SMACXLogin : NSObject 

/*!
 @method
 
 @abstract  start the SMACX loign
 
 @param loginType is enum for multiple logins
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 */

-(void)start:(LOGIN_TYPE)loginType withdelegate:(id)delegate usingblock:(SMACXLoginBlock)block;


/*!
 @method
 
 @abstract  start the SMACX loign
 
 @param loginType is enum for multiple logins
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 */

-(void)signinwithemail:(NSString*)email andpassword:(NSString*)password usingblock:(void(^)(SMACXProfile *currentProfile ,NSData *data, NSHTTPURLResponse *response, NSError *err))block;

/*!
 @method
 
 @abstract  reset the login password
 
 @param email(*) key for user 
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 */

-(void)resetpasswordforemail:(NSString*)email usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;
@end


