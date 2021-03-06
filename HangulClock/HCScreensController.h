/**
 * Project. Hangul Clock Desktop Widget for Mac
 * User: MR.LEE(leeshoon1344@gmail.com)
 * Based on uebersicht
 * License GPLv3
 * Original Copyright (c) 2013 Felix Hageloh.
 */

#import <Foundation/Foundation.h>

@interface HCScreensController : NSObject

@property NSMutableDictionary* screens;
@property NSArray* sortedScreens;

- (id)initWithChangeListener:(id)target;
- (void)syncScreens:(id)sender;
- (NSRect)screenRect:(NSNumber*)screenId;

@end
