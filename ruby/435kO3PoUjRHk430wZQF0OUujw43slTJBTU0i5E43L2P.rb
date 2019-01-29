
        
        def global_require
  JSON.pretty_generate(DATA)
end
    
            # config[kramdown][syntax_higlighter] >
        #   config[kramdown][enable_coderay] >
        #   config[highlighter]
        # Where `enable_coderay` is now deprecated because Kramdown
        # supports Rouge now too.
        def highlighter
          return @highlighter if @highlighter
    
          def verify_ssl
        github_omniauth_provider.fetch('verify_ssl', true)
      end
    
            def id_for_already_imported_cache(note)
          note.id
        end
      end
    end
  end
end

    
            client.each_page(collection_method, repo, options) do |page|
          # Technically it's possible that the same work is performed multiple
          # times, as Sidekiq doesn't guarantee there will ever only be one
          # instance of a job. In such a scenario it's possible for one job to
          # have a lower page number (e.g. 5) compared to another (e.g. 10). In
          # this case we skip over all the objects until we have caught up,
          # reducing the number of duplicate jobs scheduled by the provided
          # block.
          next unless page_counter.set(page.number)
    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
    module Gitlab
  module QueryLimiting
    # Middleware for reporting (or raising) when a request performs more than a
    # certain amount of database queries.
    class Middleware
      CONTROLLER_KEY = 'action_controller.instance'.freeze
      ENDPOINT_KEY = 'api.endpoint'.freeze
    
            # This clears out all the registered plugins. This is only used by
        # unit tests and should not be called directly.
        def reset!
          @registered.clear
        end
    
        # /%3faaa=bbbbb
    # which could possibly decode to '/?aaa=bbbbb', which if the IDS normalizes first, then splits the URI on ?, then it can be bypassed
    if self.junk_param_start
      str.sub!(/\//, '/%3f' + Rex::Text.rand_text_alpha(rand(5) + 1) + '=' + Rex::Text.rand_text_alpha(rand(10) + 1) + '/../')
    end
    
              sent = 0
          case protocol
          when 'tcp'
            sent = send_request_tcp(req)
          when 'udp'
            sent = send_request_udp(req)
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Principal into an String
          #
          # @return [String] encoded principal
          def encode
            encoded = ''
            encoded << encode_name_type
            encoded << [components.length].pack('N')
            encoded << encode_realm
            encoded << encode_components
    
                checksum = cipher[0, 16]
            data = cipher[16, cipher.length - 1]
    
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
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
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
    
                self
          end
    
    Given /^I am signed in( on the mobile website)?$/ do |mobile|
  automatic_login
  confirm_login mobile
end
    
    Then /^I should have (\d+) nsfw posts$/ do |num_posts|
  page.should have_css('.nsfw-shield', count: num_posts.to_i)
end
    
          get :index, params: {a_id: @aspect.id, page: '1'}, format: :json
      save_fixture(response.body, 'aspects_manage_contacts_json')
    end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
    describe StatusMessagesController, :type => :controller do
  describe '#bookmarklet' do
    before do
      sign_in bob, scope: :user
    end
    
        context 'on a public post from a stranger' do
      before do
        @post = stranger.post :status_message, :text => 'something', :public => true, :to => 'all'
      end
    
          it 'creates a reshare' do
        expect{
          post_request!
        }.to change(Reshare, :count).by(1)
      end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Then(/^the repo is cloned$/) do
  run_vagrant_command(test_dir_exists(TestApp.repo_path))
end
    
        def primary(role)
      servers.fetch_primary(role)
    end
    
            def set(key, value)
          pval = @properties[key]
          if pval.is_a?(Hash) && value.is_a?(Hash)
            pval.merge!(value)
          elsif pval.is_a?(Set) && value.is_a?(Set)
            pval.merge(value)
          elsif pval.is_a?(Array) && value.is_a?(Array)
            pval.concat value
          else
            @properties[key] = value
          end
        end