//
//  AppDelegate.h
//  zxwkApp
//
//  Created by HongDongHeng on 2017/9/5.
//  Copyright © 2017年 HongDongHeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

