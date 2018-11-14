
        
              self.runner.add_lane(Lane.new(platform: self.current_platform,
                                       block: block,
                                 description: desc_collection,
                                        name: lane_name,
                                  is_private: false), true)
    
        def action_completed(completion_context: nil)
    end
    
        def rescue_file_error(e)
      # We're also printing the new-lines, as otherwise the message is not very visible in-between the error and the stack trace
      puts('')
      FastlaneCore::UI.important('Error accessing file, this might be due to fastlane's directory handling')
      FastlaneCore::UI.important('Check out https://docs.fastlane.tools/advanced/#directory-behavior for more details')
      puts('')
      raise e
    end
    
        context 'action launch' do
      let(:launch_context) do
        FastlaneCore::ActionLaunchContext.new(
          action_name: action_name,
          p_hash: p_hash,
          platform: 'ios',
          fastlane_client_language: fastlane_client_language
        )
      end
    
          def self.example_code
        [
          'add_git_tag # simple tag with default values',
          'add_git_tag(
            grouping: 'fastlane-builds',
            prefix: 'v',
            postfix: '-RC1',
            build_number: 123
          )',
          '# Alternatively, you can specify your own tag. Note that if you do specify a tag, all other arguments are ignored.
          add_git_tag(
            tag: 'my_custom_tag'
          )'
        ]
      end
    
            inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD --no-merges'
        expect(result).to eq(pseudocommand)
      end
    
              expect(UI).to have_received(:shell_error!).with('Exit status of command 'exit 1' was 1 instead of 0.\n')
        end
      end
    end
    
    module CrossplatformShellwords
  # handle switching between implementations of shellescape
  def shellescape(str)
    if FastlaneCore::Helper.windows?
      WindowsShellwords.shellescape(str)
    else
      # using `escape` instead of expected `shellescape` here
      # which corresponds to Shellword's `String.shellescape` implementation
      # https://github.com/ruby/ruby/blob/1cf2bb4b2085758112503e7da7414d1ef52d4f48/lib/shellwords.rb#L216
      Shellwords.escape(str)
    end
  end
  module_function :shellescape
    
              it 'prioritizes config file values after ENV' do
            config_item = FastlaneCore::ConfigItem.new(key: :item, env_name: 'abc', default_value: 'val default')
            config = FastlaneCore::Configuration.create([config_item], {})
            config.config_file_options = { item: 'val config' }
    
        # undo folding, kinda ugly but works for now.
    header.gsub!(/:\s*\r\n\s+/smni,': ')
    
    module Rex
module Proto
module IPMI
class Utils
    
              sent = 0
          case protocol
          when 'tcp'
            sent = send_request_tcp(req)
          when 'udp'
            sent = send_request_udp(req)
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
                components.each do |c|
              encoded << [c.length].pack('N')
              encoded << c
            end
    
              # Encodes the auth_time field
          #
          # @return [String]
          def encode_auth_time
            [auth_time].pack('N')
          end
    
              private
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptedData
          #
          # @param input [String, OpenSSL::ASN1::Sequence] the input to decode from
          # @return [self]
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::Sequence
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode EncryptedData Name, invalid input'
            end
    
              # @!attribute key
          #   @return [Integer] The type of encryption key
          attr_accessor :type
          # @!attribute value
          #   @return [String] the key itself
          attr_accessor :value
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey from an
          # OpenSSL::ASN1::Sequence
          #
          # @param input [OpenSSL::ASN1::Sequence] the input to decode from
          def decode_asn1(input)
            seq_values = input.value
            self.type = decode_type(seq_values[0])
            self.value = decode_value(seq_values[1])
          end
    
          var = var[1..-1]
      parsed_from = parse_script(from_expr, :offset => line.offset + line.text.index(from_expr))
      parsed_to = parse_script(to_expr, :offset => line.offset + line.text.index(to_expr))
      Tree::ForNode.new(var, parsed_from, parsed_to, to_name == 'to')
    end
    
        # Returns whether this is the global environment.
    #
    # @return [Boolean]
    def global?
      @parent.nil?
    end
    
        # Modify the top Sass backtrace entries
    # (that is, the most deeply nested ones)
    # to have the given attributes.
    #
    # Specifically, this goes through the backtrace entries
    # from most deeply nested to least,
    # setting the given attributes for each entry.
    # If an entry already has one of the given attributes set,
    # the pre-existing attribute takes precedence
    # and is not used for less deeply-nested entries
    # (even if they don't have that attribute set).
    #
    # @param attrs [{Symbol => Object}] The information to add to the backtrace entry.
    #   See \{#sass\_backtrace}
    def modify_backtrace(attrs)
      attrs = attrs.reject {|_k, v| v.nil?}
      # Move backwards through the backtrace
      (0...sass_backtrace.size).to_a.reverse_each do |i|
        entry = sass_backtrace[i]
        sass_backtrace[i] = attrs.merge(entry)
        attrs.reject! {|k, _v| entry.include?(k)}
        break if attrs.empty?
      end
    end