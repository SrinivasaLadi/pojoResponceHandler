//
//  ViewController.h
//  ResponceHandler
//
//  Created by Srinivas on 11/25/15.
//  Copyright © 2015 mtuity. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


/*!
 * @discussion its created for calling the sample api
 * @param no parameters requeired
 * @return it will call the block method as return parameters
 * @param resultData it will send the resultdata after convered from NSData to serilized object
 * @param status its returns YES if we got the 200 responce code from server else will return NO
 
 */
@property (nonatomic,strong) NSMutableArray *arrMeasuremntsObjects;
+ (void)sampleWsCallWithBlock:(void (^) (id resultData,BOOL status))block;
@end

