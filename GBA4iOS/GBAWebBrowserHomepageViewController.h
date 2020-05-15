//
//  GBAWebBrowserHomepageViewController.h
//  GBA4iOS
//
//  Created by Riley Testut on 9/2/14.
//  Copyright (c) 2014 Riley Testut. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, GBAWebBrowserHomepage)
{
    GBAWebBrowserHomepageCustom       = 0,
    GBAWebBrowserHomepageGoogle       = 1,
    GBAWebBrowserHomepageStartpage    = 2,
    GBAWebBrowserHomepageYahoo        = 3,
    GBAWebBrowserHomepageBing         = 4,
    GBAWebBrowserHomepageGameFAQs     = 5,
    GBAWebBrowserHomepageSuperCheats  = 6,
};

@interface GBAWebBrowserHomepageViewController : UITableViewController

+ (NSString *)localizedNameForWebBrowserHomepage:(GBAWebBrowserHomepage)webBrowserHomepage;

@end
