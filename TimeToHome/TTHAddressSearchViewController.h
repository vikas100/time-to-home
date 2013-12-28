//
//  TTHAddressSearchViewController.h
//  TimeToHome
//
//  Created by Maxwell Elliott on 12/27/13.
//
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@class SPGooglePlacesAutocompleteQuery;

@interface TTHAddressSearchViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, UISearchDisplayDelegate, UISearchBarDelegate>
{
    SPGooglePlacesAutocompleteQuery *searchQuery;
    NSArray *autocompleteResults;
}

@property (nonatomic, strong) CLLocation *currentUserLocation;


@end
