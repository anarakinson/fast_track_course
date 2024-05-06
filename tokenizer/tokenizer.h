//
// Created by artio on 06-Apr-24.
//

#ifndef NTR2_MYLIST_H
#define NTR2_MYLIST_H

template <typename T>
class myList {
public:
    enum RetCode {
        NULL_PTR,
        NOT_FOUND,
        OK
    };

    struct Node {
        T data;
        Node* next{nullptr};
        explicit Node(const T& val): data(val) {};
        Node() = delete;
    };

    Node* find(const T& val) const {
        Node* ret = _head;
        while (ret != nullptr && ret->data != val) {
            ret = ret->next;
        }
        return ret;
    }

    RetCode erase(Node* nd) {
        if (nd == nullptr) {
            return RetCode::NULL_PTR;
        }
        if (nd == _head) {
            _head = _head->next;
            delete nd;
            return RetCode::OK;
        }
        Node* it = _head;
        while (it != nullptr) {
            if (it->next == nd) {
                it->next = it->next->next;
                delete nd;
                return RetCode::OK;
            }
            it = it->next;
        }
        return RetCode::NOT_FOUND;
    }
    Node* push(const T& val) {
        auto new_node = new Node(val);
        new_node->next = _head;
        _head = new_node;
        return new_node;
    }
    RetCode insertAfter(Node* nd, const T& val, bool safe = true) {
        if (nd == nullptr) {
            return RetCode::NULL_PTR;
        }
        if (safe) {
            if (auto ret = check_node(nd); ret != RetCode::OK)
                return ret;
        }
        auto new_node = new Node(val);
        new_node->next = nd->next;
        nd->next = new_node;
        return RetCode::OK;
    }

    Node* head() const {
        return _head;
    }

    ~myList() {
        while (_head != nullptr) {
            auto next = _head->next;

            delete _head;
            _head = next;
        }
    }

private:
    Node* _head{nullptr};
    RetCode check_node(Node* nd) const {
        if (nd == nullptr) {
            return RetCode::NULL_PTR;
        }
        bool found = false;
        Node* it = _head;
        while (it != nullptr) {
            if (it == nd) {
                found = true;
                break;
            }
            it = it->next;
        }
        if (!found)
            return RetCode::NOT_FOUND;

        return RetCode::OK;
    }
};


#endif //NTR2_MYLIST_H