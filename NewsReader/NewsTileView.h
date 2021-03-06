//
//  NewsTileView.h
//  NewsReader
//
//  Created by Serdar Karatekin on 3/22/15.
//  Copyright (c) 2015 Serdar Karatekin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "News.h"
@class NewsTileView;

@protocol NewsTileViewDelegate <NSObject>

@required
- (float)viewOffsetForScaling:(NewsTileView *)tile;
- (void)tileTapped:(NewsTileView *)tile;

@end

@interface NewsTileView : UIView

@property (nonatomic) CGRect initialFrame;
@property (weak, nonatomic) id <NewsTileViewDelegate> delegate;
@property (strong, nonatomic) News *news;

- (id)initWithFrame:(CGRect)frame news:(News *)news;

@end
