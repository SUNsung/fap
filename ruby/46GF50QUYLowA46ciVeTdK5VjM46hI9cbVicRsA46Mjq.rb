
        
            def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
            is_swift = FastlaneCore::FastlaneFolder.swift?
        fastlane_client_language = is_swift ? :swift : :ruby
        action_launch_context = FastlaneCore::ActionLaunchContext.context_for_action_name(@program[:name], fastlane_client_language: fastlane_client_language, args: ARGV)
        FastlaneCore.session.action_launched(launch_context: action_launch_context)
    
          it 'allows you to specify your own tag' do
        tag = '2.0.0'
    
            describe '#keys' do
          it 'returns all available keys' do
            expect(@config.all_keys).to eq([:cert_name, :output, :wait_processing_interval])
          end
        end
    
        t.wakeup
    t.value.should == 5
  end
end
    
    describe 'Kernel.throw' do
  it 'transfers control to the end of the active catch block waiting for symbol' do
    catch(:blah) do
      :value
      throw :blah
      fail('throw didn't transfer the control')
    end.should be_nil
  end
    
      it 'raises ArgumentError if no block or proc is provided' do
    lambda do
      trace_var :$Kernel_trace_var_global
    end.should raise_error(ArgumentError)
  end
end

    
          ruby_bug '#14846', '2.5'...'2.6' do
        it 'raises ArgumentError if passed -1' do
          -> { warn '', uplevel: -1 }.should raise_error(ArgumentError)
        end
      end
    
        data =
      [0x00, 0x00, 0x00, 0x00].pack('C*') +
      bmc_session_id +
      console_random_id +
      [
        0x14, 0x00, 0x00,
        username.length
      ].pack('C*') +
      username
    
              # Encodes the realm field
          #
          # @return [String]
          def encode_realm
            encoded = ''
            encoded << [realm.length].pack('N')
            encoded << realm
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of credential times stored in the Kerberos Credential Cache.
        class Time < Element
          # @!attribute auth_time
          #   @return [Integer]
          attr_accessor :auth_time
          # @!attribute start_time
          #   @return [Integer]
          attr_accessor :start_time
          # @!attribute end_time
          #   @return [Integer]
          attr_accessor :end_time
          # @!attribute renew_till
          #   @return [Integer]
          attr_accessor :renew_till
    
              # Rex::Proto::Kerberos::Model::ApReq decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'AP-REQ decoding not supported'
          end
    
              # @!attribute type
          #   @return [Integer] The algorithm used to generate the checksum
          attr_accessor :type
          # @!attribute checksum
          #   @return [String] The checksum itself
          attr_accessor :checksum
    
              # Decodes the Rex::Proto::Kerberos::Model::EncKdcResponse from an input
          #
          # @param input [String, OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::ASN1Data
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode EncKdcResponse, invalid input'
            end
    
              # Encodes the Rex::Proto::Kerberos::Model::KdcRequest into an ASN.1 String
          #
          # @return [String]
          def encode
            pvno_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_pvno], 1, :CONTEXT_SPECIFIC)
            msg_type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_msg_type], 2, :CONTEXT_SPECIFIC)
            pa_data_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_pa_data], 3, :CONTEXT_SPECIFIC)
            req_body_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_req_body], 4, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new([pvno_asn1, msg_type_asn1, pa_data_asn1, req_body_asn1])
            seq_asn1 = OpenSSL::ASN1::ASN1Data.new([seq], msg_type, :APPLICATION)
            seq_asn1.to_der
          end
    
              # Decodes the enc_part
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::EncryptedData]
          def decode_enc_part(input)
            Rex::Proto::Kerberos::Model::EncryptedData.decode(input.value[0])
          end
        end
      end
    end
  end
end
    
    When /^(?:|I )click on '([^']*)' navbar title$/ do |title|
  with_scope('.info-bar') do
    find('h5', text: title).click
  end
end

    
    Given(/^all linked files exists in shared path$/) do
  TestApp.linked_files.each do |linked_file|
    step %Q{file '#{linked_file}' exists in shared path}
  end
end
    
        def hostfilter
      ['--hosts HOSTS', '-z',
       'Run SSH commands only on matching hosts',
       lambda do |value|
         Configuration.env.add_cmdline_filter(:host, value)
       end]
    end
    
          def gets
        return unless $stdin.tty?
    
    set_if_empty :pty, false
    
      # set version
  content.sub! /(s\.version.*=\s+).*/, '\\1\'#{Rack::Protection::VERSION}\''
    
          def bad_cookies
        @bad_cookies ||= []
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
    
          def react_and_close(env, body)
        reaction = react(env)
    
        def self.transform_pattern_into_re(pattern)
      Regexp.new('^#{pattern.gsub(WILDCARD, WILDCARD_INTO_RE)}$')
    end
  end
    
          PluginManager.ui.info('Install successful')
    rescue ::Bundler::BundlerError => e
      raise PluginManager::InstallError.new(e), 'An error occurred went installing plugins'
    ensure
      FileUtils.rm_rf(uncompressed_path) if uncompressed_path && Dir.exist?(uncompressed_path)
    end
    
      # retrieve only the latest spec for all locally installed plugins
  # @return [Hash] result hash {plugin_name.downcase => plugin_spec}
  def find_latest_gem_specs
    LogStash::PluginManager.all_installed_plugins_gem_specs(gemfile).inject({}) do |result, spec|
      previous = result[spec.name.downcase]
      result[spec.name.downcase] = previous ? [previous, spec].max_by{|s| s.version} : spec
      result
    end
  end
end
