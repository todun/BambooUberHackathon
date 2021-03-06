//
//  RequestUberPopupViewController.h
//  uberhxthon
//
//  Created by Ashwin Kumar on 5/5/15.
//  Copyright (c) 2015 Catherine Jue & Ashwin Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol RequestPopupViewControllerDelegate <NSObject>

- (void)dismissedRequestUberPopup;

@end

@interface RequestUberPopupViewController : UIViewController
@property (nonatomic, assign) id<RequestPopupViewControllerDelegate> delegate;
-(void)setFirstStatus:(NSString *)firstStatus;
-(void)uberRequestComplete:(NSString *)message;
@end
