
        
                def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
            action_completed(@program[:name], status: FastlaneCore::ActionCompletionStatus::SUCCESS)
        return return_value
      rescue Commander::Runner::InvalidCommandError => e
        # calling `abort` makes it likely that tests stop without failing, so
        # we'll disable that during tests.
        if FastlaneCore::Helper.test?
          raise e
        else
          abort('#{e}. Use --help for more information')
        end
      rescue Interrupt => e
        # We catch it so that the stack trace is hidden by default when using ctrl + c
        if FastlaneCore::Globals.verbose?
          raise e
        else
          action_completed(@program[:name], status: FastlaneCore::ActionCompletionStatus::INTERRUPTED, exception: e)
          abort('\nCancelled... use --verbose to show the stack trace')
        end
      rescue \
        OptionParser::InvalidOption,
        OptionParser::InvalidArgument,
        OptionParser::MissingArgument => e
        # calling `abort` makes it likely that tests stop without failing, so
        # we'll disable that during tests.
        if FastlaneCore::Helper.test?
          raise e
        else
          if self.active_command.name == 'help' && @default_command == :help # need to access directly via @
            # This is a special case, for example for pilot
            # when the user runs `fastlane pilot -u user@google.com`
            # This would be confusing, as the user probably wanted to use `pilot list`
            # or some other command. Because `-u` isn't available for the `pilot --help`
            # command it would show this very confusing error message otherwise
            abort('Please ensure to use one of the available commands (#{self.commands.keys.join(', ')})'.red)
          else
            # This would print something like
            #
            #   invalid option: -u
            #
            abort(e.to_s)
          end
        end
      rescue FastlaneCore::Interface::FastlaneCommonException => e # these are exceptions that we dont count as crashes
        display_user_error!(e, e.to_s)
      rescue FastlaneCore::Interface::FastlaneError => e # user_error!
        rescue_fastlane_error(e)
      rescue Errno::ENOENT => e
        rescue_file_error(e)
      rescue Faraday::SSLError, OpenSSL::SSL::SSLError => e # SSL issues are very common
        handle_ssl_error!(e)
      rescue Faraday::ConnectionFailed => e
        rescue_connection_failed_error(e)
      rescue => e # high chance this is actually FastlaneCore::Interface::FastlaneCrash, but can be anything else
        rescue_unknown_error(e)
      ensure
        FastlaneCore.session.finalize_session
      end
    end
    
          it 'adds use-ssh flag to command if use_ssh is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              use_ssh: true
            )
          end').runner.execute(:test)
    
          it 'handles extension and extensions parameters correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{rb,m,h}')
      end
    
          context 'when specify path options' do
        it 'adds path option' do
          path = './spec/fixtures'
          result = Fastlane::FastFile.new.parse('
            lane :test do
              swiftlint(
                path: '#{path}'
              )
            end').runner.execute(:test)
    
      # make sure local implementation is also used in shelljoin
  def shelljoin(array)
    array.map { |arg| shellescape(arg) }.join(' ')
  end
  module_function :shelljoin
end
    
          it 'should shell escape keychain names when checking for installation' do
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
        expect(FastlaneCore::Helper).to receive(:backticks).with(name_regex, anything).and_return('')
    
    # Contributors should always provide a changelog when submitting a PR
if github.pr_body.length < 5
  warn('Please provide a changelog summary in the Pull Request description @#{github.pr_author}')
end
    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
        # ghettoooooo!
    # If we don't have any newlines..., put one there.
    if (header.size > 0 && header !~ /\r\n/)
      header << '\r\n'
    end
    
      def decode_audio_frame(buff)
    case self.codec
    
      # open rmcpplus_request
  def self.create_ipmi_session_open_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
    module Rex
  module Proto
    module Kerberos
      module Crypto
        module Rc4Hmac
          # Decrypts the cipher using RC4-HMAC schema
          #
          # @param cipher [String] the data to decrypt
          # @param key [String] the key to decrypt
          # @param msg_type [Integer] the message type
          # @return [String] the decrypted cipher
          # @raise [RuntimeError] if decryption doesn't succeed
          def decrypt_rc4_hmac(cipher, key, msg_type)
            unless cipher && cipher.length > 16
              raise ::RuntimeError, 'RC4-HMAC decryption failed'
            end
    
              # Encodes the etype
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_etype
            bn = OpenSSL::BN.new(etype.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # @!attribute key
          #   @return [Integer] The type of encryption key
          attr_accessor :type
          # @!attribute value
          #   @return [String] the key itself
          attr_accessor :value
    
              # Decodes a Rex::Proto::Kerberos::Model::KrbError
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            input.value[0].value.each do |val|
              case val.tag
              when 0
                self.pvno = decode_pvno(val)
              when 1
                self.msg_type = decode_msg_type(val)
              when 2
                self.ctime = decode_ctime(val)
              when 3
                self.cusec = decode_cusec(val)
              when 4
                self.stime = decode_stime(val)
              when 5
                self.susec = decode_susec(val)
              when 6
                self.error_code = decode_error_code(val)
              when 7
                self.crealm = decode_crealm(val)
              when 8
                self.cname = decode_cname(val)
              when 9
                self.realm = decode_realm(val)
              when 10
                self.sname = decode_sname(val)
              when 12
                self.e_data = decode_e_data(val)
              else
                raise ::RuntimeError, 'Failed to decode KRB-ERROR SEQUENCE'
              end
            end
          end
    
      release = Rake.application.top_level_tasks.include?('release') || File.exist?(scope('EDGE_GEM_VERSION'))
  if Sass.version[:rev] && !release
    File.open(scope('REVISION'), 'w') { |f| f.puts Sass.version[:rev] }
  elsif release
    File.open(scope('REVISION'), 'w') { |f| f.puts '(release)' }
  else
    File.open(scope('REVISION'), 'w') { |f| f.puts '(unknown)' }
  end
end
    
              def try_set_#{name}(name, value)
            @#{name}s ||= {}
            if @#{name}s.include?(name)
              @#{name}s[name] = value
              true
            elsif @parent && !@parent.global?
              @parent.try_set_#{name}(name, value)
            else
              false
            end
          end
          protected :try_set_#{name}
    
        class << self
      # Returns an error report for an exception in CSS format.
      #
      # @param e [Exception]
      # @param line_offset [Integer] The number of the first line of the Sass template.
      # @return [String] The error report
      # @raise [Exception] `e`, if the
      #   {file:SASS_REFERENCE.md#full_exception-option `:full_exception`} option
      #   is set to false.
      def exception_to_css(e, line_offset = 1)
        header = header_string(e, line_offset)
    
        pod 'ObjCPod', path: 'ObjCPod'
    pod 'SwiftPod', path: 'SwiftPod'
    pod 'MixedPod', path: 'MixedPod'
    pod 'CustomModuleMapPod', path: 'CustomModuleMapPod'
    
          def markdown_podfile
        UI::ErrorReport.markdown_podfile
      end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
        def html_output_for(script_url, code)
      code = CGI.escapeHTML code
      <<-HTML
<div><script src='#{script_url}'></script>
<noscript><pre><code>#{code}</code></pre></noscript></div>
      HTML
    end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
    end
    
          unless file.file?
        return 'File #{file} could not be found'
      end