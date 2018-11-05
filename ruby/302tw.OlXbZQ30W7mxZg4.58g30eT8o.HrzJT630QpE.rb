
        
          it 'accepts a Bignum as a seed' do
    srand(0x12345678901234567890)
    srand.should == 0x12345678901234567890
  end
    
      it_behaves_like :kernel_system, :system, KernelSpecs::Method.new
end
    
      #
  # Split the URI into the resource being requested and its query string.
  #
  def update_uri_parts
    # If it has a query string, get the parts.
    if ((self.raw_uri) and (md = self.raw_uri.match(/(.+?)\?(.*)$/)))
      self.uri_parts['QueryString'] = parse_cgi_qstring(md[2])
      self.uri_parts['Resource']    = md[1]
    # Otherwise, just assume that the URI is equal to the resource being
    # requested.
    else
      self.uri_parts['QueryString'] = {}
      self.uri_parts['Resource']    = self.raw_uri
    end
    
    
  #
  # Waits for the HTTP service to terminate
  #
  def wait
    self.listener.wait if self.listener
  end
    
      def each_audio_frame(&block)
    self.audio_buff.each do |frame|
      block.call(frame)
    end
  end
    
                encoded
          end
    
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
    
              # Encodes the type
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type(type)
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
        # Parses the CSS template and applies various transformations
    #
    # @return [Tree::Node] The root node of the parsed tree
    def build_tree
      root = Sass::SCSS::CssParser.new(@template, @options[:filename], nil).parse
      parse_selectors(root)
      expand_commas(root)
      nest_seqs(root)
      parent_ref_rules(root)
      flatten_rules(root)
      bubble_subject(root)
      fold_commas(root)
      dump_selectors(root)
      root
    end
    
          # Get the publicly-visible URL for an imported file. This URL is used by
      # source maps to link to the source stylesheet. This may return `nil` to
      # indicate that no public URL is available; however, this will cause
      # sourcemap generation to fail if any CSS is generated from files imported
      # from this importer.
      #
      # If an absolute 'file:' URI can be produced for an imported file, that
      # should be preferred to returning `nil`. However, a URL relative to
      # `sourcemap_directory` should be preferred over an absolute 'file:' URI.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param sourcemap_directory [String, NilClass] The absolute path to a
      #   directory on disk where the sourcemap will be saved. If uri refers to
      #   a file on disk that's accessible relative to sourcemap_directory, this
      #   may return a relative URL. This may be `nil` if the sourcemap's
      #   eventual location is unknown.
      # @return [String?] The publicly-visible URL for this file, or `nil`
      #   indicating that no publicly-visible URL exists. This should be
      #   appropriately URL-escaped.
      def public_url(uri, sourcemap_directory)
        return if @public_url_warning_issued
        @public_url_warning_issued = true
        Sass::Util.sass_warn <<WARNING
WARNING: #{self.class.name} should define the #public_url method.
WARNING
        nil
      end
    
    @@ index
  <h1>Sinatra + Sidekiq Example</h1>
  <h2>Failed: <%= @failed %></h2>
  <h2>Processed: <%= @processed %></h2>
    
          def create_worker_test
        template_file = File.join(
            'test/workers',
            class_path,
            '#{file_name}_worker_test.rb'
        )
        template 'worker_test.rb.erb', template_file
      end
    
          def perform(yml)
        (target, method_name, args) = YAML.load(yml)
        msg = target.public_send(method_name, *args)
        # The email method can return nil, which causes ActionMailer to return
        # an undeliverable empty message.
        if msg
          deliver(msg)
        else
          raise '#{target.name}##{method_name} returned an undeliverable mail object'
        end
      end
    
        EXPIRY = 60 * 60 * 24