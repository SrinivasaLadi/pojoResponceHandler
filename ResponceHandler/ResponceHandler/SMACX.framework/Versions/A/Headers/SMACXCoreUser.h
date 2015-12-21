//
//  SMACXCoreUser.h
//  SMACX
//
//  Created by Paradigm on 16/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//

#import "SMACX.h"

/*!
 @class SMACXCoreUser
 
 @abstract Represents an class to do SMACXUser core funtionalities like
    * Get My Profile,
    * Get My Followings,
    * Get My Followers,
    * Check User Relation,
    * Follow User,
    * Follow Multiple User,
    * UnFollow User,
    * UnFollow Multiple User,
    * Upadte Profile Picture
 
 */

@interface SMACXCoreUser : NSObject



/*!
 @method
 
 @abstract  
 returns the current SMACXUser profile using blocks
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */


-(void)getmyprofileusingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  returns profile for requested user id
 
 @param userid(*) for whom need to get followings
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getmyprofileofuser:(NSString*)userid usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;


/*!
 @method
 
 @abstract  returns following users for requested user id
 
 @param userid(*) for whom need to get followings
                 offset (*) for start count
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */


-(void)getmyfollowingsforuser:(NSString*)userid withoffset:(NSInteger)offset usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  returns follow users for requested user id
 
 @param userid(*) for whom need to get followers
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getmyfollowersforuser:(NSString*)userid withoffset:(NSInteger)offset usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  returns relation with requested user id
 
 @param userid(*) for whom need to get followers
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)checkrelationwith:(NSString*)userid usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  make follow the requested user id
 
 @param userid(*) for whom need to get followers
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)followuser:(NSString*)userid usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  make follow the multiple requested user id's
 
 @param userids(*) for whom need to get followers
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)followmultipleusers:(NSArray*)userids usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  make un-follow the requested user id
 
 @param userid(*) for whom need to get followers
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)unfollowuser:(NSString*)userid usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  make un-follow the multiple  requested user id's
 
 @param userids(*) for whom need to get followers
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)unfollowmultipleusers:(NSArray*)userids usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  update the profile picture for SMACXUser
 
 @param image(*) for which images need to update
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)updatemypicture:(UIImage*)image usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  Change password
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)changepassword:(NSString*)oldpassword withnewpassword:(NSString*)newpassword usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

#pragma mark -- Notifications

/*!
 @method
 
 @abstract  get notifications for SMACXUser
 
 @param offset(*) for start count
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getmynotificationswithoffset:(float)offset usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;
/*!
 @method
 
 @abstract  clear notifications for SMACXUser
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)clearmynotificationsusingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;


/*!
 @method
 
 @abstract  get notifications count for SMACXUser
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getmynotificationcountusingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;


/*!
 @method
 
 @abstract  get annoucement details for request id
 
 @param annoucement_id(*) for which we requested annoucement
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getannoucementwithid:(NSString*)annoucement_id usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  get notifications for SMACXUser
  
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)requestnotificationusingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract
 logout the current SMACXUser using blocks
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */


-(void)logout:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

#pragma mark -- MISC

/*!
 @method
 
 @abstract  Cancel the current request
 
 */

-(void)cancelrequest;

@end
