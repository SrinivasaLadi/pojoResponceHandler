//
//  SMACXProfile.h
//  SMACX
//
//  Created by Paradigm on 16/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//

#import "SMACX.h"

/*!
 @class SMACXProfile
 
 @abstract Represents an class to provide SMACXUser details
 * id,
 * name,
 * location,
 * picture_url,
 * social id
 
 */

@interface SMACXProfile : NSObject

/*!
 @property
 @abstract Typed access to the user's social id.
 */

@property (nonatomic, strong) NSString *uid;

/*!
 @property
 @abstract Typed access to the user's SMACX id.
 */

@property (nonatomic, strong) NSString *profile_id;

/*!
 @property
 @abstract Typed access to the user's location.
 */


@property (nonatomic, strong) NSString *profile_location;

/*!
 @property
 @abstract Typed access to the user's profile pic url.
 */


@property (nonatomic, strong) NSString *profile_url;

/*!
 @property
 @abstract Typed access to the user's name.
 */


@property (nonatomic, strong) NSString *profile_name;

/*!
 @property
 @abstract Typed access to the user's email.
 */


@property (nonatomic, strong) NSString *profile_email;

@end
