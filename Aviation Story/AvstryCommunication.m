//
//  AvstryCommunication.m
//  Aviation Story
//
//  Created by James Warmkessel on 11/5/12.
//  Copyright (c) 2012 James Warmkessel. All rights reserved.
//

#import "AvstryCommunication.h"
#import "GDataXmlNode.h"
@implementation AvstryCommunication
+ (GDataXMLDocument*) performRequest{
    
    NSLog(@"Made it here");
    
    NSURL *url = [NSURL URLWithString:@"http://www.avstry.com/rss.jsp"];
    NSData *xmlData = [[NSMutableData alloc] initWithContentsOfURL:(url)];
    NSError *error;
    GDataXMLDocument *doc = [[GDataXMLDocument alloc] initWithData:xmlData
                                                        options:0 error:&error];
    return doc;
}


@end
