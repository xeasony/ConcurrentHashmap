//
// Created by Fear on 10/11/15.
//

#ifndef CONCURRENTHASHMAP_NODE_H
#define CONCURRENTHASHMAP_NODE_H

template<class K, class V>
class Node {
public:
    Node(Node *_next, const K &_key, const V &_value) {
        key = _key;
        value = _value;
        next = _next;
    }
    K key;
    V value;
    Node *next;
};


#endif
