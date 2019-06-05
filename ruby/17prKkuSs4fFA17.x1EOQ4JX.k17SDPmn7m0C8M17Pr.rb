
        
        def each_const
  DEFS.each {|name, default_value|
    guard = nil
    if /\A(AF_INET6|PF_INET6|IPV6_.*)\z/ =~ name
      # IPv6 is not supported although AF_INET6 is defined on mingw
      guard = 'defined(INET6)'
    end
    yield guard, name, default_value
  }
end
    
        if no_leap_seconds?
      assert_equal(78796800, Time.utc(1972, 7, 1, 0, 0, 0).tv_sec)
      assert_equal(78796801, Time.utc(1972, 7, 1, 0, 0, 1).tv_sec)
      assert_equal(946684800, Time.utc(2000, 1, 1, 0, 0, 0).tv_sec)
      assert_equal(0x7fffffff, Time.utc(2038, 1, 19, 3, 14, 7).tv_sec)
      assert_equal(0x80000000, Time.utc(2038, 1, 19, 3, 14, 8).tv_sec)
    else
      assert_equal(2, Time.utc(1972, 7, 1, 0, 0, 0) - Time.utc(1972, 6, 30, 23, 59, 59))
      assert_equal(78796800, Time.utc(1972, 6, 30, 23, 59, 60).tv_sec)
      assert_equal(78796801, Time.utc(1972, 7, 1, 0, 0, 0).tv_sec)
      assert_equal(78796802, Time.utc(1972, 7, 1, 0, 0, 1).tv_sec)
      assert_equal(946684822, Time.utc(2000, 1, 1, 0, 0, 0).tv_sec)
    end
  end
    
      # Send deprecation notices to registered listeners.
  config.active_support.deprecation = :notify
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
          # Custom destructuring method. This can be used to normalize
      # destructuring for different variations of the node.
      #
      # In this case, the `def` node destructures into:
      #
      #   `method_name, arguments, body`
      #
      # while the `defs` node destructures into:
      #
      #   `receiver, method_name, arguments, body`
      #
      # so we reverse the destructured array to get the optional receiver
      # at the end, where it can be discarded.
      #
      # @return [Array] the different parts of the `def` or `defs` node
      def node_parts
        to_a.reverse
      end
    end
  end
end

    
            def_node_matcher :erb_new_with_non_keyword_arguments, <<-PATTERN
          (send
            (const {nil? cbase} :ERB) :new $...)
        PATTERN
    
      option '--workdir', 'WORKDIR',
    'The directory you want fpm to do its work in, where 'work' is any file ' \
    'copying, downloading, etc. Roughly any scratch space fpm needs to build ' \
    'your package.', :default => Dir.tmpdir
    
        temporary_file_name = target_path + '~'
    
    class FPM::Package::NPM < FPM::Package
  class << self
    include FPM::Util
  end
  # Flags '--foo' will be accessable  as attributes[:npm_foo]
  option '--bin', 'NPM_EXECUTABLE',
    'The path to the npm executable you wish to run.', :default => 'npm'
    
      def to_s_extension; 'pkg'; end
    
        # Evaluate dependencies.
    if !attributes[:no_auto_depends?]
	    pkgdepend_gen = safesystemout('pkgdepend', 'generate',  '-md', '#{staging_path}',  manifest_fn)
      File.write(build_path('#{name}.p5m.3'), pkgdepend_gen)
    
      # Download the given package if necessary. If version is given, that version
  # will be downloaded, otherwise the latest is fetched.
  def download_if_necessary(package, version=nil)
    # TODO(sissel): this should just be a 'download' method, the 'if_necessary'
    # part should go elsewhere.
    path = package
    # If it's a path, assume local build.
    if File.directory?(path) or (File.exist?(path) and File.basename(path) == 'setup.py')
      return path
    end
    
        safesystem('tar', *args)
  end # def output
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
        args.flatten!.compact!
    
    require 'stringio'