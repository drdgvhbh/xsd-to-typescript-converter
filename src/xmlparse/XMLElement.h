#pragma once

#include <string>
#include <memory>
#include "XMLAttribute.h"

namespace xmlparse {
  class XMLElement {
  public:
    virtual ~XMLElement() = default;

    virtual std::optional<std::string> name() const = 0;

    virtual std::unique_ptr<XMLElement> firstChildElement() const = 0;

    virtual std::unique_ptr<XMLElement> firstChildElement(const std::string &name) const = 0;

    virtual std::unique_ptr<XMLElement> firstChildElement() = 0;

    virtual std::unique_ptr<XMLElement> firstChildElement(const std::string &name) = 0;

    virtual std::unique_ptr<XMLAttribute> findAttribute(const std::string &name) const = 0;

    virtual std::unique_ptr<XMLElement> nextSiblingElement() const = 0;

    virtual std::unique_ptr<XMLElement> nextSiblingElement(const std::string &name) const = 0;
  };
}

