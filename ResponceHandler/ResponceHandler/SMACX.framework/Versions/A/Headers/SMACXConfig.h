//
//  SMACXConfig.h
//  SMACX
//
//  Created by Paradigm on 16/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//

#import "SMACX.h"

/*! @abstract Access base url that was assigned to SMACX */
static NSString *baseURl;

/*!
 @class SMACXConfig
 
 @abstract Represents an class to configure the parameters such as base url
 other SMACX related values you can store and get from SMACXConfig class.

 */

@interface SMACXConfig : NSObject


/*!
 @method
 
 @abstract Configure base url for SMACX framework.
 
 @param urlString is value for base url for SMACX framework.
 */

+(void)setbaseURL:(NSString*)urlString;

/*!
 @method
 
 @abstract Configure push device token for SMACX framework.
 
 @param deviceToken is value for push device token for SMACX framework.
 */

+(void)setdevicetoken:(NSString*)deviceToken;


/*!
 @method
 
 @abstract returns the base url from SMACX framework.
 */

+(NSString*)baseURL;

/*!
 @method
 
 @abstract returns the devicetoken from SMACX framework.
 */

+(NSString*)devicetoken;

@end
