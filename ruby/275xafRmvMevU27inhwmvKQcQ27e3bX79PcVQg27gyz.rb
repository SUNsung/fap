
        
              def is_create_page
        false
      end
    
    desc 'Build and install'
task :install => :build do
  sh 'gem install --local --no-ri --no-rdoc pkg/#{name}-#{version}.gem'
end
    
        COP_NAME_PATTERN = '([A-Z]\w+/)?(?:[A-Z]\w+)'.freeze
    COP_NAMES_PATTERN = '(?:#{COP_NAME_PATTERN} , )*#{COP_NAME_PATTERN}'.freeze
    COPS_PATTERN = '(all|#{COP_NAMES_PATTERN})'.freeze
    
    # Create two output packages!
output_packages = []
output_packages << pleaserun.convert(FPM::Package::RPM)
output_packages << pleaserun.convert(FPM::Package::Deb)
    
        # The only way to get npm to respect the 'prefix' setting appears to
    # be to set the --global flag.
    #install_args << '--global'
    install_args += npm_flags
    
      option '--bin-dir', 'BIN_DIR',
    'Directory to put binaries in'
    
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
    
      def build!(params)
    # TODO(sissel): Support these somehow, perhaps with execs and files.
    self.scripts.each do |name, path|
      case name
        when 'pre-install'
        when 'post-install'
        when 'pre-uninstall'
        when 'post-uninstall'
      end # case name
    end # self.scripts.each