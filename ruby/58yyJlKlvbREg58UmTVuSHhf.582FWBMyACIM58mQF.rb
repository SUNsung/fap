
        
        module LogStash
  module PluginManager
  end
end
    
      private
    
      def validate_cache_location
    cache_location = LogStash::Environment::CACHE_PATH
    if File.exist?(cache_location)
      puts('Directory #{cache_location} is going to be overwritten, do you want to continue? (Y/N)')
      override = ( 'y' == STDIN.gets.strip.downcase ? true : false)
      if override
        FileUtils.rm_rf(cache_location)
      else
        puts('Unpack cancelled: file #{cache_location} already exists, please delete or move it')
        exit
      end
    end
  end
end

    
        # Attributes are special! We do not want to remove the default values of
    # the destination package type unless their value is specified on the
    # source package object.
    pkg.attributes.merge!(self.attributes)
    
        for i in 0..(TAR_CHUNK_SIZE-1)
      checksum += header.getbyte(i)
    end
    
        settings['registry'] = attributes[:npm_registry] if attributes[:npm_registry_given?]
    set_default_prefix unless attributes[:prefix_given?]
    
      def generate_mtree
    ::Dir.chdir(build_path) do
      cmd = 'LANG=C bsdtar '
      cmd += '-czf .MTREE '
      cmd += '--format=mtree '
      cmd += '--options='!all,use-set,type,uid,gid,mode,time,size,md5,sha256,link' '
      cmd += ::Dir.entries('.').reject{|entry| entry =~ /^\.{1,2}$/ }.join(' ')
      safesystem(cmd)
    end
  end # def generate_mtree
    
      private
  def input(command)
    platforms = [
      ::PleaseRun::Platform::Systemd.new('default'), # RHEL 7, Fedora 19+, Debian 8, Ubuntu 16.04
      ::PleaseRun::Platform::Upstart.new('1.5'), # Recent Ubuntus
      ::PleaseRun::Platform::Upstart.new('0.6.5'), # CentOS 6
      ::PleaseRun::Platform::Launchd.new('10.9'), # OS X
      ::PleaseRun::Platform::SYSV.new('lsb-3.1') # Ancient stuff
    ]
    pleaserun_attributes = [ 'chdir', 'user', 'group', 'umask', 'chroot', 'nice', 'limit_coredump',
                             'limit_cputime', 'limit_data', 'limit_file_size', 'limit_locked_memory',
                             'limit_open_files', 'limit_user_processes', 'limit_physical_memory', 'limit_stack_size',
                             'log_directory', 'log_file_stderr', 'log_file_stdout']
    
        ::Dir.mkdir(params[:output])
    builddir = ::Dir.pwd
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end