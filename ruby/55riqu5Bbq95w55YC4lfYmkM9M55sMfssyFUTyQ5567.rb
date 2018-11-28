
        
          def [](key)
    @checksums[key]
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
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
      def find_internal_commands(directory)
    directory.children.reduce([]) do |cmds, f|
      cmds << f.basename.to_s.sub(/\.(?:rb|sh)$/, '') if f.file?
      cmds
    end
  end
end

    
      SEARCHABLE_TAPS = OFFICIAL_TAPS.map { |tap| ['Homebrew', tap] } + [
    %w[Caskroom cask],
    %w[Caskroom versions]
  ]
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                result.instance_variable_set(key, obj.instance_variable_get(key))
              end
            end
          end
    
            # This method is automatically called when the system is available (when
        # Vagrant can successfully SSH into the machine) to give the system a chance
        # to determine the distro and return a distro-specific system.
        #
        # If this method returns nil, then this instance is assumed to be
        # the most specific guest implementation.
        def distro_dispatch
        end
    
              @registered.each do |plugin|
            result.merge!(plugin.communicator.to_hash)
          end
    
            # This returns all the registered guests.
        #
        # @return [Hash]
        def hosts
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.hosts)
            end
          end
        end
    
            # Registers additional synced folder implementations.
        #
        # @param [String] name Name of the implementation.
        # @param [Integer] priority The priority of the implementation,
        # higher (big) numbers are tried before lower (small) numbers.
        def self.synced_folder(name, priority=10, &block)
          components.synced_folders.register(name.to_sym) do
            [block.call, priority]
          end
    
        # Get a value by the given key.
    #
    # This will evaluate the block given to `register` and return the
    # resulting value.
    def get(key)
      return nil if !@items.key?(key)
      return @results_cache[key] if @results_cache.key?(key)
      @results_cache[key] = @items[key].call
    end
    alias :[] :get
    
            if current_rule.nil? || first_sseq(current_rule) != first
          current_rule = Tree::RuleNode.new([])
          current_rule.parsed_rules = make_seq(first)
        end
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
    begin
  require 'bundler'
  Bundler::GemHelper.install_tasks
rescue LoadError => e
  $stderr.puts e
end
    
          # Creates a masked version of the authenticity token that varies
      # on each request. The masking is used to mitigate SSL attacks
      # like BREACH.
      def mask_token(token)
        token = decode_token(token)
        one_time_pad = SecureRandom.random_bytes(token.length)
        encrypted_token = xor_byte_strings(one_time_pad, token)
        masked_token = one_time_pad + encrypted_token
        encode_token(masked_token)
      end
    
          def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_scripting
    #
    # Automatically escapes Rack::Request#params so they can be embedded in HTML
    # or JavaScript without any further issues. Calls +html_safe+ on the escaped
    # strings if defined, to avoid double-escaping in Rails.
    #
    # Options:
    # escape:: What escaping modes to use, should be Symbol or Array of Symbols.
    #          Available: :html (default), :javascript, :url
    class EscapedParams < Base
      extend Rack::Utils
    
      it 'denies post form requests with wrong authenticity_token field' do
    post('/', {'authenticity_token' => bad_token}, 'rack.session' => session)
    expect(last_response).not_to be_ok
  end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end