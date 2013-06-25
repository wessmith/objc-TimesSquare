//
//  TSQCalendarMonthHeaderCell.h
//  TimesSquare
//
//  Created by Jim Puls on 11/14/12.
//  Licensed to Square, Inc. under one or more contributor license agreements.
//  See the LICENSE file distributed with this work for the terms under
//  which Square, Inc. licenses this file to you.

#import "TSQCalendarCell.h"

/** The `TSQCalendarMonthHeaderCell` class displays the month name and day names at the top of a month's worth of weeks.
 
 By default, it lays out the day names in the bottom 20 points, the month name in the remainder of its height, and has a height of 65 points. You'll want to subclass it to change any of those things.
 */
@interface TSQCalendarMonthHeaderCell : TSQCalendarCell

/** @name Display Properties */

/** The font.
 
 This is used for all text the header cell draws.
 */
@property (nonatomic, strong) UIFont *font UI_APPEARANCE_SELECTOR;

/** The text color.
 
 This is used for all text the header cell draws.
 */
@property (nonatomic, strong) UIColor *textColor UI_APPEARANCE_SELECTOR;

/** The text shadow offset.
 
 This is as you would set on `UILabel`.
 */
@property (nonatomic) CGSize shadowOffset UI_APPEARANCE_SELECTOR;

/** The month format string.
 
 This is the month format template. The default value is `yyyyLLLL` ("June 2013").
 */
@property (nonatomic) NSString *monthTemplate;

/** @name Day Labels */

/** The weekday format string.
 
 This is the weekday format template. The default value is `cccccc` ("Wed").
 */
@property (nonatomic) NSString *weekdayTemplate;

/** The day header labels.
 
 The count is equal to the `daysInWeek` property, likely seven. You can position them in the call to `layoutViewsForColumnAtIndex:inRect:`.
 */
@property (nonatomic, strong) NSArray *headerLabels;


/** Creates the header labels.
 
 If you want the text in your header labels to be something other than the short day format ("Mon Tue Wed" etc.), override this method, call `super`, and loop through `self.headerLabels`, changing their text.
 */
- (void)createHeaderLabels;

@end
