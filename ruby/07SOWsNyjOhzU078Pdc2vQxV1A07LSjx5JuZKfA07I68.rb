
        
                  def retrieve_object(object)
            if object
              object
            elsif @template_object.instance_variable_defined?('@#{@object_name}')
              @template_object.instance_variable_get('@#{@object_name}')
            end
          rescue NameError
            # As @object_name may contain the nested syntax (item[subobject]) we need to fallback to nil.
            nil
          end
    
              if options['multiple']
            add_default_name_and_id_for_value(@checked_value, options)
            options.delete('multiple')
          else
            add_default_name_and_id(options)
          end
    
              label_tag(name_and_id['id'], content, options)
        end
    
        config.eager_load_namespaces << ActionView
    
          GivenDailyLike.increment_for(user.id)
      expect(value_for(user.id, dt)).to eq(1)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    
        # Add permissions and a description to the Staff category.
    
          command.args.each do |arg|
        arg_value = arg.value
        if arg.value_type.to_s.to_sym == :string_closure
          closure = proc { |string_value| closure_argument_value = string_value }
          arg_value = closure
        end
        parameter_map[arg.name.to_sym] = arg_value
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
    
          context 'when specify list of files to process' do
        it 'adds use script input files option and environment variables' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              files: ['AppDelegate.swift', 'path/to/project/src/Model.swift', 'path/to/project/test/Test.swift']
            )
          end').runner.execute(:test)
    
      # make sure local implementation is also used in shelljoin
  def shelljoin(array)
    array.map { |arg| shellescape(arg) }.join(' ')
  end
  module_function :shelljoin
end
    
      if FastlaneCore::CommandExecutor.which('grep')
    if FastlaneCore::Helper.windows?
      compare_string = simulate_windows_shell_unwrapping(compare_string)
    else
      compare_string = simulate_normal_shell_unwrapping(compare_string)
    end
    compare_command = 'grep 'foo' #{escaped}'
    expected_compare_error = 'grep: ' + compare_string + ': No such file or directory'
  elsif FastlaneCore::CommandExecutor.which('find')
    compare_string = simulate_normal_shell_unwrapping(compare_string)
    compare_string = compare_string.upcase
    compare_command = 'find \'foo\' #{escaped}'
    expected_compare_error = 'File not found - ' + compare_string
  end
    
    # To avoid 'PR & Runs' for which tests don't pass, we want to make spec errors more visible
# The code below will run on Circle, parses the results in JSON and posts them to the PR as comment
containing_dir = ENV['CIRCLE_TEST_REPORTS'] || '.' # for local testing
file_path = File.join(containing_dir, 'rspec', 'fastlane-junit-results.xml')
    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
            # Attempt to find a user by its email. If a record is found, send new
        # password instructions to it. If user is not found, returns a new user
        # with an email not found error.
        # Attributes must contain the user's email
        def send_reset_password_instructions(attributes={})
          recoverable = find_or_initialize_with_errors(reset_password_keys, attributes, :not_found)
          recoverable.send_reset_password_instructions if recoverable.persisted?
          recoverable
        end
    
        info  = nil
    stype = pkt[11,1].unpack('C')[0]
    info  = process_elements(pkt, 12) if [IAX_TYPE_IAX, IAX_TYPE_CONTROL].include?(itype)
    
              # Encodes the type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey from an
          # OpenSSL::ASN1::Sequence
          #
          # @param input [OpenSSL::ASN1::Sequence] the input to decode from
          def decode_asn1(input)
            seq_values = input.value
            self.type = decode_type(seq_values[0])
            self.value = decode_value(seq_values[1])
          end