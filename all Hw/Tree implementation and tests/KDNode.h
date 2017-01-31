//
//  KDNode.h
//  BinarySearchTree
//
//  Created by  Kunal Paliwal  on 11/15/16.
//  Copyright © 2016  Kunal Paliwal  BST. All rights reserved.
//

#ifndef KDNode_h
#define KDNode_h
#include <vector>

class KDNode
{
public:
    KDNode* left;  // left pointer
    KDNode* right; // right pointer
    KDNode* parent; // parent pointer --> as it will help in deletion of root node and finding depth also
    std::vector<int> nodeValuesVec; // contains x_axis value, y_axis value and data
};

#endif /* KDNode_h */
