//
//  ViewController.m
//  LivetexKitSample
//
//  Created by Эмиль Абдуселимов on 26.01.16.
//  Copyright © 2016 Livetex. All rights reserved.
//

#import "ViewController.h"
#import <LivetexKit/LivetexKit.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)presentController:(id)sender {
    LTMobileSDKInitializationParams *parameters = [[LTMobileSDKInitializationParams alloc] init];
    parameters.sdkKey = @"demo";
    parameters.applicationId = @"111150";
    
    //initialize livetex core with parameters
    [[LKManager sharedManager] registerWithParameters:parameters];
    LKMessagesViewController *messagesController = [LKMessagesViewController new];
    messagesController.allowComplaint = NO;
    messagesController.allowEstimation = YES;
    messagesController.allowUploadImage = NO;
    LKNavigationController *navigationController = [[LKNavigationController alloc] initWithRootViewController:messagesController];
    [self presentViewController:navigationController animated:YES completion:nil];
}

@end
