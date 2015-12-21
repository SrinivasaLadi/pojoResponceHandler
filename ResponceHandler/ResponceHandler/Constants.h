//
//  Constants.h
//  ResponceHandler
//
//  Created by Srinivas on 11/26/15.
//  Copyright © 2015 mtuity. All rights reserved.
//

#ifndef Constants_h
#define Constants_h
#import <SMACX/SMACX.h>
#import "MTSerialization.h"

#define URL_ROOT  @"https://fashion-node-server-dev.herokuapp.com"

#define ROOT_URL_NODE URL_ROOT@"/"
#define BASE_URL_NODE URL_ROOT@"/api/v1"
#define BASE_URL BASE_URL_NODE
#define WSDebugShowLogs		(TRUE)

#define URL_DEFAULT_MEASUREMENTS  [NSString stringWithFormat: @"%@/getDefaultMeasurements",BASE_URL_NODE]


#endif /* Constants_h */
