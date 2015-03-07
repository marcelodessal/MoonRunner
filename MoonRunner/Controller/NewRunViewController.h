//
//  NewRunViewController.h
//  MoonRunner
//
//  Created by MarceloDessal on 3/6/15.
//  Copyright (c) 2015 MarceloDessal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface NewRunViewController : UIViewController <UIActionSheetDelegate, CLLocationManagerDelegate, MKMapViewDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@end
