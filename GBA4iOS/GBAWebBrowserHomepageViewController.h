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
    GBAWebBrowserHomepageCustom       = -1,
    GBAWebBrowserHomepageGoogle       = 0,
    GBAWebBrowserHomepageStartpage    = 1,
    GBAWebBrowserHomepageYahoo        = 2,
    GBAWebBrowserHomepageBing         = 3,
    GBAWebBrowserHomepageGameFAQs     = 4,
    GBAWebBrowserHomepageSuperCheats  = 5,
};

@interface GBAWebBrowserHomepageViewController : UITableViewController

+ (NSString *)localizedNameForWebBrowserHomepage:(GBAWebBrowserHomepage)webBrowserHomepage;

@end
