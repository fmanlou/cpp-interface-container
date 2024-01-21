#pragma once

template <typename T>
class Container : public T {
  using NodeBase = Container<T>;

 public:
  virtual ~Container() = default;

  void set(NodeBase* node) { m_node = node; }

 protected:
  NodeBase* m_node;
};

class Interface {
 public:
  virtual ~Interface() = default;
};

using InterfaceContainer = Container<Interface>;
