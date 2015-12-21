//
//  SMACXConnection.h
//  SMACX
//
//  Created by Paradigm on 16/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//

#import "SMACX.h"

@class SMACXRequest;
/*!
 @class SMACXConnection
 
 @abstract Represents an class to initiate the server requests
 sending back the responses using blocks.
 
 */
@interface SMACXConnection : NSObject

/*! @abstract sessionDataTask is create the data session
    to get data from server
 */


/*!
@method 
 
@abstract  Start urlrequest with SMACXConnection using blocks
 
 @param urlRequest is configureble request class of SMACXRequest
 
 */

+(void)startwithrequest:(SMACXRequest*)urlRequest usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

-(void)startwithrequest:(SMACXRequest*)urlRequest usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  Cancel service request with allocated object
 
 */

+(void)cancelrequest;
-(void)cancelrequest;

/*!
 @method
 
 @abstract  Cancel all the requests under SMACXConnection
 
 */

+(void)cancelAllrequest;
-(void)cancelAllrequest;
@end
