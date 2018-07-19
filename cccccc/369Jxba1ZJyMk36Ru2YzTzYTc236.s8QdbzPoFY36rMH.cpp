#include 'atom/browser/api/trackable_object.h'
#include 'base/callback.h'
#include 'chrome/browser/extensions/global_shortcut_listener.h'
#include 'native_mate/handle.h'
#include 'ui/base/accelerators/accelerator.h'
    
    namespace atom {
    }
    
    #endif  // ATOM_COMMON_API_LOCKER_H_

    
      // Similar to NOTIFICATION_APP_INSTALLED_TO_NTP but used to notify ash AppList
  // about installed app. Source is the profile in which the app is installed
  // and Details is the string ID of the extension.
  NOTIFICATION_APP_INSTALLED_TO_APPLIST,
    
    #ifndef CHROME_BROWSER_PRINTING_PRINT_VIEW_MANAGER_OBSERVER_H_
#define CHROME_BROWSER_PRINTING_PRINT_VIEW_MANAGER_OBSERVER_H_
    
    struct BuiltStyledStreamWriter : public StreamWriter
{
  BuiltStyledStreamWriter(
      std::string const& indentation,
      CommentStyle::Enum cs,
      std::string const& colonSymbol,
      std::string const& nullSymbol,
      std::string const& endingLineFeedSymbol,
      bool useSpecialFloats,
      unsigned int precision);
  int write(Value const& root, std::ostream* sout) override;
private:
  void writeValue(Value const& value);
  void writeArrayValue(Value const& value);
  bool isMultineArray(Value const& value);
  void pushValue(std::string const& value);
  void writeIndent();
  void writeWithIndent(std::string const& value);
  void indent();
  void unindent();
  void writeCommentBeforeValue(Value const& root);
  void writeCommentAfterValueOnSameLine(Value const& root);
  static bool hasCommentForValue(const Value& value);
    }
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(MapFieldGenerator);
};
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__

    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(JavaGenerator);
};
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}