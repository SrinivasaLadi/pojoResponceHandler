//
//  SMACXRegister.h
//  SocialLogin
//
//  Created by Paradigm on 30/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//

#import "SMACX.h"

@class SMACXProfile;

@interface SMACXRegister : NSObject



/*!
 @method
 
 @abstract  signup with SMACX
 
 @param email(*) and passwords(*)
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 */

-(void)signupwithname:(NSString*)name andemail:(NSString*)email andpassword:(NSString*)password andphoto:(NSString*)photo_url andgender:(NSString*)gender usingblock:(void(^)(SMACXProfile *currentProfile , NSData *data, NSHTTPURLResponse *response, NSError *err))block;

/*!
 @method
 
 @abstract  update the profile picture for SMACXUser
 
 @param image(*) for which images need to update
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)uploaduserimage:(UIImage*)image usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

@end
