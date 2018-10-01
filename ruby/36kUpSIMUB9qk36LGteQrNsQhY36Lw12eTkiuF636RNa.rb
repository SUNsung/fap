
        
            # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
      config.logger = Logger.new($stdout)
  Rails.logger  = config.logger
    
          @@warden_config_blocks.map { |block| block.call Devise.warden_config }
      true
    end
  end
    
            home_path = '#{scope}_root_path'
    
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
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
    gem 'rake'
gem 'thor'
gem 'pry', '~> 0.11.0'
gem 'activesupport', '~> 5.2', require: false
gem 'yajl-ruby', require: false
    
        return 404 unless @doc = find_doc(doc)
    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
            self.base_url.scheme = effective_base_url.scheme
        self.base_url.host = effective_base_url.host
        self.base_url.path = effective_base_url.path
        super
      ensure
        self.base_url.scheme = original_scheme
        self.base_url.host = original_host
        self.base_url.path = original_path
      end
    end
    
          if options && options[:ignore_case]
        base = base.downcase
        dest = dest.downcase
      end
    
            css('.status-badge').each do |node|
          node.name = 'code'
          node.content = node.content.strip
          node.remove_attribute('class')
        end
    
      #
  # Dispatches the supplied request for a given connection.
  #
  def dispatch_request(cli, request)
    # Is the client requesting keep-alive?
    if ((request['Connection']) and
       (request['Connection'].downcase == 'Keep-Alive'.downcase))
      cli.keepalive = true
    end
    
    
end
end
end

    
              data = connection.get_once(length, timeout)
          unless data && data.length == length
            raise ::RuntimeError, 'Kerberos Client: failed to read response'
          end
    
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
    
                seq = OpenSSL::ASN1::Sequence.new(seqs)
    
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
    
        def check_encoding!
      return if @checked_encoding
      @checked_encoding = true
      @template, @original_encoding = Sass::Util.check_sass_encoding(@template)
    end
    
    module Sass
  # The abstract base class for lexical environments for SassScript.
  class BaseEnvironment
    class << self
      # Note: when updating this,
      # update sass/yard/inherited_hash.rb as well.
      def inherited_hash_accessor(name)
        inherited_hash_reader(name)
        inherited_hash_writer(name)
      end
    
      class GistTagNoCache < GistTag
    def initialize(tag_name, text, token)
      super
      @cache_disabled = true
    end
  end
end
    
    module Jekyll
    
    end