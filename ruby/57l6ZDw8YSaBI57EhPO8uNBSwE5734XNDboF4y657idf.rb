
        
            You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
      # Allows a bottle tag to specify a specific OS or later,
  # so the same bottle can target multiple OSs.
  # Not used in core, used in taps.
  def find_or_later_tag(tag)
    begin
      tag_version = MacOS::Version.from_symbol(tag)
    rescue ArgumentError
      return
    end
    
    module Homebrew
  def build_env_keys(env)
    %w[
      CC CXX LD OBJC OBJCXX
      HOMEBREW_CC HOMEBREW_CXX
      CFLAGS CXXFLAGS CPPFLAGS LDFLAGS SDKROOT MAKEFLAGS
      CMAKE_PREFIX_PATH CMAKE_INCLUDE_PATH CMAKE_LIBRARY_PATH CMAKE_FRAMEWORK_PATH
      MACOSX_DEPLOYMENT_TARGET PKG_CONFIG_PATH PKG_CONFIG_LIBDIR
      HOMEBREW_DEBUG HOMEBREW_MAKE_JOBS HOMEBREW_VERBOSE
      HOMEBREW_SVN HOMEBREW_GIT
      HOMEBREW_SDKROOT HOMEBREW_BUILD_FROM_SOURCE
      MAKE GIT CPP
      ACLOCAL_PATH PATH CPATH].select { |key| env.key?(key) }
  end
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
          return false unless prune_time
    
      def clang
    @clang ||= MacOS.clang_version if MacOS.has_apple_developer_tools?
  end
    
        if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
      def self.directory
    yield @dir
  end
    
      it 'returns subclass instances when called on a subclass' do
    StringSpecs::MyString.new('hello').capitalize.should be_an_instance_of(StringSpecs::MyString)
    StringSpecs::MyString.new('Hello').capitalize.should be_an_instance_of(StringSpecs::MyString)
  end
end
    
            swapcased.should == 'aSSET'
        swapcased.size.should == 5
        swapcased.bytesize.should == 5
        swapcased.ascii_only?.should be_true
      end
    end
    
    describe 'Net::HTTPResponse#error!' do
  it 'raises self's class 'EXCEPTION_TYPE' Exception' do
    res = Net::HTTPUnknownResponse.new('1.0', '???', 'test response')
    lambda { res.error! }.should raise_error(Net::HTTPError)
    
    describe 'Net::HTTPResponse#error_type' do
  it 'returns self's class 'EXCEPTION_TYPE' constant' do
    res = Net::HTTPUnknownResponse.new('1.0', '???', 'test response')
    res.error_type.should == Net::HTTPError
    
          # If the importer is based on files on the local filesystem
      # this method should return folders which should be watched
      # for changes.
      #
      # @return [Array<String>] List of absolute paths of directories to watch
      def directories_to_watch
        []
      end
    
      # Uninstalls this logger from \{Sass.logger\}. This should only be called if
  # the logger was installed using \{#install!}
  def uninstall!
    if Sass.logger != self
      throw Exception.new('Can't uninstall a logger that's not currently installed.')
    end