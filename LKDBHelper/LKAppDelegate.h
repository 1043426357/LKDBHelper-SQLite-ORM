//
//  LKAppDelegate.h
//  LKDBHelper
//
//  Created by upin on 13-4-15.
//  Copyright (c) 2013年 ljh. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface LKAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


@end


#import "LKDBHelper.h"

@interface LKTest : NSObject
@property(copy,nonatomic)NSString* name;
@property int  age;
@property BOOL isGirl;
@property char like;
@property(strong,nonatomic) UIImage* img;
@property(strong,nonatomic) NSDate* date;

@property(copy,nonatomic)NSString* error;
@property(copy,nonatomic)UIColor* color;
@end