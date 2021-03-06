//
// Created by Fear on 10/10/15.
//

#ifndef CONCURRENTHASHMAP_INSTRUCTION_H
#define CONCURRENTHASHMAP_INSTRUCTION_H

enum class InstructionEnum {PUT = 1, REMOVE = 2, AT = 3};

template <class K, class V>
class Instruction {
public:
    Instruction(const InstructionEnum _type, const K &_key, const V &_value) {
        type = _type;
        key = _key;
        value = _value;
    }

    bool operator==(const Instruction &ins) const {
        return (type == ins.type) && (key == ins.key);
    }

    InstructionEnum type;
    K key;
    V value;
};


#endif
