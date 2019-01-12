
        
        
    {  return PlatformKind::none;
}

    
      /// Retrieve the array of replacement types, which line up with the
  /// generic parameters.
  ///
  /// Note that the types may be null, for cases where the generic parameter
  /// is concrete but hasn't been queried yet.
  ArrayRef<Type> getReplacementTypes() const {
    return llvm::makeArrayRef(getTrailingObjects<Type>(),
                              getNumReplacementTypes());
  }
    
    #ifndef PREPOSITION
#  define PREPOSITION(Word)
#endif
    
    
void ClangDiagnosticConsumer::HandleDiagnostic(
    clang::DiagnosticsEngine::Level clangDiagLevel,
    const clang::Diagnostic &clangDiag) {
  // Handle the module-not-found diagnostic specially if it's a top-level module
  // we're looking for.
  if (clangDiag.getID() == clang::diag::err_module_not_found &&
      CurrentImport && clangDiag.getArgStdStr(0) == CurrentImport->getName()) {
    return;
  }
    }
    
      // Static members
  IAMResult(DeclName declName, EffectiveClangContext dc)
      : name(declName), effectiveDC(dc) {}
    
      case Demangle::Node::Kind::Module:
    // Modules terminate the recursion.
    return node;
    
    
    {private:
    Ui::OpenURIDialog *ui;
};
    
    
    {    Lock& lock;
    Lock templock;
};
    
        std::string vs('yawn');
    UniValue v8(vs);
    BOOST_CHECK(v8.isStr());
    BOOST_CHECK_EQUAL(v8.getValStr(), 'yawn');
    
    //////////////////////////////////////////////////////////////////////
    
    #undef ADDS
    
    #include <memory>
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    
    {  logAHMSubMapWarning(mapName);
}
    
    Animation* Animation::createWithSpriteFrames(const Vector<SpriteFrame*>& frames, float delay/* = 0.0f*/, unsigned int loops/* = 1*/)
{
    Animation *animation = new (std::nothrow) Animation();
    animation->initWithSpriteFrames(frames, delay, loops);
    animation->autorelease();
    }
    
    
    {}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/