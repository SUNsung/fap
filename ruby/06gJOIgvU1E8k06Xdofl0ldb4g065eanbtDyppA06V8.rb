
        
            group.default_notification_level = 1
    group.save
    
      describe 'data' do
    let(:notification) { Fabricate.build(:notification) }
    
                checksum = OpenSSL::HMAC.digest('MD5', k1, data_encrypt)
    
              # Encodes the type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Retrieves the element instance fields
          #
          # @return [Array]
          def attributes
            self.class.attributes
          end
    
              # Decodes the crealm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_crealm(input)
            input.value[0].value
          end
    
    # Declares a dependency to the git repo of CocoaPods gem. This declaration is
# compatible with the local git repos feature of Bundler.
#
def cp_gem(name, repo_name, branch = 'master', path: false)
  return gem name if SKIP_UNRELEASED_VERSIONS
  opts = if path
           { :path => '../#{repo_name}' }
         else
           url = 'https://github.com/CocoaPods/#{repo_name}.git'
           { :git => url, :branch => branch }
         end
  gem name, opts
end
    
          def plugins_string
        UI::ErrorReport.plugins_string
      end
    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
          warn_local_gems(plugins_with_path) if plugins_with_path.size > 0
    end
    update_gems!
  end