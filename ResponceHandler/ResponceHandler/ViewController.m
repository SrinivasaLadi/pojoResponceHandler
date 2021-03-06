//
//  ViewController.m
//  ResponceHandler
//
//  Created by Srinivas on 11/25/15.
//  Copyright © 2015 mtuity. All rights reserved.
//

#import "ViewController.h"
#import "Constants.h"
#import "DataModels.h"

@interface ViewController ()
- (IBAction)btnSendPressed:(id)sender;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



/*!
 * @discussion it will call when ever pressed the Sample API Call in interface
 * @param sender its object which has to pressed.
 * @return it will responds to spefic action which has to made.
 */

- (IBAction)btnSendPressed:(id)sender {
    
    [ViewController sampleWsCallWithBlock:^(id resultData, BOOL reported) {
        
        NSLog(@"JSON object From Dict : \n %@",[MTSerialization jSONStringWithDictinary:resultData]);
 
        //integrating the pojo classes objects here
        
        self.arrMeasuremntsObjects = [[NSMutableArray alloc] init];
    
        if ([resultData isKindOfClass:[NSArray class]]) {
            
            NSLog(@"Responce data contains %lu objects ",(unsigned long)[resultData count]);
            for (id data in resultData) {
                MTMeasurements *objMesaurement = [[MTMeasurements alloc] initWithDictionary:data];
                [self.arrMeasuremntsObjects addObject:objMesaurement];

            }
            
            NSLog(@"Coutnt Of Convenrted Objects %li",[self.arrMeasuremntsObjects count]);
            
        }
        
        
    }];
}

/*!
 * @discussion its created for calling the sample api
 * @param no parameters requeired
 * @return it will call the block method as return parameters
 * @param resultData it will send the resultdata after convered from NSData to serilized object
 * @param status its returns YES if we got the 200 responce code from server else will return NO
 
 */

+ (void)sampleWsCallWithBlock:(void (^) (id resultData,BOOL status))block
{
    SMACXRequest *objRequest = [[SMACXRequest alloc] init];
    [objRequest setGetMethodwithURL:URL_DEFAULT_MEASUREMENTS];
    [SMACXConnection startwithrequest:objRequest usingblock:^(NSData *responseData, NSHTTPURLResponse *response, NSError *error) {
        
        if (error == nil && response.statusCode == 200 && responseData != nil)
        {
            id responceData = [MTSerialization jSONObjectWithData:responseData];
            if (block) {
                block(responceData,YES);
            }
        }
        else
        {
            if (block) {
                block(nil,NO);
            }
        }
    }];
    
    
}

@end
