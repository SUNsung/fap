
        
                def has_attribute?(attribute)
          if attribute == :location
            get_info(:address).present?
          else
            get_info(attribute).present?
          end
        end
    
          def link
        save if identity.new_record?
      end
    
          def to_markdown
        '[![#{title}](#{image_url})](#{link_url})'
      end
    
            def value_color
          STATUS_COLOR[@status.to_sym] || STATUS_COLOR[:unknown]
        end
      end
    end
  end
end

    
      #
  # Brings in from an array like yo.
  #
  def from_a(ary)
    ary.each { |e|
      self[e[0]] = e[1]
    }
  end
    
      #
  # If there were CGI parameters in the URI, this will hold a hash of each
  # variable to value.  If there is more than one value for a given variable,
  # an array of each value is returned.
  #
  def qstring
    self.uri_parts['QueryString']
  end
    
    module Rex
  module Proto
    module Kerberos
      # This class is a representation of a kerberos client.
      class Client
        # @!attribute host
        #   @return [String] The kerberos server host
        attr_accessor :host
        # @!attribute port
        #   @return [Integer] The kerberos server port
        attr_accessor :port
        # @!attribute timeout
        #   @return [Integer] The connect / read timeout
        attr_accessor :timeout
        # @todo Support UDP
        # @!attribute protocol
        #   @return [String] The transport protocol used (tcp/udp)
        attr_accessor :protocol
        # @!attribute connection
        #   @return [IO] The connection established through Rex sockets
        attr_accessor :connection
        # @!attribute context
        #   @return [Hash] The Msf context where the connection belongs to
        attr_accessor :context
    
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
    
              # Encodes the data
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_data(data)
            OpenSSL::ASN1::OctetString.new(data)
          end
        end
      end
    end
  end
end
    
              # Decodes the key from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [EncryptionKey]
          def decode_key(input)
            Rex::Proto::Kerberos::Model::EncryptionKey.decode(input.value[0])
          end
    
    RUBY_ENGINE = 'ruby' unless defined? RUBY_ENGINE
source 'https://rubygems.org' unless ENV['QUICK']
gemspec
    
        <div id='backtrace' class='condensed'>
      <h3>BACKTRACE</h3>
      <p><a href='#' id='expando'
            onclick='toggleBacktrace(); return false'>(expand)</a></p>
      <p id='nav'><strong>JUMP TO:</strong>
         <% unless bad_request?(exception) %>
            <a href='#get-info'>GET</a>
            <a href='#post-info'>POST</a>
         <% end %>
         <a href='#cookie-info'>COOKIES</a>
         <a href='#env-info'>ENV</a>
      </p>
      <div class='clear'></div>
    
    Liquid::Template.register_tag('include_array', Jekyll::IncludeArrayTag)

    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
    After do
  ORIGINAL_BUNDLE_VARS.each_pair do |key, value|
    ENV[key] = value
  end
end
    
    # This stuff needs to be run after Paperclip is defined.
require 'paperclip/io_adapters/registry'
require 'paperclip/io_adapters/abstract_adapter'
require 'paperclip/io_adapters/empty_string_adapter'
require 'paperclip/io_adapters/identity_adapter'
require 'paperclip/io_adapters/file_adapter'
require 'paperclip/io_adapters/stringio_adapter'
require 'paperclip/io_adapters/data_uri_adapter'
require 'paperclip/io_adapters/nil_adapter'
require 'paperclip/io_adapters/attachment_adapter'
require 'paperclip/io_adapters/uploaded_file_adapter'
require 'paperclip/io_adapters/uri_adapter'
require 'paperclip/io_adapters/http_url_proxy_adapter'

    
        def make
      geometry = GeometryParser.new(geometry_string.strip).make
      geometry || raise(Errors::NotIdentifiedByImageMagickError.new)
    end
    
        def define
      define_flush_errors
      define_getters
      define_setter
      define_query
      register_new_attachment
      add_active_record_callbacks
      add_paperclip_callbacks
      add_required_validations
    end
    
        # Returns the underscored, pluralized version of the class name.
    # e.g. 'users' for the User class.
    # NOTE: The arguments need to be optional, because some tools fetch
    # all class names. Calling #class will return the expected class.
    def class attachment = nil, style_name = nil
      return super() if attachment.nil? && style_name.nil?
      plural_cache.underscore_and_pluralize_class(attachment.instance.class)
    end