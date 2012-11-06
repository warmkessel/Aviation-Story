//
//  AvstryMasterViewController.h
//  Aviation Story
//
//  Created by James Warmkessel on 11/5/12.
//  Copyright (c) 2012 James Warmkessel. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AvstryDetailViewController;

#import <CoreData/CoreData.h>

@interface AvstryMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) AvstryDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
