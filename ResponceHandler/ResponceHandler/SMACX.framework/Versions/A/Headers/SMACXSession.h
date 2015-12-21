//
//  SAMCXSession.h
//  SMACX
//
//  Created by Paradigm on 16/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//

#import "SMACX.h"

/*!
 @class SMACXSession
 
 @abstract Represents an class to maintain
 application session configurations
 
 */

@interface SMACXSession : NSObject

/*!
 @property
 @abstract Typed access to the user's accessToken.
 */

+(NSString*)accessToken;

/*!
 @property
 @abstract Typed access to the user's session id.
 */

+(NSString*)sessionID;

@end
