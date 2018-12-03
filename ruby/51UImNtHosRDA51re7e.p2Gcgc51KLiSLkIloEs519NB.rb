
        
                private
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class DateSelect < Base # :nodoc:
        def initialize(object_name, method_name, template_object, options, html_options)
          @html_options = html_options
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
          def typecast(paths)
        paths.map do |path|
          case path
          when Pathname, String
            OptimizedFileSystemResolver.new path.to_s
          else
            path
          end
        end
      end
  end
end

    
        initializer 'action_view.per_request_digest_cache' do |app|
      ActiveSupport.on_load(:action_view) do
        unless ActionView::Resolver.caching?
          app.executor.to_run ActionView::Digestor::PerExecutionDigestCacheExpiry
        end
      end
    end
    
        # Render but returns a valid Rack body. If fibers are defined, we return
    # a streaming body that renders the template piece by piece.
    #
    # Note that partials are not supported to be rendered with streaming,
    # so in such cases, we just wrap them in an array.
    def render_body(context, options)
      if options.key?(:partial)
        [render_partial(context, options)]
      else
        StreamingTemplateRenderer.new(@lookup_context).render(context, options)
      end
    end
    
      Jekyll::External.require_if_present(Jekyll::External.blessed_gems) do |g, ver_constraint|
    cmd = g.split('-').last
    p.command(cmd.to_sym) do |c|
      c.syntax cmd
      c.action do
        Jekyll.logger.abort_with 'You must install the '#{g}' gem' \
          ' version #{ver_constraint} to use the 'jekyll #{cmd}' command.'
      end
    end
  end
    
            def log_error(error)
          Jekyll.logger.error 'LiveReload experienced an error. ' \
            'Run with --trace for more information.'
          raise error
        end
      end
    end
  end
end

    
              @reload_body = File.read(reload_file)
          @reload_size = @reload_body.bytesize
        end
    
            def make_accessible(hash = @config)
          hash.keys.each do |key|
            hash[key.to_sym] = hash[key]
            make_accessible(hash[key]) if hash[key].is_a?(Hash)
          end
        end
    
          private
    
        proxy = Devise::Hooks::Proxy.new(warden)
    
          def devise_mapping
        @devise_mapping ||= Devise.mappings[scope_name]
      end
    
        # Register callbacks
    self.listener.on_client_connect_proc = Proc.new { |cli|
      on_client_connect(cli)
    }
    self.listener.on_client_data_proc = Proc.new { |cli|
      on_client_data(cli)
    }
    
      def wait_for(*stypes)
    begin
      ::Timeout.timeout( IAX_DEFAULT_TIMEOUT ) do
        while (res = self.queue.pop )
          if stypes.include?(res[1])
            return res
          end
        end
      end
    rescue ::Timeout::Error
      return nil
    end
  end
    
    IAX_IE_CALLED_NUMBER  = 1
IAX_IE_CALLING_NUMBER = 2
IAX_IE_AUTH_METHODS   = 3
IAX_IE_CALLING_NAME   = 4
IAX_IE_USERNAME       = 6
IAX_IE_DESIRED_CODEC  = 9
IAX_IE_ORIGINAL_DID   = 10
IAX_IE_ACTUAL_CODECS  = 8
IAX_IE_PROTO_VERSION  = 11
IAX_IE_REG_REFRESH    = 19
IAX_IE_CHALLENGE_DATA = 15
IAX_IE_CHALLENGE_RESP = 16
IAX_IE_APPARENT_ADDR  = 18
IAX_IE_REGREJ_CAUSE   = 22
IAX_IE_HANGUP_CAUSE   = 42
    
      def self.create_ipmi_getchannel_probe
    [   # Get Channel Authentication Capabilities
      0x06, 0x00, 0xff, 0x07, # RMCP Header
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x20, 0x18,
      0xc8, 0x81, 0x00, 0x38, 0x8e, 0x04, 0xb5
    ].pack('C*')
  end
    
              # Encrypts the cipher using RC4-HMAC schema
          #
          # @param data [String] the data to encrypt
          # @param key [String] the key to encrypt
          # @param msg_type [Integer] the message type
          # @return [String] the encrypted data
          def encrypt_rc4_hmac(data, key, msg_type)
            k1 = OpenSSL::HMAC.digest('MD5', key, [msg_type].pack('V'))
    
              # Rex::Proto::Kerberos::Model::KrbError encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'KrbError encoding not supported'
          end
    
      # Compile a Sass or SCSS string to CSS.
  # Defaults to SCSS.
  #
  # @param contents [String] The contents of the Sass file.
  # @param options [{Symbol => Object}] An options hash;
  #   see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  # @raise [Sass::SyntaxError] if there's an error in the document
  # @raise [Encoding::UndefinedConversionError] if the source encoding
  #   cannot be converted to UTF-8
  # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
  def self.compile(contents, options = {})
    options[:syntax] ||= :scss
    Engine.new(contents, options).to_css
  end
    
          # @param cache_location [String] see \{#cache\_location}
      def initialize(cache_location)
        @cache_location = cache_location
      end
    
          opts.on('-q', '--quiet', 'Silence warnings and status messages during compilation.') do
        @options[:for_engine][:quiet] = true
      end
    end
    
          # Creates a new filesystem importer that imports files relative to a given path.
      #
      # @param root [String] The root path.
      #   This importer will import files relative to this path.
      def initialize(root)
        @root = File.expand_path(root)
        @real_root = Sass::Util.realpath(@root).to_s
        @same_name_warnings = Set.new
      end
    
      gem 'rb-fsevent'
  gem 'kicker'
  gem 'awesome_print'
  gem 'ruby-prof', :platforms => [:ruby]
end

    
    # This bin wrapper runs the `pod` command in a OS X sandbox. The reason for this
# is to ensure that people can’t use malicious code from pod specifications.
#
# It does this by creating a ‘seatbelt’ profile on the fly and executing the
# given command through `/usr/bin/sandbox-exec`. This profile format is an
# undocumented format, which uses TinyScheme to implement its DSL.
#
# Even though it uses a undocumented format, it’s actually very self-explanatory.
# Because we use a whitelist approach, `(deny default)`, any action that is
# denied is logged to `/var/log/system.log`. So tailing that should provide
# enough information on steps that need to be take to get something to work.
#
# For more information see:
#
# * https://github.com/CocoaPods/CocoaPods/issues/939
# * http://reverse.put.as/wp-content/uploads/2011/08/The-Apple-Sandbox-BHDC2011-Slides.pdf
# * http://reverse.put.as/wp-content/uploads/2011/08/The-Apple-Sandbox-BHDC2011-Paper.pdf
# * https://github.com/s7ephen/OSX-Sandbox--Seatbelt--Profiles
# * `$ man sandbox-exec`
# * `$ ls /usr/share/sandbox`
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end
    
    lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'capistrano/version'
    
        def dry_run
      ['--dry-run', '-n',
       'Do a dry run without executing actions',
       lambda do |_value|
         Configuration.env.set(:sshkit_backend, SSHKit::Backend::Printer)
       end]
    end
    
            def fetch(key)
          @properties[key]
        end
    
          def servers_by_key
        @servers_by_key ||= {}
      end
    
    require_relative 'bundler'
require_relative 'rubygems'
require 'pathname'
    
        assert_no_match /Edit Page/,             last_response.body, ''Edit Page' link not blocked in compare template'
    assert_no_match /Revert Changes/,        last_response.body, ''Revert Changes' link not blocked in compare template'
  end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
        # Title is based on file name when h1_title is false.
    actual = @view.title
    assert_equal 'H1', title
  end
end

    
    opts = OptionParser.new do |opts|
  # define program name (although this defaults to the name of the file, just in case...)
  opts.program_name = 'gollum'
    
  # set basic info for the '--help' command (options will be appended automatically from the below definitions)
  opts.banner = '
  Gollum is a multi-format Wiki Engine/API/Frontend.
    
  Usage:
      gollum [options] [git-repo]
    
  Arguments:
      [git-repo]                     Path to the git repository being served. If not specified, current working directory is used.
  
  Notes:
      Paths for all options are relative to <git-repo> unless absolute.
      This message is only a basic description. For more information, please visit:
          https://github.com/gollum/gollum
  
  OPTIONS'
  
  # define gollum options  
  opts.separator ''
  opts.separator '  Major:'
  
  opts.on('-h', '--host [HOST]', 'Specify the hostname or IP address to listen on. Default: '0.0.0.0'.') do |host|
    options[:bind] = host
  end
  opts.on('-p', '--port [PORT]', 'Specify the port to bind Gollum with. Default: '4567'.') do |port|
    begin
      # don't use 'port.to_i' here... it doesn't raise errors which might result in a nice confusion later on
      options[:port] = Integer(port)
    rescue ArgumentError
      puts 'Error: '#{port}' is not a valid port number.'
      exit 1
    end
  end
  opts.on('-c', '--config [FILE]', 'Specify path to the Gollum's configuration file.') do |file|
    options[:config] = file
  end
  opts.on('-r', '--ref [REF]', 'Specify the branch to serve. Default: 'master'.') do |ref|
    wiki_options[:ref] = ref
  end
  opts.on('-a', '--adapter [ADAPTER]', 'Launch Gollum using a specific git adapter. Default: 'grit'.') do |adapter|
    Gollum::GIT_ADAPTER = adapter
  end
  opts.on('--bare', 'Declare '<git-repo>' to be bare. This is only necessary when using the grit adapter.') do
    wiki_options[:repo_is_bare] = true
  end
  opts.on('-b', '--base-path [PATH]', 'Specify the leading portion of all Gollum URLs (path info). Default: '/'.',
    'Example: setting this to '/wiki' will make the wiki accessible under 'http://localhost:4567/wiki/'.') do |base_path|
      
    # first trim a leading slash, if any
    base_path.sub!(/^\/+/, '')
    
    desc 'Initial setup for Octopress: copies the default theme into the path of Jekyll's generator. Rake install defaults to rake install[classic] to install a different theme run rake install[some_theme_name]'
task :install, :theme do |t, args|
  if File.directory?(source_dir) || File.directory?('sass')
    abort('rake aborted!') if ask('A theme is already installed, proceeding will overwrite existing files. Are you sure?', ['y', 'n']) == 'n'
  end
  # copy theme into working Jekyll directories
  theme = args.theme || 'classic'
  puts '## Copying '+theme+' theme into ./#{source_dir} and ./sass'
  mkdir_p source_dir
  cp_r '#{themes_dir}/#{theme}/source/.', source_dir
  mkdir_p 'sass'
  cp_r '#{themes_dir}/#{theme}/sass/.', 'sass'
  mkdir_p '#{source_dir}/#{posts_dir}'
  mkdir_p public_dir
end
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
    module Jekyll