
        
                it 'sets up screenshots folder in current folder' do
          expect(options[:screenshots_path]).to eq('./screenshots')
        end
    
        class AdbAction < Action
      def self.run(params)
        adb = Helper::AdbHelper.new(adb_path: params[:adb_path])
        result = adb.trigger(command: params[:command], serial: params[:serial])
        return result
      end
    
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
    
        # Extract the command string
    self.cmd_string = header.slice!(/.+\r\n/)
    
        return cookies.strip
  end
    
        # If a procedure was passed, mount the resource with it.
    if (opts['Proc'])
      mount(name, Handler::Proc, false, opts['Proc'], opts['VirtualDirectory'])
    else
      raise ArgumentError, 'You must specify a procedure.'
    end
  end
    
        # Look for IAX_AUTH_MD5 (2) as an available auth method
    if res[2][14].unpack('n')[0] & 2 <= 0
      dprint('REGAUTH: MD5 authentication is not enabled on the server')
      return
    end
    
      def self.verify_rakp_hmac_sha1(salt, hash, password)
    OpenSSL::HMAC.digest('sha1', password, salt) == hash
  end
    
              res = nil
          case protocol
          when 'tcp'
            res = recv_response_tcp
          when 'udp'
            res = recv_response_udp
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
              # Rex::Proto::Kerberos::Model::ApReq decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'AP-REQ decoding not supported'
          end
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
              # Decodes the last_req from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Array<Rex::Proto::Kerberos::Model::LastRequest>]
          def decode_last_req(input)
            last_requests = []
            input.value[0].value.each do |last_request|
              last_requests << Rex::Proto::Kerberos::Model::LastRequest.decode(last_request)
            end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
    desc 'Dumps output to a CSS file for testing'
task :debug do
  require 'sass'
  path = Bootstrap.stylesheets_path
  %w(bootstrap).each do |file|
    engine = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    File.open('./#{file}.css', 'w') { |f| f.write(engine.render) }
  end
end
    
        alias log puts
    
      # Enable Rack::Cache to put a simple HTTP cache in front of your application
  # Add `rack-cache` to your Gemfile before enabling this.
  # For large-scale production use, consider using a caching reverse proxy like nginx, varnish or squid.
  # config.action_dispatch.rack_cache = true
    
    Then /^I should have (\d+) nsfw posts$/ do |num_posts|
  page.should have_css('.nsfw-shield', count: num_posts.to_i)
end
    
      people.each do |person|
    contacts << Contact.new(:person_id => person.id, :user_id => @me.id, :sharing => true, :receiving => true)
  end
  Contact.import(contacts)
  contacts = @me.contacts.limit(n.to_i)
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path in #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path in #{expected.inspect} but it had'
  end
end
    
          out =
        Sass::Util.silence_sass_warnings do
          if @options[:from] == :css
            require 'sass/css'
            Sass::CSS.new(read(input), @options[:for_tree]).render(@options[:to])
          else
            if input_path
              Sass::Engine.for_file(input_path, @options[:for_engine])
            else
              Sass::Engine.new(read(input), @options[:for_engine])
            end.to_tree.send('to_#{@options[:to]}', @options[:for_tree])
          end
        end
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end

    
        def installer
      @installer ||= PluginInstaller.new
    end
    
          def with(properties)
        properties.each { |key, value| add_property(key, value) }
        self
      end
    
          ServerKey = Struct.new(:hostname, :port)
    
          # Decorate Variables#set to add validation behavior.
      def set(key, value=nil, &block)
        assert_value_or_block_not_both(value, block)
    
          def untrusted!
        @trusted = false
        yield
      ensure
        @trusted = true
      end
    
      # escape unicode
  content.gsub!(/./) { |c| c.bytesize > 1 ? '\\u{#{c.codepoints.first.to_s(16)}}' : c }
    
            safe?(env) ||
          valid_token?(session, env['HTTP_X_CSRF_TOKEN']) ||
          valid_token?(session, Request.new(env).params[options[:authenticity_param]]) ||
          ( options[:allow_if] && options[:allow_if].call(env) )
      end
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
            close_body(body) if reaction