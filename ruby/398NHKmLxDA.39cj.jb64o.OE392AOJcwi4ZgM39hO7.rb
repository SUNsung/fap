
        
              def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :tag,
                                       env_name: 'FL_GIT_TAG_TAG',
                                       description: 'Define your own tag text. This will replace all other parameters',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :grouping,
                                       env_name: 'FL_GIT_TAG_GROUPING',
                                       description: 'Is used to keep your tags organised under one 'folder'',
                                       default_value: 'builds'),
          FastlaneCore::ConfigItem.new(key: :prefix,
                                       env_name: 'FL_GIT_TAG_PREFIX',
                                       description: 'Anything you want to put in front of the version number (e.g. 'v')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :postfix,
                                       env_name: 'FL_GIT_TAG_POSTFIX',
                                       description: 'Anything you want to put at the end of the version number (e.g. '-RC1')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :build_number,
                                       env_name: 'FL_GIT_TAG_BUILD_NUMBER',
                                       description: 'The build number. Defaults to the result of increment_build_number if you\'re using it',
                                       default_value: Actions.lane_context[Actions::SharedValues::BUILD_NUMBER],
                                       default_value_dynamic: true,
                                       is_string: false),
          FastlaneCore::ConfigItem.new(key: :message,
                                       env_name: 'FL_GIT_TAG_MESSAGE',
                                       description: 'The tag message. Defaults to the tag's name',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :commit,
                                       env_name: 'FL_GIT_TAG_COMMIT',
                                       description: 'The commit or object where the tag will be set. Defaults to the current HEAD',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :force,
                                       env_name: 'FL_GIT_TAG_FORCE',
                                       description: 'Force adding the tag',
                                       optional: true,
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :sign,
                                       env_name: 'FL_GIT_TAG_SIGN',
                                       description: 'Make a GPG-signed tag, using the default e-mail address's key',
                                       optional: true,
                                       is_string: false,
                                       default_value: false)
        ]
      end
    
            inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        pseudocommand = 'git log --pretty=\'%s%n%b\' #{inner_command.shellescape}...HEAD'
        expect(result).to eq(pseudocommand)
      end
    
        context 'external commands are failed' do
      context 'with error_callback' do
        it 'doesn't raise shell_error' do
          allow(FastlaneCore::UI).to receive(:error)
          called = false
          expect_command('exit 1', exitstatus: 1)
          Fastlane::Actions.sh('exit 1', error_callback: ->(_) { called = true })
    
            Redis::Cache.with do |redis|
          redis.expire(key, timeout)
        end
      end
    
            def importer_class
          DiffNoteImporter
        end
    
                rows << {
              label_id: label_id,
              target_id: target_id,
              target_type: issue.issuable_type,
              created_at: time,
              updated_at: time
            }
          end
    
                yield object
    
              hash = {
            iid: issue.number,
            title: issue.title,
            description: issue.body,
            milestone_number: issue.milestone&.number,
            state: issue.state == 'open' ? :opened : :closed,
            assignees: issue.assignees.map do |u|
              Representation::User.from_api_response(u)
            end,
            label_names: issue.labels.map(&:name),
            author: user,
            created_at: issue.created_at,
            updated_at: issue.updated_at,
            pull_request: issue.pull_request ? true : false
          }
    
          # Converts to the structure used by the JSON
      def to_json_struct
        {
          'local_data_path'  => @local_data_path.to_s,
          'name'             => @name,
          'provider'         => @provider,
          'state'            => @state,
          'vagrantfile_name' => @vagrantfile_name,
          'vagrantfile_path' => @vagrantfile_path.to_s,
          'updated_at'       => @updated_at,
          'extra_data'       => @extra_data,
        }
      end
    end
  end
end

    
              opts.parse!(argv)
          return argv
        rescue OptionParser::InvalidOption
          raise Errors::CLIInvalidOptions, help: opts.help.chomp
        end
    
            # This returns all registered provisioners.
        #
        # @return [Hash]
        def provisioners
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.provisioner)
            end
          end
        end
    
            # This method is called if the underlying machine ID changes. Providers
        # can use this method to load in new data for the actual backing
        # machine or to realize that the machine is now gone (the ID can
        # become `nil`). No parameters are given, since the underlying machine
        # is simply the machine instance given to this object. And no
        # return value is necessary.
        def machine_id_changed
        end
    
        # Checks if this registry has any items.
    #
    # @return [Boolean]
    def empty?
      @items.keys.empty?
    end
    
    =begin
 +------+----------------+-------------------------------------------+
   | HEX  | NAME           | DESCRIPTION                               |
   +------+----------------+-------------------------------------------+
   | HEX  | NAME           | DESCRIPTION                               |
   | 0x01 | CALLED NUMBER  | Number/extension being called             |
   | 0x02 | CALLING NUMBER | Calling number                            |
   | 0x03 | CALLING ANI    | Calling number ANI for billing            |
   | 0x04 | CALLING NAME   | Name of caller                            |
   | 0x05 | CALLED CONTEXT | Context for number                        |
   | 0x06 | USERNAME       | Username (peer or user) for               |
   |      |                | authentication                            |
   | 0x07 | PASSWORD       | Password for authentication               |
   | 0x08 | CAPABILITY     | Actual CODEC capability                   |
   | 0x09 | FORMAT         | Desired CODEC format                      |
   | 0x0a | LANGUAGE       | Desired language                          |
   | 0x0b | VERSION        | Protocol version                          |
   | 0x0c | ADSICPE        | CPE ADSI capability                       |
   | 0x0d | DNID           | Originally dialed DNID                    |
   | 0x0e | AUTHMETHODS    | Authentication method(s)                  |
   | 0x0f | CHALLENGE      | Challenge data for MD5/RSA                |
   | 0x10 | MD5 RESULT     | MD5 challenge result                      |
   | 0x11 | RSA RESULT     | RSA challenge result                      |
   | 0x12 | APPARENT ADDR  | Apparent address of peer                  |
   | 0x13 | REFRESH        | When to refresh registration              |
   | 0x14 | DPSTATUS       | Dialplan status                           |
   | 0x15 | CALLNO         | Call number of peer                       |
   | 0x16 | CAUSE          | Cause                                     |
   | 0x17 | IAX UNKNOWN    | Unknown IAX command                       |
   | 0x18 | MSGCOUNT       | How many messages waiting                 |
   | 0x19 | AUTOANSWER     | Request auto-answering                    |
   | 0x1a | MUSICONHOLD    | Request musiconhold with QUELCH           |
   | 0x1b | TRANSFERID     | Transfer Request Identifier               |
   | 0x1c | RDNIS          | Referring DNIS                            |
   | 0x1d | Reserved       | Reserved for future use                   |
   | 0x1e | Reserved       | Reserved for future use                   |
   | 0x1f | DATETIME       | Date/Time                                 |
   | 0x20 | Reserved       | Reserved for future use                   |
   | 0x21 | Reserved       | Reserved for future use                   |
   | 0x22 | Reserved       | Reserved for future use                   |
   | 0x23 | Reserved       | Reserved for future use                   |
   | 0x24 | Reserved       | Reserved for future use                   |
   | 0x25 | Reserved       | Reserved for future use                   |
   | 0x26 | CALLINGPRES    | Calling presentation                      |
   | 0x27 | CALLINGTON     | Calling type of number                    |
   | 0x28 | CALLINGTNS     | Calling transit network select            |
   | 0x29 | SAMPLINGRATE   | Supported sampling rates                  |
   | 0x2a | CAUSECODE      | Hangup cause                              |
   | 0x2b | ENCRYPTION     | Encryption format                         |
   | 0x2c | ENCKEY         | Reserved for future Use                   |
   | 0x2d | CODEC PREFS    | CODEC Negotiation                         |
   | 0x2e | RR JITTER      | Received jitter, as in RFC 3550           |
   | 0x2f | RR LOSS        | Received loss, as in RFC 3550             |
   | 0x30 | RR PKTS        | Received frames                           |
   | 0x31 | RR DELAY       | Max playout delay for received frames in  |
   |      |                | ms                                        |
   | 0x32 | RR DROPPED     | Dropped frames (presumably by jitter      |
   |      |                | buffer)                                   |
   | 0x33 | RR OOO         | Frames received Out of Order              |
   | 0x34 | OSPTOKEN       | OSP Token Block                           |
   +------+----------------+-------------------------------------------+
=end
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Encodes a Rex::Proto::Kerberos::Model::AuthorizationData into an ASN.1 String
          #
          # @return [String]
          def encode
            seqs = []
            elements.each do |elem|
              elems = []
              type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_type(elem[:type])], 0, :CONTEXT_SPECIFIC)
              elems << type_asn1
              data_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_data(elem[:data])], 1, :CONTEXT_SPECIFIC)
              elems << data_asn1
              seqs << OpenSSL::ASN1::Sequence.new(elems)
            end
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
              # Retrieves the element class fields
          #
          # @return [Array]
          def self.attributes
            @attributes
          end
    
              # Decodes the etype field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Array<Integer>]
          def decode_etype(input)
            encs = []
            input.value[0].value.each do |enc|
              encs << enc.value.to_i
            end
            encs
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::KrbError from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
    #{stack}
#{executable_path}
### Plugins
    
      class OfflinePluginPackager
    LOGSTASH_DIR = 'logstash'
    DEPENDENCIES_DIR = ::File.join(LOGSTASH_DIR, 'dependencies')
    
      def target_file
    target_file = File.join(LogStash::Environment::LOGSTASH_HOME, 'plugins_package')
    '#{target_file}#{file_extension}'
  end
end

    
      # create list of plugins to update
  def plugins_to_update(previous_gem_specs_map)
    if update_all?
      previous_gem_specs_map.values.map{|spec| spec.name}
    else
      # If the plugins isn't available in the gemspec or in 
      # the gemfile defined with a local path, we assume the plugins is not
      # installed.
      not_installed = plugins_arg.select{|plugin| !previous_gem_specs_map.has_key?(plugin.downcase) && !gemfile.find(plugin) }
      signal_error('Plugin #{not_installed.join(', ')} is not installed so it cannot be updated, aborting') unless not_installed.empty?
      plugins_arg
    end
  end
    
          def string_to_code(string)
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
          def toc_content
        @toc_content
      end
    
    opts = OptionParser.new do |opts|
  # define program name (although this defaults to the name of the file, just in case...)
  opts.program_name = 'gollum'
    
  # set basic info for the '--help' command (options will be appended automatically from the below definitions)
  opts.banner = '
  Gollum is a multi-format Wiki Engine/API/Frontend.
    
  Usage:
      gollum [options] [git-repo]
    
  Arguments:
      [git-repo]                     Path to the git repository being served. If not specified, current working directory is used.
  
  Notes:
      Paths for all options are relative to <git-repo> unless absolute.
      This message is only a basic description. For more information, please visit:
          https://github.com/gollum/gollum
  
  OPTIONS'
  
  # define gollum options  
  opts.separator ''
  opts.separator '  Major:'
  
  opts.on('-h', '--host [HOST]', 'Specify the hostname or IP address to listen on. Default: '0.0.0.0'.') do |host|
    options[:bind] = host
  end
  opts.on('-p', '--port [PORT]', 'Specify the port to bind Gollum with. Default: '4567'.') do |port|
    begin
      # don't use 'port.to_i' here... it doesn't raise errors which might result in a nice confusion later on
      options[:port] = Integer(port)
    rescue ArgumentError
      puts 'Error: '#{port}' is not a valid port number.'
      exit 1
    end
  end
  opts.on('-c', '--config [FILE]', 'Specify path to the Gollum's configuration file.') do |file|
    options[:config] = file
  end
  opts.on('-r', '--ref [REF]', 'Specify the branch to serve. Default: 'master'.') do |ref|
    wiki_options[:ref] = ref
  end
  opts.on('-a', '--adapter [ADAPTER]', 'Launch Gollum using a specific git adapter. Default: 'grit'.') do |adapter|
    Gollum::GIT_ADAPTER = adapter
  end
  opts.on('--bare', 'Declare '<git-repo>' to be bare. This is only necessary when using the grit adapter.') do
    wiki_options[:repo_is_bare] = true
  end
  opts.on('-b', '--base-path [PATH]', 'Specify the leading portion of all Gollum URLs (path info). Default: '/'.',
    'Example: setting this to '/wiki' will make the wiki accessible under 'http://localhost:4567/wiki/'.') do |base_path|
      
    # first trim a leading slash, if any
    base_path.sub!(/^\/+/, '')
    
      s.add_dependency 'gollum-lib', '~> 4.2', '>= 4.2.10'
  s.add_dependency 'kramdown', '~> 1.9.0'
  s.add_dependency 'sinatra', '~> 1.4', '>= 1.4.4'
  s.add_dependency 'mustache', ['>= 0.99.5', '< 1.0.0']
  s.add_dependency 'useragent', '~> 0.16.2'
  s.add_dependency 'gemojione', '~> 3.2'