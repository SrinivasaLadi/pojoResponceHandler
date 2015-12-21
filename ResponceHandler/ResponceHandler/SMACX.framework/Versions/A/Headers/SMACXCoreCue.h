//
//  SMACXCoreCue.h
//  SMACX
//
//  Created by Paradigm on 22/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

/*! @abstract OPTION_TYPE to differenciate the
 options types of cues
 */

typedef enum : NSUInteger {
    SMACX_OPTION_TYPE_TEXT,
    SMACX_OPTION_TYPE_IMAGE,
} SMACX_OPTION_TYPE;

/*! @abstract CUE_TYPE to differenciate the
 different types of cues
 */

typedef enum : NSUInteger {
    SMACX_CUE_TYPE_CUE,
    SMACX_CUE_TYPE_POLL,
} SMACX_CUE_TYPE;


/*! @abstract CUE_COMMENT_TYPE to differenciate the
 different types of cues
 */

typedef enum : NSUInteger {
    SMACX_CUE_COMMENT_TYPE_TEXT,
    SMACX_CUE_COMMENT_TYPE_IMAGE,
} SMACX_CUE_COMMENT_TYPE;

/*!
 @class SMACXCoreCue
 
 @abstract Represents an class to do SMACXCoreCue core funtionalities like
 * Get User Cues,
 * Upload cues,
 
 */

@interface SMACXCoreCue : NSObject


/*!
 @method
 
 @abstract  returns the cues for requested user
 
 @param params has mulitple key value pairs
                label for different types of cues
                (you can add fileds to params if any more)
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getcuesusingparameters:(NSMutableDictionary*)params withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

#pragma mark -- get cues details

/*!
 @method
 
 @abstract  returns the cue details requested cue id
 
 @param  label for different types of cues
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getdetails:(NSString*)cue_id usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

#pragma mark -- get cues categories

/*!
 @method
 
 @abstract  returns the cues for requested user
 
 @param 
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getcategoriesusingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;


/*!
 @method
 
 @abstract  upload cue based on the label type
 
 @param params(*) has mulitple key value pairs
                cueType(*) for cue type
                optionType(*) for assets option type
                (you can add fileds to params if any more)
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)uploadpolltype:(SMACX_CUE_TYPE)cueType and:(SMACX_OPTION_TYPE)optionType withparams:(NSMutableDictionary*)params withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  like the cue
 
 @param  cue_id(*) for cue which you want to like
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

#pragma mark -- Cues actions

-(void)likecue:(NSString*)cue_id withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;


/*!
 @method
 
 @abstract  un-like the cue
 
 @param  cue_id(*) for cue which you want to un-like
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)unlikecue:(NSString*)cue_id withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;


/*!
 @method
 
 @abstract  flag the cue
 
 @param  cue_id(*) for cue which you want to flag
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)flagcue:(NSString*)cue_id withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  un-flag the cue
 
 @param  cue_id(*) for cue which you want to un-flag
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)unflagcue:(NSString*)cue_id withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  delete the cue
 
 @param  cue_id(*) for cue which you want to delete
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)deletecue:(NSString*)cue_id withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;


#pragma mark -- Comments


/*!
 @method
 
 @abstract  returns the comments for requested cue
 
 @param  cue_id(*) for to whom you need cues
                  offset (*) for start count
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getcommentsforcue:(NSString*)cue_id andoffset:(float)offset usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  returns the flagged comments
 
 @param 
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getflaggedcommentsusingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;


/*!
 @method
 
 @abstract  post a comment to cue
 
 @param params has mulitple key value pairs
 cue_id(*) for cue
 text(*) for cue comment
 type(*) for mention the comment type
 (you can add fileds to params if any more)
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)postCommentwithcue:(NSString*)cue_id andcommnettext:(NSString*)text andcommentType:(SMACX_CUE_COMMENT_TYPE)type withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;


/*!
 @method
 
 @abstract  delete a comment for cue
 
 @param params has mulitple key value pairs
 comment_id(*) for cue comment
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)deleteCommentwithcomment:(NSString*)comment_id withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  flag a comment for cue
 
 @param params has mulitple key value pairs
 comment_id(*) for cue comment
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)flagCommentwithcomment:(NSString*)comment_id withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  un-flag a comment for cue
 
 @param params has mulitple key value pairs
 comment_id(*) for cue comment
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)unflagCommentwithcomment:(NSString*)comment_id withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;


#pragma mark -- Search

/*!
 @method
 
 @abstract  search cues from server
 
 @param params has mulitple key value pairs
 searchkey(*) for search with cues
 offset (*) for start count
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */
-(void)searchcuewithkey:(NSString*)searchkey andoffset:(float)offset usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  search people from server
 
 @param  searchkey(*) for search with people
                  offset (*) for start count
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)searchpeoplewithkey:(NSString*)searchkey andoffset:(float)offset usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;


#pragma mark -- cue votes

/*!
 @method
 
 @abstract  vote on cue options
 
 @param asset_id(*) for vote on asset
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)voteonasset:(NSString*)asset_id usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

@end
