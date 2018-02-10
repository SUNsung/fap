
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    namespace internal {
template <typename Scalar>
struct functor_traits<scalar_clip_op<Scalar> > {
  enum {
    Cost = NumTraits<Scalar>::AddCost * 3,
    PacketAccess = packet_traits<Scalar>::HasMax &&
                   packet_traits<Scalar>::HasMin &&
                   packet_traits<Scalar>::HasNegate
  };
};
}  // namespace internal
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace tensorflow {
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #include <vector>
#include <string>
    
    #include <osquery/core.h>
    
    DECLARE_string(extensions_socket);
DECLARE_string(extensions_autoload);
DECLARE_string(extensions_timeout);
DECLARE_bool(disable_extensions);
    
      /**
   * @brief A convenience method to check if the return code is 0
   *
   * @code{.cpp}
   *   auto s = doSomething();
   *   if (s.ok()) {
   *     LOG(INFO) << 'doing work';
   *   } else {
   *     LOG(ERROR) << s.toString();
   *   }
   * @endcode
   *
   * @return a boolean which is true if the status code is 0, false otherwise.
   */
  bool ok() const { return getCode() == 0; }
    
    
    {/**
 * @brief Start a file carve of the given paths
 *
 * @return A status returning if the carves were started successfully
 */
Status carvePaths(const std::set<std::string>& paths);
} // namespace osquery

    
    std::string genGuid() {
  return boost::uuids::to_string(boost::uuids::random_generator()());
};
    
    /// Enforce specific types of decoration.
enum DecorationPoint {
  DECORATE_LOAD,
  DECORATE_ALWAYS,
  DECORATE_INTERVAL,
};
    
    CLI_FLAG(uint64,
         config_tls_max_attempts,
         3,
         'Number of attempts to retry a TLS config/enroll request');
    
    
    {  // Support a signed 64, a double, and treat everything else as a signed int.
  if (type == kCFNumberSInt64Type) {
    long long int value;
    if (CFNumberGetValue((CFNumberRef)cf_number, type, &value)) {
      return boost::lexical_cast<std::string>(value);
    }
  } else if (type == kCFNumberDoubleType) {
    double value;
    if (CFNumberGetValue((CFNumberRef)cf_number, type, &value)) {
      return boost::lexical_cast<std::string>(value);
    }
  } else {
    unsigned int value;
    if (CFNumberGetValue((CFNumberRef)cf_number, type, &value)) {
      return boost::lexical_cast<std::string>(value);
    }
  }
  // Cast as a string.
  return '0';
}
    
    #include <vector>
#include <string>
    
    #include 'platform_comm.h'
    
    
/*
 * WakeUpLock.h
 *
 *  Created on: 2012-9-28
 *      Author: yerungui
 */
    
    void CommFrequencyLimit::__DelOlderTouchTime(uint64_t _time) {
    for (std::list<uint64_t>::iterator iter = touch_times_.begin(); iter != touch_times_.end();) {
        if ((_time - (*iter)) > time_span_) {
            iter = touch_times_.erase(iter);
            continue;
        }
    }
    }
    
    
class ServiceBase;
typedef std::map<std::string, ServiceBase*> TServicesMap;
    
    int TSpy::__TestFun1(int i)
{
    return reinterpret_cast<Test_Spy_Sample*>(This())->__TestFun1(i);
}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        // clear() empties the vector, but the allocated capacity remains so we can
    // just reuse it without having to re-allocate in most cases.
    ioQueue->clear();
    
    /**
 * A helper class for creating an AsyncFileWriter or ImmediateFileWriter based
 * on log handler options settings.
 *
 * This is used by StreamHandlerFactory and FileHandlerFactory.
 */
class FileWriterFactory {
 public:
  bool processOption(StringPiece name, StringPiece value);
  std::shared_ptr<LogWriter> createWriter(File file);
    }
    
    #include <folly/FileUtil.h>
#include <folly/String.h>
#include <folly/experimental/logging/LoggerDB.h>
    
      bool operator==(const LogConfig& other) const;
  bool operator!=(const LogConfig& other) const;
    
      LogConfig::HandlerConfigMap handlerConfigs;
  auto* handlers = value.get_ptr('handlers');
  if (handlers) {
    if (!handlers->isObject()) {
      throw LogConfigParseError{to<string>(
          'unexpected data type for log handlers config: got ',
          dynamicTypename(*handlers),
          ', expected an object')};
    }
    }
    
    /*
 * This file contains utility functions for parsing and serializing
 * LogConfig strings.
 *
 * This is separate from the LogConfig class itself, to reduce the dependencies
 * of the core logging library.  Other code that wants to use the logging
 * library to log messages but does not need to parse log config strings
 * therefore does not need to depend on the folly JSON library.
 */
    
    Node * Node::getChild(unsigned index)
{
    auto nodePtr = YGNodeGetChild(m_node, index);
    }
    
    struct Layout
{
    double left;
    double right;
    }
    
    #pragma once
    
    
    {  YGNodeFreeRecursive(root);
}

    
      const YGNodeRef child = YGNodeNew();
  YGNodeInsertChild(root, child, 0);
  YGNodeStyleSetWidth(child, 100);
  YGNodeStyleSetHeight(child, 100);
  YGNodeStyleSetMargin(child, YGEdgeTop, 10);
  YGNodeStyleSetPadding(child, YGEdgeTop, 10);
    
      const YGNodeRef root_child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetFlexGrow(root_child0, 1);
  YGNodeStyleSetWidth(root_child0, 10);
  YGNodeInsertChild(root, root_child0, 0);
  YGNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root_child0));
    
    #include <gtest/gtest.h>
#include <yoga/Yoga.h>
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root));
    
    #include <cstdarg>
#include <stdio.h>
    
    
    {}
