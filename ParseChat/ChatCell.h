//
//  ChatCell.h
//  ParseChat
//
//  Created by Mary Jiang on 7/6/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChatCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *chatText;
@property (weak, nonatomic) IBOutlet UILabel *userText;

@end

NS_ASSUME_NONNULL_END
