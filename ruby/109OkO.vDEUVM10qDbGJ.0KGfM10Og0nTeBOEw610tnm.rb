
        
        end

    
        it 'should have the data within the json' do
      expect(notification.data_hash[:poison]).to eq('ivy')
    end
  end
    
        def display_user_error!(e, message)
      if FastlaneCore::Globals.verbose?
        # with stack trace
        reraise_formatted!(e, message)
      else
        # without stack trace
        action_completed(@program[:name], status: FastlaneCore::ActionCompletionStatus::USER_ERROR, exception: e)
        abort('\n[!] #{message}'.red)
      end
    end
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            grouping: 'grouping',
            build_number: 'build_number',
            prefix: 'prefix',
          })
        end').runner.execute(:test)
    
          it 'sets the platform to watchOS' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              platform: 'watchOS'
            )
          end').runner.execute(:test)
    
          it 'handles extension and extensions parameters correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{rb,m,h}')
      end
    
            describe 'verify_block' do
          it 'throws an error if the key doesn't exist' do
            expect do
              @config.set(:non_existing, 'value')
            end.to raise_error('Could not find option 'non_existing' in the list of available options: cert_name, output, wait_processing_interval')
          end
    
      get '/' => 'test#index'
end
    
          def remember_key(resource, scope)
        resource.rememberable_options.fetch(:key, 'remember_#{scope}_token')
      end
    end
  end
end

    
        def respond
      if http_auth?
        http_auth
      elsif warden_options[:recall]
        recall
      else
        redirect
      end
    end
    
        each_pair { |var, val|
      if self.fold
        str << '#{var}:\r\n\t#{val}\r\n'
      else
        str << '#{var}: #{val}\r\n'
      end
    }
    
    
# Codecs
IAX_CODEC_G711_MULAW  = 0x00000004
IAX_CODEC_G711_ALAW   = 0x00000008
IAX_CODEC_LINEAR_PCM  = 0x00000040
    
              def initialize(options = {})
            self.class.attributes.each do |attr|
              if options.has_key?(attr)
                m = (attr.to_s + '=').to_sym
                self.send(m, options[attr])
              end
            end
          end
    
              # Encodes a Rex::Proto::Kerberos::Model::EncryptedData into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            etype_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_etype], 0, :CONTEXT_SPECIFIC)
            elems << etype_asn1
    
              # Encodes the nonce
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_nonce
            bn = OpenSSL::BN.new(nonce.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
    Given /^a user with email '([^']*)' is connected with '([^']*)'$/ do |arg1, arg2|
  user1 = User.where(:email => arg1).first
  user2 = User.where(:email => arg2).first
  connect_users(user1, user1.aspects.where(:name => 'Besties').first, user2, user2.aspects.where(:name => 'Besties').first)
end
    
    describe ContactsController, :type => :controller do
  describe '#index' do
    before do
      AppConfig.chat.enabled = true
      @aspect = bob.aspects.create(:name => 'another aspect')
      bob.share_with alice.person, @aspect
      bob.share_with eve.person, @aspect
      sign_in bob, scope: :user
    end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
        def execute
      raise PluginManager::FileNotFoundError, 'Can't file local file #{local_file}' unless ::File.exist?(local_file)
      raise PluginManager::InvalidPackError, 'Invalid format, the pack must be in zip format' unless valid_format?(local_file)
    
      it 'does object equality on config_hash and pipeline_id' do
    another_exact_pipeline = described_class.new(source, pipeline_id, ordered_config_parts, settings)
    expect(subject).to eq(another_exact_pipeline)