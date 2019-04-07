
        
          it 'no errors without a user' do
    expect(-> { GivenDailyLike.increment_for(nil) }).not_to raise_error
    expect(-> { GivenDailyLike.decrement_for(nil) }).not_to raise_error
  end
    
    describe GroupUser do
    
        def show_message
      UI.message('Sending anonymous analytics information')
      UI.message('Learn more at https://docs.fastlane.tools/#metrics')
      UI.message('No personal or sensitive data is sent.')
      UI.message('You can disable this by adding `opt_out_usage` at the top of your Fastfile')
    end
    
          it 'sets the command to build' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(command: 'build')
          end').runner.execute(:test)
    
    # To avoid 'PR & Runs' for which tests don't pass, we want to make spec errors more visible
# The code below will run on Circle, parses the results in JSON and posts them to the PR as comment
containing_dir = ENV['CIRCLE_TEST_REPORTS'] || '.' # for local testing
file_path = File.join(containing_dir, 'rspec', 'fastlane-junit-results.xml')
    
      #
  # If there were CGI parameters in the URI, this will hold a hash of each
  # variable to value.  If there is more than one value for a given variable,
  # an array of each value is returned.
  #
  def qstring
    self.uri_parts['QueryString']
  end
    
      #
  # Move these into an IPMI stack or mixin at some point
  #
    
              # Encrypts the cipher using RC4-HMAC schema
          #
          # @param data [String] the data to encrypt
          # @param key [String] the key to encrypt
          # @param msg_type [Integer] the message type
          # @return [String] the encrypted data
          def encrypt_rc4_hmac(data, key, msg_type)
            k1 = OpenSSL::HMAC.digest('MD5', key, [msg_type].pack('V'))
    
              # Encodes the authenticator field
          #
          # @return [String]
          def encode_authenticator
            authenticator.encode
          end
        end
      end
    end
  end
end
    
                seq_values.each do |val|
              case val.tag
              when 0
                self.options = decode_options(val)
              when 1
                self.cname = decode_cname(val)
              when 2
                self.realm = decode_realm(val)
              when 3
                self.sname = decode_sname(val)
              when 4
                self.from = decode_from(val)
              when 5
                self.till = decode_till(val)
              when 6
                self.rtime = decode_rtime(val)
              when 7
                self.nonce = decode_nonce(val)
              when 8
                self.etype = decode_etype(val)
              when 10
                self.enc_auth_data = decode_enc_auth_data(val)
              else
                raise ::RuntimeError, 'Failed to decode KdcRequestBody SEQUENCE'
              end
            end
          end
    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end
    
            self
      end
    
          def page_name
        @name.gsub('-', ' ')
      end
    
      teardown do
    FileUtils.rm_r(File.join(File.dirname(__FILE__), *%w[examples test.git]))
  end
    
        @wiki.clear_cache
    assert_nil @wiki.paged('H', 'G')
    page_2 = @wiki.paged('C', 'G/K')
    assert_equal 'INITIAL\n\nSPAM2\n', page_2.raw_data
    assert_equal 'def', page_2.version.message
    assert_not_equal page_1.version.sha, page_2.version.sha
  end
    
        def initialize(dir, existing, attempted, message = nil)
      @dir            = dir
      @existing_path  = existing
      @attempted_path = attempted
      super(message || 'Cannot write #{@dir}/#{@attempted_path}, found #{@dir}/#{@existing_path}.')
    end
  end
end
    
    __END__
    
          def deliver(msg)
        if msg.respond_to?(:deliver_now)
          # Rails 4.2/5.0
          msg.deliver_now
        else
          # Rails 3.2/4.0/4.1
          msg.deliver
        end
      end
    end
    
        return [osname, osversion, arch, wordsize].join(':')
  end
    
        control_contents = File.read(pkginfo)
    FileUtils.rm(pkginfo)
    FileUtils.rm(mtree)
    
        return @architecture
  end # def architecture
    
      # mknod is __xmknod in glibc a wrapper around mknod to handle
  # various stat struct formats. See bits/stat.h in glibc source
  begin
    attach_function :mknod, :mknod, [:string, :uint, :ulong], :int
  rescue FFI::NotFoundError
    # glibc/io/xmknod.c int __xmknod (int vers, const char *path, mode_t mode, dev_t *dev)
    attach_function :xmknod, :__xmknod, [:int, :string, :uint, :pointer], :int
  end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
        context 'with alias' do
      it 'renders the tmux config' do
        rendered = project_with_alias.render
        expect(rendered).to_not be_empty
        expect(rendered).to include('alias_is_working')
      end
    end
  end
    
      describe '#home' do
    it 'is ~/.tmuxinator' do
      expect(described_class.home).to eq '#{ENV['HOME']}/.tmuxinator'
    end
  end