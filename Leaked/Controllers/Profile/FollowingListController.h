//
//  FollowingListController.h
//  Leak
//
//  Created by Xin Jin on 16/6/14.
//  Copyright (c) 2014 Xin Jin. All rights reserved.
//
// --- Headers ---;
#import <UIKit/UIKit.h>

// --- Classes ---;
@class User;

// --- Defines ---;
// FollowingListController Class;
@interface FollowingListController : UITableViewController

// Properties;
@property (nonatomic, strong) User *user;

@end
