//
//  DeliveryViewController.h
//  uberhxthon
//
//  Created by Catherine Jue on 4/26/15.
//  Copyright (c) 2015 Catherine Jue & Ashwin Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Mapkit/Mapkit.h>
#include "routeGenerator.h"
#import "UberKit.h"

@import CoreLocation;

@interface DeliveryViewController : UIViewController <CLLocationManagerDelegate, MKMapViewDelegate, UberKitDelegate>
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (strong, nonatomic) CLLocationManager *locationManager;

- (void)receivedReceiptUpdate:(NSDictionary *)receiptsDictionary;
- (void)receivedCarLocationsUpdate:(NSDictionary *)ubersDictionary;

@end
