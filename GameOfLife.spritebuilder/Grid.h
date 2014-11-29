//
//  Grid.h
//  GameOfLife
//
//  Created by Balazs Dianiska on 28/11/2014.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"
#import "Creature.h"

@interface Grid : CCSprite
@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

- (void)evolveStep;
- (void)updateCreatures;
- (void)countNeighbors;
- (Creature *)creatureForTouchPosition:(CGPoint)touchLocation;

@end
