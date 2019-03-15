
        
              it 'allows a single array to be passed to support older Fastlane syntax' do
        expect_command('ls -la /tmp')
        Fastlane::Actions.sh(['ls -la', '/tmp'])
      end
    end
    
        # Determines the defined data type of this ConfigItem
    def data_type
      if @data_type.kind_of?(Symbol)
        nil
      elsif @data_type
        @data_type
      else
        (@is_string ? String : nil)
      end
    end
    
              values = {
              foo: '',
              bar: ''
          }
    
    # test shellescape Windows implementation directly
describe 'WindowsShellwords#shellescape' do
  os = 'windows'
  shellescape_testcases.each do |testcase|
    it testcase['it'] + ': ' + testcase['it_result'][os] do
      str = testcase['str']
      escaped = WindowsShellwords.shellescape(str)
    
          # Sets a cache key to the given value.
      #
      # key - The cache key to write.
      # value - The value to set.
      # timeout - The time after which the cache key should expire.
      def self.write(raw_key, value, timeout: TIMEOUT)
        key = cache_key_for(raw_key)
    
          # Returns the database ID for the object.
      #
      # This method will return `nil` if no ID could be found.
      def database_id
        val = Caching.read(cache_key)
    
            # Builds a new note using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          hash = Representation.symbolize_hash(raw_hash)
          hash[:author] &&= Representation::User.from_json_hash(hash[:author])
    
        # Short circuit for a `fpm --version` or `fpm -v` short invocation that 
    # is the user asking us for the version of fpm.
    if run_args == [ '-v' ] || run_args == [ '--version' ]
      puts FPM::VERSION
      return 0
    end
    
        header = extension_header = ''
    data = extension_data = ''
    record_length = extension_length = 0
    empty_records = 0
    
        npm_flags = []
    settings.each do |key, value|
      # npm lets you specify settings in a .npmrc but the same key=value settings
      # are valid as '--key value' command arguments to npm. Woo!
      logger.debug('Configuring npm', key => value)
      npm_flags += [ '--#{key}', value ]
    end
    
      # Output a pkgbuild pkg.
  def output(output_path)
    output_check(output_path)
    
        # Licenses could include more than one.
    # Speaking of just taking the first entry of the field:
    # A crude thing to do, but I suppose it's better than nothing.
    # -- Daniel Haskin, 3/24/2015
    self.license = control['license'][0] || self.license
    
      option '--channel', 'CHANNEL_URL',
    'The pear channel url to use instead of the default.'
    
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
    
        # Write the scripts, too.
    write_scripts