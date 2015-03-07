//
//  DetailViewController.h
//  MoonRunner
//
//  Created by MarceloDessal on 3/6/15.
//  Copyright (c) 2015 MarceloDessal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "Run.h"

@interface DetailViewController : UIViewController <MKMapViewDelegate>

@property (strong, nonatomic) Run *run;

@end