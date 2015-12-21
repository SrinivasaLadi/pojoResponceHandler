//
//  SMACXCoreStream.h
//  SMACX
//
//  Created by Paradigm on 20/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//

#import "SMACX.h"

@class SMACXConnection;

/*!
 @class SMACXCoreStream
 
 @abstract Represents an class to do SMACXCoreStream core funtionalities like
 * Get User Stream,
 * Upload asset,
 * Upload Doodle,
 
 */

@interface SMACXCoreStream : NSObject

/*! @abstract urlConnection is create the connection
 in-between app and server to get the requested data
 */

@property (nonatomic, strong) SMACXConnection *urlConnection;

/*!
 @method
 
 @abstract  returns the stream for requested user
 
 @param params has mulitple key value pairs
                userid(*) for to whom you need stream
                label for different types of assets
                (you can add fileds to params if any more)
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getstreamusingparameters:(NSMutableDictionary*)params withblock:(void(^)(NSData *data, NSURLResponse *response,NSError *error))block;


/*!
 @method
 
 @abstract  upload asset based on the label type
 
 @param params has mulitple key value pairs
                image(*) for content of asset
                description(*) for asset description
                label(*) it mentions type of asset
                (you can add fileds to params if any more)
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.

 */

-(void)uploadasset:(UIImage*)asset withparams:(NSMutableDictionary*)params withblock:(void(^)(NSData *data, NSURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  upload asset based on the label type
 
 @param params has mulitple key value pairs
                doodle_path(*) for get doodle from file path
                description(*) for asset description
                (you can add fileds to params if any more)
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */
-(void)uploaddoodlewithparams:(NSMutableDictionary*)params withblock:(void(^)(NSData *data, NSURLResponse *response,NSError *error))block;


@end
