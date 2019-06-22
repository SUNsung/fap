
        
        module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
            # Attempt to find a user by its email. If a record is found, send new
        # password instructions to it. If user is not found, returns a new user
        # with an email not found error.
        # Attributes must contain the user's email
        def send_reset_password_instructions(attributes={})
          recoverable = find_or_initialize_with_errors(reset_password_keys, attributes, :not_found)
          recoverable.send_reset_password_instructions if recoverable.persisted?
          recoverable
        end
    
    def reverse_each_name_with_prefix_optional(pat, prefix_pat)
  reverse_each_name(pat) {|n|
    yield n, n
  }
  if prefix_pat
    reverse_each_name(pat) {|n|
      next if prefix_pat !~ n
      yield n, $'
    }
  end
end
    
      #
  # Scanner Events
  #
    
      def test_to_a
    assert_equal([], @cls[].to_a)
    assert_equal([[1,2]], @cls[ 1=>2 ].to_a)
    a = @cls[ 1=>2, 3=>4, 5=>6 ].to_a
    assert_equal([1,2], a.delete([1,2]))
    assert_equal([3,4], a.delete([3,4]))
    assert_equal([5,6], a.delete([5,6]))
    assert_equal(0, a.length)
    
      def test_set_encoding_invalid
    pipe(proc do |w|
           w << '\x80'
           w.close
         end,
         proc do |r|
           r.set_encoding('utf-8:euc-jp', :invalid=>:replace)
           assert_equal('?', r.read)
         end)
  end
    
            opts.on '--ruby VAL', 'Path to ruby which is used at -j option' do |a|
          options[:ruby] = a.split(/ /).reject(&:empty?)
        end
      end
    
      def test_read_command
    assert_equal('foo\n', IO.read('|echo foo'))
    assert_raise(Errno::ENOENT, Errno::EINVAL) do
      File.read('|#{EnvUtil.rubybin} -e puts')
    end
    assert_raise(Errno::ENOENT, Errno::EINVAL) do
      File.binread('|#{EnvUtil.rubybin} -e puts')
    end
    assert_raise(Errno::ENOENT, Errno::EINVAL) do
      Class.new(IO).read('|#{EnvUtil.rubybin} -e puts')
    end
    assert_raise(Errno::ENOENT, Errno::EINVAL) do
      Class.new(IO).binread('|#{EnvUtil.rubybin} -e puts')
    end
  end
    
    
  config.vm.define 'centos6' do |centos6|
    centos6.vm.box = 'puppetlabs/centos-6.6-64-puppet'
  end
    
            # If the instance variable @{attr} is defined, then
        # it means the flag was given on the command line.
        flag_given = instance_variable_defined?('@#{attr}')
        input.attributes['#{attr}_given?'.to_sym] = flag_given
        attr = '#{attr}?' if !respond_to?(attr) # handle boolean :flag cases
        input.attributes[attr.to_sym] = send(attr) if respond_to?(attr)
        logger.debug('Setting attribute', attr.to_sym => send(attr))
      end
    end
    
            until(data.length == record_length)
          data << file.read(TAR_CHUNK_SIZE)
        end
    
        logger.info('Installing pear package', :package => input_package,
                  :directory => staging_path)
    ::Dir.chdir(staging_path) do
      safesystem('pear', '-c', config, 'install', '-n', '-f', input_package)
    end
    
      # Input a package.
  #
  # The 'package' can be any of:
  #
  # * A name of a package on pypi (ie; easy_install some-package)
  # * The path to a directory containing setup.py
  # * The path to a setup.py
  def input(package)
    path_to_package = download_if_necessary(package, version)
    
      # Input a zipfile.
  def input(input_path)
    # use part of the filename as the package name
    self.name = File.extname(input_path)[1..-1]