
        
        def converted_history(markdown)
  remove_head_from_history(
    custom_release_header_anchors(
      liquid_escape(
        linkify(
          normalize_bullets(markdown)
        )
      )
    )
  )
end
    
    Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
            # Returns the instance variables as a hash of key-value pairs.
        def instance_variables_hash
          instance_variables.inject({}) do |acc, iv|
            acc[iv.to_s[1..-1]] = instance_variable_get(iv)
            acc
          end
        end
    
            # Mounts a shared folder.
        #
        # This method should create, mount, and properly set permissions
        # on the shared folder. This method should also properly
        # adhere to any configuration values such as `shared_folder_uid`
        # on `config.vm`.
        #
        # @param [String] name The name of the shared folder.
        # @param [String] guestpath The path on the machine which the user
        #   wants the folder mounted.
        # @param [Hash] options Additional options for the shared folder
        #   which can be honored.
        def mount_shared_folder(name, guestpath, options)
          raise BaseError, _key: :unsupported_shared_folder
        end
    
            # Registers additional provisioners to be available.
        #
        # @param [String] name Name of the provisioner.
        def self.provisioner(name=UNSET_VALUE, &block)
          data[:provisioners] ||= Registry.new
    
            # The configuration for this provisioner. This will be an instance of
        # the `Config` class which is part of the provisioner.
        attr_reader :config
    
            # Defines a capability for the given host. The block should return
        # a class/module that has a method with the capability name, ready
        # to be executed. This means that if it is an instance method,
        # the block should return an instance of the class.
        #
        # @param [String] host The name of the host
        # @param [String] cap The name of the capability
        def self.host_capability(host, cap, &block)
          components.host_capabilities[host.to_sym].register(cap.to_sym, &block)
          nil
        end
    
      it 'raises a TypeError when passed nil' do
    lambda { sleep(nil)   }.should raise_error(TypeError)
  end
    
      # String arguments should be evaluated in the context of the caller.
  it 'accepts a String argument instead of a Proc or block' do
    trace_var :$Kernel_trace_var_global, '$Kernel_trace_var_extra = true'
    
        private
    
      # Eager load code on boot. This eager loads most of Rails and
  # your application in memory, allowing both thread web servers
  # and those relying on copy on write to perform better.
  # Rake tasks automatically ignore this option for performance.
  config.eager_load = true
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
          # Checks whether any argument of the node is a splat
      # argument, i.e. `*splat`.
      #
      # @return [Boolean] whether the node is a splat argument
      def splat_argument?
        arguments? &&
          (arguments.any?(&:splat_type?) || arguments.any?(&:restarg_type?))
      end
      alias rest_argument? splat_argument?