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
+ (void) performRequest{
    
    NSLog(@"Made it here");
    
    NSURL *url = [NSURL URLWithString:@"http://www.avstry.com/rss.jsp"];
    NSData *xmlData = [[NSMutableData alloc] initWithContentsOfURL:(url)];
    NSError *error;
    GDataXMLDocument *doc = [[GDataXMLDocument alloc] initWithData:xmlData
                                                           options:0 error:&error];
    
    if (doc == nil) { return;}
    
    NSArray *orderDataArray = [doc.rootElement elementsForName:@"channel"];
    for(GDataXMLElement *orderDataElement in orderDataArray){
        NSArray *itemDataArray = [orderDataElement elementsForName:@"item"];
        for(GDataXMLElement *itemDataElement in itemDataArray){
            NSArray *titleDataArray = [itemDataElement elementsForName:@"title"];
            for(GDataXMLElement *titleDataElement in titleDataArray){
                if([titleDataElement childCount] > 0){
                    NSLog(@"%@", titleDataElement.stringValue);
                }
            }
        }
        
    }
    NSLog(@"Done");
    return;       
}


@end
