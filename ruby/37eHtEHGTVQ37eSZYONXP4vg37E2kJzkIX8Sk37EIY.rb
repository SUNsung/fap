
        
              def request_count_counter
        @request_counter ||= Gitlab::Metrics.counter(
          :github_importer_request_count,
          'The number of GitHub API calls performed when importing projects'
        )
      end
    end
  end
end

    
            def importer_class
          IssueAndLabelLinksImporter
        end
    
          def cache_key_iid
        if object.respond_to?(:noteable_id)
          object.noteable_id
        elsif object.respond_to?(:iid)
          object.iid
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    end
  end
end

    
        if authenticated && resource = warden.user(resource_name)
      flash[:alert] = I18n.t('devise.failure.already_authenticated')
      redirect_to after_sign_in_path_for(resource)
    end
  end
    
    Rails.application.routes.draw do
  devise_for :users
    
                bypass_sign_in(user)
          DEPRECATION
          warden.session_serializer.store(resource, scope)
        elsif warden.user(scope) == resource && !options.delete(:force)
          # Do nothing. User already signed in and we are not forcing it.
          true
        else
          warden.set_user(resource, options.merge!(scope: scope))
        end
      end
    
          def parse_uri(location)
        location && URI.parse(location)
      rescue URI::InvalidURIError
        nil
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
      #
  # Move these into an IPMI stack or mixin at some point
  #
    
        head + [data.length].pack('v') + data
  end
    
            end
      end
    end
  end
end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a principal, an asset (e.g., a
        # workstation user or a network server) on a network.
        class Element
    
              # Decodes a Rex::Proto::Kerberos::Model::EncKdcResponse
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            input.value[0].value.each do |val|
              case val.tag
              when 0
                self.key = decode_key(val)
              when 1
                self.last_req = decode_last_req(val)
              when 2
                self.nonce = decode_nonce(val)
              when 3
                self.key_expiration = decode_key_expiration(val)
              when 4
                self.flags = decode_flags(val)
              when 5
                self.auth_time = decode_auth_time(val)
              when 6
                self.start_time = decode_start_time(val)
              when 7
                self.end_time = decode_end_time(val)
              when 8
                self.renew_till = decode_renew_till(val)
              when 9
                self.srealm = decode_srealm(val)
              when 10
                self.sname = decode_sname(val)
              else
                raise ::RuntimeError, 'Failed to decode ENC-KDC-RESPONSE SEQUENCE'
              end
            end
          end
    
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
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
          def unmasked_token?(token)
        token.length == TOKEN_LENGTH
      end
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end