//
//  IdentViewController.h
//  TEST_DWFMS_EMG
//
//  Created by youngseok Kim on 2015. 4. 29..
//  Copyright (c) 2015년 kimhyang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IdentViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *infoText;
@property (weak, nonatomic) IBOutlet UIButton *sendButton;
@property (weak, nonatomic) IBOutlet UIButton *cancelButton;
@property (weak, nonatomic) IBOutlet UITextField *phoneText;

@end
