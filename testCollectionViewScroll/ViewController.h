//
//  ViewController.h
//  testCollectionViewScroll
//
//  Created by Quy Sang Le on 2/2/13.
//  Copyright (c) 2013 Quy Sang Le. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyCell.h"

@interface ViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate>
@property (weak, nonatomic) IBOutlet UICollectionView *collection;

@end
