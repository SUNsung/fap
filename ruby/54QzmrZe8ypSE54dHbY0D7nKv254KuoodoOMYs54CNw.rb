
        
          it 'returns the previous seed value' do
    srand(10)
    srand(20).should == 10
  end
    
        reset
  end
    
            end
      end
    end
  end
end
    
                if OpenSSL::HMAC.digest('MD5', k1, decrypted) != checksum
              raise ::RuntimeError, 'RC4-HMAC decryption failed, incorrect checksum verification'
            end
    
              include Rex::Proto::Kerberos::Crypto
          include Rex::Proto::Kerberos::Model
    
              # Decodes a Rex::Proto::Kerberos::Model::EncKdcResponse from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
              # Encodes the value field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_value
            OpenSSL::ASN1::OctetString.new(value)
          end
        end
      end
    end
  end
end
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
        # These mixins will get vararg definitions in SCSS (not supported by LESS):
    VARARG_MIXINS               = %w(
      scale transition transition-duration transition-property transition-transform box-shadow
    )
    
        def log_processing(name)
      puts yellow '  #{File.basename(name)}'
    end
    
        def read_cached_files(path, files)
      full_path = '#@cache_path/#@branch_sha/#{path}'
      contents  = {}
      if File.directory?(full_path)
        files.each do |name|
          path = '#{full_path}/#{name}'
          contents[name] = File.read(path, mode: 'rb') if File.exists?(path)
        end
      end
      contents
    end
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
    Then /^'([^']*)' should be post (\d+)$/ do |post_text, position|
  stream_element_numbers_content(position).should have_content(post_text)
end
    
    When /^I view '([^\']*)''s first post$/ do |email|
  user = User.find_by_email(email)
  post = user.posts.first
  visit post_path(post)
end
    
          delete :destroy, params: {post_id: @message.id, id: like2.id}, format: :json
      expect(response.status).to eq(404)
      expect(response.body).to eq(I18n.t('likes.destroy.error'))
      expect(Like.count).to eq(like_count)
    end
  end
end

    
      gem 'rb-fsevent'
  gem 'kicker'
  gem 'awesome_print'
  gem 'ruby-prof', :platforms => [:ruby]
end

    
        pod 'Alamofire', path: '../Alamofire Example/Alamofire'
    
      autoload :AggregateTarget,           'cocoapods/target/aggregate_target'
  autoload :Command,                   'cocoapods/command'
  autoload :Deintegrator,              'cocoapods_deintegrate'
  autoload :Executable,                'cocoapods/executable'
  autoload :ExternalSources,           'cocoapods/external_sources'
  autoload :Installer,                 'cocoapods/installer'
  autoload :HooksManager,              'cocoapods/hooks_manager'
  autoload :PodTarget,                 'cocoapods/target/pod_target'
  autoload :Project,                   'cocoapods/project'
  autoload :Resolver,                  'cocoapods/resolver'
  autoload :Sandbox,                   'cocoapods/sandbox'
  autoload :Target,                    'cocoapods/target'
  autoload :Validator,                 'cocoapods/validator'