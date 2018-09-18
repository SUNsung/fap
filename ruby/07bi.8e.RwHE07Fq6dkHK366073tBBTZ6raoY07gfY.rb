
        
        gem 'activemodel-serializers-xml', github: 'rails/activemodel-serializers-xml'
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
          private
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
          Homebrew.failed = true
      print '#{f}: ' if ff.size > 1
      puts missing.join(' ')
    end
  end
end

    
        if !version || ARGV.named.length > 2
      onoe usage
      puts '#{name} installed versions: #{versions}'
      exit 1
    end
    
        # ghettoooooo!
    # If we don't have any newlines..., put one there.
    if (header.size > 0 && header !~ /\r\n/)
      header << '\r\n'
    end
    
      # Provides the uri of the redirection location.
  #
  # @return [URI] the uri of the redirection location.
  # @return [nil] if the response hasn't a Location header or it isn't a valid uri.
  def redirection
    begin
      URI(headers['Location'])
    rescue ::URI::InvalidURIError
      nil
    end
  end
    
    
IAX_TYPE_VOICE   = 2
IAX_TYPE_CONTROL = 4
IAX_TYPE_IAX     = 6
IAX_TYPE_DTMF_BEGIN = 1
IAX_TYPE_DTMF_END   = 12
    
            # UDP isn't supported
        #
        # @raise [NotImplementedError]
        def send_request_udp(req)
          raise ::NotImplementedError, 'Kerberos Client: UDP unsupported'
        end
    
              # Encodes the components field
          #
          # @return [String]
          def encode_components
            encoded = ''
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a KRB_AP_REQ definition, containing the Kerberos protocol version number,
        # the message type KRB_AP_REQ, an options field to indicate any options in use, and the ticket and authenticator
        # themselves
        class ApReq < Element
          # @!attribute pvno
          #   @return [Integer] The protocol version number
          attr_accessor :pvno
          # @!attribute msg_type
          #   @return [Integer] The type of the protocol message
          attr_accessor :msg_type
          # @!attribute options
          #   @return [Integer] request options, affects processing
          attr_accessor :options
          # @!attribute ticket
          #   @return [Rex::Proto::Kerberos::Model::Ticket] The ticket authenticating the client to the server
          attr_accessor :ticket
          # @!attribute authenticator
          #   @return [Rex::Proto::Kerberos::Model::EncryptedData] This contains the authenticator, which includes the
          #   client's choice of a subkey
          attr_accessor :authenticator
    
              # Decodes the Rex::Proto::Kerberos::Model::Element from the input. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def decode(input)
            raise ::NoMethodError, 'Method designed to be overridden'
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcResponse
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            input.value[0].value.each do |val|
              case val.tag
              when 0
                self.pvno = decode_pvno(val)
              when 1
                self.msg_type = decode_msg_type(val)
              when 3
                self.crealm = decode_crealm(val)
              when 4
                self.cname = decode_cname(val)
              when 5
                self.ticket = decode_ticket(val)
              when 6
                self.enc_part = decode_enc_part(val)
              else
                raise ::RuntimeError, 'Failed to decode KDC-RESPONSE SEQUENCE'
              end
            end
          end
    
              # Rex::Proto::Kerberos::Model::LastRequest encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'LastRequest encoding not supported'
          end
    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
    module Pod
  require 'pathname'
  require 'tmpdir'
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @short_output = argv.flag?('short')
          super
        end
    
          def executable_path
        <<-EOS
### Installation Source
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
        <% unless bad_request?(exception) %>
      <div id='get'>
        <h3 id='get-info'>GET</h3>
        <% if req.GET and not req.GET.empty? %>
          <table class='req'>
            <tr>
              <th>Variable</th>
              <th>Value</th>
            </tr>
             <% req.GET.sort_by { |k, v| k.to_s }.each { |key, val| %>
            <tr>
              <td><%=h key %></td>
              <td class='code'><div><%=h val.inspect %></div></td>
            </tr>
            <% } %>
          </table>
        <% else %>
          <p class='no-data'>No GET data.</p>
        <% end %>
        <div class='clear'></div>
      </div> <!-- /GET -->
    
          def compare_with_real_token(token, session)
        secure_compare(token, real_token(session))
      end