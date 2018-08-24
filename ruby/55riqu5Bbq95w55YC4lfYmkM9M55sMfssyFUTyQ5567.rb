
        
        Given(%r!^I have a configuration file with '(.*)' set to '(.*)'$!) do |key, value|
  config = \
    if source_dir.join('_config.yml').exist?
      SafeYAML.load_file(source_dir.join('_config.yml'))
    else
      {}
    end
  config[key] = YAML.load(value)
  Jekyll.set_timezone(value) if key == 'timezone'
  File.write('_config.yml', YAML.dump(config))
end
    
        # Extract options for this collection from the site configuration.
    #
    # Returns the metadata for this collection
    def extract_metadata
      if site.config['collections'].is_a?(Hash)
        site.config['collections'][label] || {}
      else
        {}
      end
    end
    
    module Jekyll
  module Commands
    class Doctor < Command
      class << self
        def init_with_program(prog)
          prog.command(:doctor) do |c|
            c.syntax 'doctor'
            c.description 'Search site and print specific deprecation warnings'
            c.alias(:hyde)
    
              File.open(File.expand_path(initialized_post_name, new_blog_path), 'w') do |f|
            f.write(scaffold_post_content)
          end
    
      it 'correctly sets notification level' do
    moderator = Fabricate(:moderator)
    
            post_args[:topic].notify_muted!(user)
        expect {
          Fabricate(:post, user: user2, topic: post.topic, raw: 'hello @' + user.username)
        }.to change(user.notifications, :count).by(0)
      end
    end
    
    User.seed do |u|
  u.id = -1
  u.name = 'system'
  u.username = 'system'
  u.username_lower = 'system'
  u.password = SecureRandom.hex
  u.active = true
  u.admin = true
  u.moderator = true
  u.approved = true
  u.trust_level = TrustLevel[4]
end
    
          it 'left-justifies the result if width is negative' do
        format('%*b', -10, 10).should == '1010      '
        format('%*B', -10, 10).should == '1010      '
        format('%*d', -10, 112).should == '112       '
        format('%*i', -10, 112).should == '112       '
        format('%*o', -10, 87).should == '127       '
        format('%*u', -10, 112).should == '112       '
        format('%*x', -10, 196).should == 'c4        '
        format('%*X', -10, 196).should == 'C4        '
    
      it 'returns false when the command exits with a non-zero exit status' do
    @object.system(ruby_cmd('exit 1')).should == false
    
      it 'no raises a RuntimeError on symbols' do
    v = :sym
    lambda { v.taint }.should_not raise_error(RuntimeError)
    v.tainted?.should == false
  end
    
        each_pair { |var, val|
      if self.fold
        str << '#{var}:\r\n\t#{val}\r\n'
      else
        str << '#{var}: #{val}\r\n'
      end
    }
    
    
  #
  # Payload types were copied from xCAT-server source code (IPMI.pm)
  #
  RMCP_ERRORS = {
    1 => 'Insufficient resources to create new session (wait for existing sessions to timeout)',
    2 => 'Invalid Session ID', #this shouldn't occur...
    3 => 'Invalid payload type',#shouldn't occur..
    4 => 'Invalid authentication algorithm', #if this happens, we need to enhance our mechanism for detecting supported auth algorithms
    5 => 'Invalid integrity algorithm', #same as above
    6 => 'No matching authentication payload',
    7 => 'No matching integrity payload',
    8 => 'Inactive Session ID', #this suggests the session was timed out while trying to negotiate, shouldn't happen
    9 => 'Invalid role',
    0xa => 'Unauthorised role or privilege level requested',
    0xb => 'Insufficient resources to create a session at the requested role',
    0xc => 'Invalid username length',
    0xd => 'Unauthorized name',
    0xe => 'Unauthorized GUID',
    0xf => 'Invalid integrity check value',
    0x10 => 'Invalid confidentiality algorithm',
    0x11 => 'No cipher suite match with proposed security algorithms',
    0x12 => 'Illegal or unrecognized parameter', #have never observed this, would most likely mean a bug in xCAT or IPMI device
  }
    
            # Sends a kerberos request, and reads the response through the connection
        #
        # @param req [Rex::Proto::Kerberos::Model::KdcRequest] the request to send
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] The kerberos message
        # @raise [RuntimeError] if the transport protocol is unknown or the response can't be parsed.
        # @raise [NotImplementedError] if the transport protocol isn't supported
        def send_recv(req)
          send_request(req)
          res = recv_response
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Time into an String
          #
          # @return [String] encoded time
          def encode
            encoded = ''
            encoded << encode_auth_time
            encoded << encode_start_time
            encoded << encode_end_time
            encoded << encode_renew_time
    
              # Encodes the checksum field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_checksum
            OpenSSL::ASN1::OctetString.new(checksum)
          end
        end
      end
    end
  end
end
    
              # Decodes the till field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_till(input)
            input.value[0].value
          end
    
      include_examples 'multiline literal brace layout' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
    let(:multi_prefix) { 'b: ' }
    let(:multi) do
      <<-RUBY.strip_indent.chomp
        [
        1
        ]
      RUBY
    end
  end
    
        # Check requiring libraries successfully.
    # See https://github.com/rubocop-hq/rubocop/pull/4523#issuecomment-309136113
    def check_requiring_libraries
      sh!('ruby -I lib -r rubocop -e 'exit 0'')
    end
    
            def replacement_range(node, end_pos)
          Parser::Source::Range.new(node.loc.expression.source_buffer,
                                    node.loc.expression.begin_pos,
                                    end_pos)
        end
      end
    end
  end
end

    
              check(node)
        end
    
    module RuboCop
  module AST
    # A node extension for `case` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `case` nodes within RuboCop.
    class CaseNode < Node
      include ConditionalNode
    
          # Checks whether the `if` node has at least one `elsif` branch. Returns
      # true if this `if` node itself is an `elsif`.
      #
      # @return [Boolean] whether the `if` node has at least one `elsif` branch
      def elsif_conditional?
        else_branch && else_branch.if_type? && else_branch.elsif?
      end