//
//  Episode.h
//  Aviation Story
//
//  Created by James Warmkessel on 11/8/12.
//  Copyright (c) 2012 James Warmkessel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface AvstryEpisode : NSManagedObject

@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * desc;
@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) NSString * image;

@end
