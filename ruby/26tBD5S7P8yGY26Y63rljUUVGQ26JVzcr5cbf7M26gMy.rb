
        
        Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
    def location(folder, direction)
  if folder
    before = folder if direction == 'in'
    after  = folder if direction == 'under'
  end
    
        def arg_is_present?(args, deprecated_argument, message)
      deprecation_message(message) if args.include?(deprecated_argument)
    end
    
    (allow file-write*
  (literal
    '/dev/dtracehelper'
    '/dev/null'
  )
  (regex
    #'^<%= Pod::Config.instance.project_root %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
    #'^/Users/[^.]+/Library/Caches/CocoaPods/*'
    #'^/dev/tty'
    #'^/private/var'
  )
)
    
          PluginManager.ui.info('Install successful')
    rescue ::Bundler::BundlerError => e
      raise PluginManager::InstallError.new(e), 'An error occurred went installing plugins'
    ensure
      FileUtils.rm_rf(uncompressed_path) if uncompressed_path && Dir.exist?(uncompressed_path)
    end
    
        # force a disk sync before running bundler
    gemfile.save
    
    
  config.vm.define 'centos6' do |centos6|
    centos6.vm.box = 'puppetlabs/centos-6.6-64-puppet'
  end
    
        sans_size = TAR_CHUNK_SIZE-1
    
        logger['method'] = 'input'
    begin
      ::Dir.chdir(chdir) do
        begin
          clone(source, destination)
        rescue Errno::ENOENT => e
          raise FPM::InvalidPackageConfiguration,
            'Cannot package the path '#{File.join(chdir, source)}', does it exist?'
        end
      end
    rescue Errno::ENOENT => e
      raise FPM::InvalidPackageConfiguration,
        'Cannot chdir to '#{chdir}'. Does it exist?'
    end
    
      def parse_install_script(path)
    global_lines = []
    look_for = Set.new(['pre_install', 'post_install',
                        'pre_upgrade', 'post_upgrade',
                        'pre_remove', 'post_remove'])
    functions = {}
    look_for.each do |fname|
      functions[fname] = []
    end
    
    
    
        # Some setup.py's assume $PWD == current directory of setup.py, so let's
    # chdir first.
    ::Dir.chdir(project_dir) do
      flags = [ '--root', staging_path ]
      if !attributes[:python_install_lib].nil?
        flags += [ '--install-lib', File.join(prefix, attributes[:python_install_lib]) ]
      elsif !attributes[:prefix].nil?
        # setup.py install --prefix PREFIX still installs libs to
        # PREFIX/lib64/python2.7/site-packages/
        # but we really want something saner.
        #
        # since prefix is given, but not python_install_lib, assume PREFIX/lib
        flags += [ '--install-lib', File.join(prefix, 'lib') ]
      end
    
        # Unpack the tarball to the staging path
    args = ['-cf', output_path, '-C', staging_path]
    tar_compression_flag(output_path).tap do |flag|
      args << flag unless flag.nil?
    end
    args << '.'