//
//  SMACXCoreAsset.h
//  SMACX
//
//  Created by Paradigm on 23/07/15.
//  Copyright (c) 2015 Neuv Media Pvt Ltd. All rights reserved.
//

#import "SMACX.h"

/*!
 @class SMACXCoreAsset
 
 @abstract Represents an class to do SMACXCoreAsset core funtionalities like
 * Get User Asset,
 * Upload asset,
 * Upload Doodle,
 
 */

@interface SMACXCoreAsset : NSObject

/*!
 @method
 
 @abstract  returns the Asset for requested user
 
 @param params has mulitple key value pairs
 userid(*) for to whom you need Asset
 label for different types of assets
 (you can add fileds to params if any more)
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getAssetsusingparameters:(NSMutableDictionary*)params withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  get asset details
 
 @param asset_id(*) for content of asset
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */


-(void)getAssetsdetailswithasset:(NSString *)asset_id withblock:(void (^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  delete asset
 
 @param asset_id(*) for content of asset
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)deleteasset:(NSString *)asset_id withblock:(void (^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

#pragma mark -- upload assets

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


-(void)uploadasset:(UIImage*)asset withparams:(NSMutableDictionary*)params withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

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

-(void)uploaddoodlewithparams:(NSMutableDictionary*)params withblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

#pragma mark -- asset actions

/*!
 @method
 
 @abstract  love the asset
 
 @param asset_id(*) for content of asset
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)loveasset:(NSString*)asset_id usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  unlove asset
 
 @param asset_id(*) for content of asset
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)unloveasset:(NSString*)asset_id usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  flag the asset
 
 @param asset_id(*) for content of asset
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)flagasset:(NSString*)asset_id usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  un-flag the asset
 
 @param  asset_id(*) for content of asset
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)unflagasset:(NSString*)asset_id usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

#pragma mark-- comments

/*!
 @method
 
 @abstract  get asset comments
 
 @param  asset_id(*) for comments of asset
                  offset (*) for start count
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */

-(void)getcommentsforasset:(NSString*)asset_id withoffset:(float)offset usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;



/*!
 @method
 
 @abstract  post text comment
 
 @param  asset_id(*) for content of asset
                  text(*) for content of comment
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */


-(void)posttextcommenttoasset:(NSString*)asset_id andtext:(NSString*)text usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  post image comment
 
 @param  asset_id(*) for content of asset
                  image(*) for content of comment
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */


-(void)postimagecommenttoasset:(NSString*)asset_id andimage:(UIImage*)image usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;


/*!
 @method
 
 @abstract  delete comment
 
 @param  comment_id(*) for content of asset
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */


-(void)deletecomment:(NSString*)comment_id usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  flag comment
 
 @param  comment_id(*) for content of asset
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */


-(void)flagcomment:(NSString*)comment_id usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  unflag comment
 
 @param  comment_id(*) for content of asset
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */


-(void)unflagcomment:(NSString*)comment_id usingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

/*!
 @method
 
 @abstract  get flagged comments
 
 @param
 
 @note (*) mandatory field
 
 @discussion
 Pass a block of this type when calling this method.  This will be called on the UI
 thread, once the operation completes.
 
 */


-(void)myflaggedcommentsusingblock:(void(^)(NSData *data, NSHTTPURLResponse *response,NSError *error))block;

@end
