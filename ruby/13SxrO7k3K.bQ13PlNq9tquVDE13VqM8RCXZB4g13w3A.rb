
        
              @launch_event_sent = true
      builder = AnalyticsEventBuilder.new(
        p_hash: launch_context.p_hash,
        session_id: session_id,
        action_name: nil,
        fastlane_client_language: launch_context.fastlane_client_language
      )
    
    module Gitlab
  module GithubImport
    module Importer
      class LabelLinksImporter
        attr_reader :issue, :project, :client, :label_finder
    
            # attributes - A hash containing the raw issue details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
        end
    
            # Called after the configuration is finalized and loaded to validate
        # this object.
        #
        # @param [Environment] env Vagrant::Environment object of the
        #   environment that this configuration has been loaded into. This
        #   gives you convenient access to things like the the root path
        #   and so on.
        # @param [ErrorRecorder] errors
        def validate(env, errors)
        end
      end
    end
  end
end

    
            # Configures the given list of networks on the virtual machine.
        #
        # The networks parameter will be an array of hashes where the hashes
        # represent the configuration of a network interface. The structure
        # of the hash will be roughly the following:
        #
        # {
        #   type:      :static,
        #   ip:        '192.168.33.10',
        #   netmask:   '255.255.255.0',
        #   interface: 1
        # }
        #
        def configure_networks(networks)
          raise BaseError, _key: :unsupported_configure_networks
        end
    
      def body
    @_body ||= request.body.read
  end
    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
    module UserTrackingConcern
  extend ActiveSupport::Concern
    
      #
  # Gets cookies from the Set-Cookie header in a parsed format
  #
  def get_cookies_parsed
    if (self.headers.include?('Set-Cookie'))
      ret = CGI::Cookie::parse(self.headers['Set-Cookie'])
    else
      ret = {}
    end
    ret
  end
    
        if res[1] == IAX_SUBTYPE_REGREJ
      reason = res[2][IAX_IE_REGREJ_CAUSE] || 'Unknown Reason'
      dprint('REGREJ: #{reason}')
      return
    end
    
    module Rex
module Proto
module IPMI
  require 'rex/proto/ipmi/channel_auth_reply'
  require 'rex/proto/ipmi/open_session_reply'
  require 'rex/proto/ipmi/rakp2'
    
        head + [data.length].pack('v') + data
  end
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Time into an String
          #
          # @return [String] encoded time
          def encode
            encoded = ''
            encoded << encode_auth_time
            encoded << encode_start_time
            encoded << encode_end_time
            encoded << encode_renew_time
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey
          #
          # @param input [String, OpenSSL::ASN1::Sequence] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::Sequence
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode EncryptionKey, invalid input'
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
    
                decode_asn1(asn1)
          end
    
        def initialize(values={})
      @variables = ValidatedVariables.new(Variables.new(values))
    end
    
          def response
        return @response if defined? @response
    
          def with(properties)
        properties.each { |key, value| add_property(key, value) }
        self
      end