
        
        require 'benchmark/ips'
require 'jekyll'
require 'json'
    
          def print_worst_offenders
        @io.puts
        @io.puts 'Worst offenders:'
        @timings.sort_by { |_f, t| -t }.take(10).each do |(f, t)|
          @io.puts '  #{t}s for #{f}'
        end
        @io.puts
      end
    
            # Internal: Gets the filename of the sample post to be created
        #
        # Returns the filename of the sample post, as a String
        def initialized_post_name
          '_posts/#{Time.now.strftime('%Y-%m-%d')}-welcome-to-jekyll.markdown'
        end
    
            # If our highlighter is CodeRay we go in to merge the CodeRay defaults
        # with your 'coderay' key if it's there, deprecating it in the
        # process of you using it.
        def modernize_coderay_config
          unless @config['coderay'].empty?
            Jekyll::Deprecator.deprecation_message(
              'You are using 'kramdown.coderay' in your configuration, ' \
              'please use 'syntax_highlighter_opts' instead.'
            )
    
        # User defines a new private lane, which can't be called from the CLI
    def private_lane(lane_name, &block)
      UI.user_error!('You have to pass a block using 'do' for lane '#{lane_name}'. Make sure you read the docs on GitHub.') unless block
    
          def self.is_supported?(platform)
        true
      end
    end
  end
end

    
            message = '#{grouping}/test/#{specified_build_number} (fastlane)'
        tag = '#{grouping}/test/#{specified_build_number}'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
          it 'accepts an array of input paths' do
        input_dir_with_spaces = 'second/input dir with spaces'
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: ['input/dir', '#{input_dir_with_spaces}', 'third/input/file.h']
          )
        end').runner.execute(:test)
    
          it 'bootstraps with a single dependency' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              command: 'bootstrap',
              dependencies: ['TestDependency']
            )
          end').runner.execute(:test)
    
        def doc_default_value
      return '[*](#parameters-legend-dynamic)' if self.default_value_dynamic
      return '' if self.default_value.nil?
      return '`''`' if self.default_value.instance_of?(String) && self.default_value.empty?
      return '`:#{self.default_value}`' if self.default_value.instance_of?(Symbol)
    
          @report_note = current_account.report_notes.new(resource_params)
      @report = @report_note.report
    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
    end
  end
    
            # Decodes a Kerberos response
        #
        # @param data [String] the raw response message
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] the kerberos message response
        # @raise [RuntimeError] if the response can't be processed
        def decode_kerb_response(data)
          asn1 = OpenSSL::ASN1.decode(data)
          msg_type = asn1.value[0].value[1].value[0].value
    
              # Encodes the realm field
          #
          # @return [String]
          def encode_realm
            encoded = ''
            encoded << [realm.length].pack('N')
            encoded << realm
    
                decrypted
          end
    
              # Encodes the type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the start_time field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_start_time(input)
            input.value[0].value
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcResponse from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
      # log-levels from the diaspora.yml for SQL and federation debug-logging
  Logging.logger[ActionView::Base].level = Rails.env.development? ? :debug : :warn
  Logging.logger[ActiveRecord::Base].level = AppConfig.environment.logging.debug.sql? ? :debug : :info
  Logging.logger[DiasporaFederation::Salmon::MagicEnvelope].level =
    AppConfig.environment.logging.debug.federation? ? :debug : :info
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
        it 'generates the aspects_manage_contacts_json fixture', fixture: true do
      # adds one not mutual contact
      bob.share_with(FactoryGirl.create(:person), @aspect)
    
      end