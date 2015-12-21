//
//  SMACXSDK.h
//  SMACX
//
//  Created by Paradigm on 16/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//

#import "SMACX.h"

/*!
 @class SMACXSDK
 
 @abstract Represents an class to handle 
                    application level configurations
 
 */

@interface SMACXSDK : NSObject

/*!
 @method
 
 @abstract  returns the application open handle url
 
 */

+(BOOL)application:(UIApplication *)application
           openURL:(NSURL *)url
 sourceApplication:(NSString *)sourceApplication
        annotation:(id)annotation;

/*!
 @method
 
 @abstract  initiate to active SMACX framework
 
 @param urlString is request url for server connection
 contentType is the mention type except "application/json"
 
 */

+ (void)activateApp;

/*!
 @method
 
 @abstract  Close the login session
 
  */

+ (void)closeSession;

@end
