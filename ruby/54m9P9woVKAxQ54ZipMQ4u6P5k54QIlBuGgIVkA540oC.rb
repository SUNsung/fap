
        
          bottle_ext && bottle_url_ext && bottle_ext != bottle_url_ext
end
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
      # True if a {Formula} is being built with {Formula.stable} instead of {Formula.devel} or {Formula.head}. This is the default.
  # <pre>args << '--some-beta' if build.devel?</pre>
  def stable?
    !(head? || devel?)
  end
    
          prune = ARGV.value 'prune'
    
      def xcode
    if instance_variable_defined?(:@xcode)
      @xcode
    elsif MacOS::Xcode.installed?
      @xcode = MacOS::Xcode.version
      @xcode += ' => #{MacOS::Xcode.prefix}' unless MacOS::Xcode.default_prefix?
      @xcode
    end
  end
    
          To export the needed variables, add them to your dotfiles.
       * On Bash, add them to `~/.bash_profile`.
       * On Zsh, add them to `~/.zprofile` instead.
    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
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
    
            # Called after the configuration is finalized and loaded to validate
        # this object.
        #
        # @param [Machine] machine Access to the machine that is being
        #   validated.
        # @return [Hash]
        def validate(machine)
          return { self.to_s => _detected_errors }
        end
    
        # Returns an array populated with the keys of this object.
    #
    # @return [Array]
    def keys
      @items.keys
    end
    
            @user.send_confirmation_instructions
      end
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
      def update
    params.require([:id])
    
      before_action :require_user!
    
      def self.provides_callback_for(provider)
    provider_id = provider.to_s.chomp '_oauth2'
    
        describe 'X' do
      it 'converts argument as a hexadecimal number with uppercase letters' do
        format('%X', 196).should == 'C4'
      end
    
      it 'does not raise an error on a tainted, frozen object' do
    o = Object.new.taint.freeze
    o.taint.should equal(o)
  end
    
      it 'is a private method' do
    Kernel.should have_private_instance_method(:test)
  end
    
      it 'does not call #write on $stderr if $VERBOSE is nil' do
    lambda {
      $VERBOSE = nil
      warn('this is some simple text')
    }.should output(nil, '')
  end
    
      it 'returns the method name as symbol' do
    eval(@code, TOPLEVEL_BINDING).should equal :boom
  end
end

    
            # Sends a Kerberos Request over a tcp connection
        #
        # @param req [Rex::Proto::Kerberos::Model::KdcRequest] the request to send
        # @return [Integer] the number of bytes sent
        # @raise [RuntimeError] if the request can't be encoded
        def send_request_tcp(req)
          data = req.encode
          length = [data.length].pack('N')
          connection.put(length + data)
        end
    
              # Decodes the pvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_pvno(input)
            input.value[0].value.to_i
          end
    
              # Decodes the key_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
                  execute_command 'xcodebuild -workspace '#{workspace_path}' -scheme '#{scheme_name}' clean build #{test_flag} ONLY_ACTIVE_ARCH=NO -destination 'platform=iOS Simulator,name=iPhone 7''
            else
              raise 'Unknown platform #{platform}'
            end
          end
        end
      end
    end
  end
    
    Then(/^directories referenced in :linked_files are created in shared$/) do
  dirs = TestApp.linked_files.map { |path| TestApp.shared_path.join(path).dirname }
  dirs.each do |dir|
    run_vagrant_command(test_dir_exists(dir))
  end
end
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          !value.nil?
    end
    
          def print_deprecation_warnings_if_applicable
        if using_default_scm?
          warn_add_git_to_capfile unless scm_plugin_installed?
        elsif built_in_scm_name?
          warn_set_scm_is_deprecated
        elsif third_party_scm_name?
          warn_third_party_scm_must_be_upgraded
        end
      end
    
          def add_property(key, value)
        if respond_to?('#{key}=')
          send('#{key}=', value)
        else
          set(key, value)
        end
      end
    
          # Given a callable that provides a value, wrap the callable with another
      # object that responds to `call`. This new object will perform validation
      # and then return the original callable's value.
      #
      # If the callable is a `Question`, the object returned by this method will
      # also be a `Question` (a `ValidatedQuestion`, to be precise). This
      # ensures that `is_a?(Question)` remains true even after the validation
      # wrapper is applied. This is needed so that `Configuration#is_question?`
      # works as expected.
      #
      def assert_valid_later(key, callable)
        validation_callback = lambda do
          value = callable.call
          assert_valid_now(key, value)
          value
        end