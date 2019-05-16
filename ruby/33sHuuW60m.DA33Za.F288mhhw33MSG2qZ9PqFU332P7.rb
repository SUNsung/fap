
        
          it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
        it 'can not be turned off' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
  end
end

    
          expect(Utils.unindent(<<-MD)).to eq('Hello World\n  This is\n  indented\nthough')
        Hello World
          This is
          indented
        though
      MD
    
        it 'should provide the since attribute after the first run' do
      time = (Time.now-1.minute).iso8601
      @checker.memory[:last_event] = time
      @checker.save
      expect(@checker.reload.send(:query_parameters)).to eq({:query => {:since => time}})
    end
  end
    
        def add_entry(entry)
      if @index.add?(entry.as_json.to_s)
        @entries << entry.dup
        @types[entry.type].count += 1 if entry.type
      end
    end
    
        def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
        private
    
        def mime_type
      headers['Content-Type'] || 'text/plain'
    end
    
    module Docs
  class Subscriber < ActiveSupport::Subscriber
    cattr_accessor :namespace
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
        def resource_params
      params.require(:email_domain_block).permit(:domain)
    end
  end
end

    
      private
    
        unless active_session.web_push_subscription.nil?
      active_session.web_push_subscription.destroy!
      active_session.update!(web_push_subscription: nil)
    end
    
    module ExportControllerConcern
  extend ActiveSupport::Concern
    
      def set_session_activity
    return unless session_needs_update?
    current_session.touch
  end
    
            # Receives a kerberos response through the connection
        #
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] the kerberos
        #   response message
        # @raise [RuntimeError] if the connection isn't established, the transport protocol is unknown, not supported
        #   or the response can't be parsed
        # @raise [NotImplementedError] if the transport protocol isn't supported
        def recv_response
          if connection.nil?
            raise ::RuntimeError, 'Kerberos Client: connection not established'
          end
    
              # Rex::Proto::Kerberos::Model::ApReq decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'AP-REQ decoding not supported'
          end
    
              # Encodes the type
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type(type)
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decrypts the cipher with etype encryption schema
          #
          # @param key [String] the key to decrypt
          # @param msg_type [Integer] the message type
          # @return [String] the decrypted `cipher`
          # @raise [RuntimeError] if decryption doesn't succeed
          # @raise [NotImplementedError] if encryption isn't supported
          def decrypt(key, msg_type)
            if cipher.nil? || cipher.empty?
              return ''
            end
    
              # Decodes the cname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_cname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
        system_command '#{staged_path}/AdobePatchInstaller.app/Contents/MacOS/AdobePatchInstaller',
                   args: [
                           '--mode=silent',
                         ],
                   sudo: true
  end
    
      puts '== Installing dependencies =='
  system! 'gem install bundler --conservative'
  system('bundle check') || system!('bundle install')
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false