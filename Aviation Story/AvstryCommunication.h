//
//  AvstryCommunication.h
//  Aviation Story
//
//  Created by James Warmkessel on 11/5/12.
//  Copyright (c) 2012 James Warmkessel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GDataXmlNode.h"

@interface AvstryCommunication : NSObject
+ (GDataXMLDocument*) performRequest;
@end
