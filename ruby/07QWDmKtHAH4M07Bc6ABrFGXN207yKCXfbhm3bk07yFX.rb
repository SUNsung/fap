
        
            Discourse::Cors.apply_headers(cors_origins, env, headers) if cors_origins
    
      describe '#<<' do
    it 'normalizes directive name' do
      builder << {
        script_src: ['symbol_underscore'],
        'script-src': ['symbol_dash'],
        'script_src' => ['string_underscore'],
        'script-src' => ['string_dash'],
      }
    
    # == Schema Information
#
# Table name: drafts
#
#  id         :integer          not null, primary key
#  user_id    :integer          not null
#  draft_key  :string           not null
#  data       :text             not null
#  created_at :datetime         not null
#  updated_at :datetime         not null
#  sequence   :integer          default(0), not null
#  revisions  :integer          default(1), not null
#
# Indexes
#
#  index_drafts_on_user_id_and_draft_key  (user_id,draft_key)
#

    
        def html_response?(headers)
      headers['Content-Type'] && headers['Content-Type'] =~ /html/
    end
  end
end

    
      context 'with a theme' do
    let!(:theme) {
      Fabricate(:theme).tap do |t|
        settings = <<~YML
          extend_content_security_policy:
            type: list
            default: 'script-src: from-theme.com'
        YML
        t.set_field(target: :settings, name: :yaml, value: settings)
        t.save!
      end
    }
    
      belongs_to :user
  after_save :trigger_badges
    
            page =
          if args.last.is_a?(Hash) && args.last[:page]
            args.last[:page]
          else
            1
          end
    
              issue.label_names.each do |label_name|
            # Although unlikely it's technically possible for an issue to be
            # given a label that was created and assigned after we imported all
            # the project's labels.
            next unless (label_id = label_finder.id_for(label_name))
    
            def collection_method
          :lfs_objects
        end
    
            attr_reader :attributes
    
            '#{route.request_method} #{route.path}' if route
      end
    end
  end
end

    
        resp.body =
      '<html><head>' +
      '<title>404 Not Found</title>' +
      '</head><body>' +
      '<h1>Not found</h1>' +
      'The requested URL #{html_escape(request.resource)} was not found on this server.<p><hr>' +
      '</body></html>'
    
            # Sends a kerberos request through the connection
        #
        # @param req [Rex::Proto::Kerberos::Model::KdcRequest] the request to send
        # @return [Integer] the number of bytes sent
        # @raise [RuntimeError] if the transport protocol is unknown
        # @raise [NotImplementedError] if the transport protocol isn't supported
        def send_request(req)
          connect
    
              # Encodes the name_type field
          #
          # @return [String]
          def encode_name_type
            [name_type].pack('N')
          end
    
              # @!attribute type
          #   @return [Integer] The algorithm used to generate the checksum
          attr_accessor :type
          # @!attribute checksum
          #   @return [String] The checksum itself
          attr_accessor :checksum
    
              # Rex::Proto::Kerberos::Model::EncKdcResponse encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'EncKdcResponse encoding not supported'
          end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of an encrypted message.
        class EncryptedData < Element
          # @!attribute name_type
          #   @return [Integer] The encryption algorithm
          attr_accessor :etype
          # @!attribute kvno
          #   @return [Integer] The version number of the key
          attr_accessor :kvno
          # @!attribute cipher
          #   @return [String] The enciphered text
          attr_accessor :cipher
    
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
    
              # Decodes the realm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_realm(input)
            input.value[0].value
          end
    
          def actual_path
        $PROGRAM_NAME
      end
    end
  end
end

    
      before_action { @server = organization.servers.present.find_by_permalink!(params[:server_id]) }
  before_action { params[:id] && @credential = @server.credentials.find_by_key!(params[:id]) }
    
      def remove_from_queue
    if @message.queued_message && !@message.queued_message.locked?
      @message.queued_message.destroy
    end
    redirect_to_with_json organization_server_message_path(organization, @server, @message.id)
  end
    
      def toggle_ssl
    @track_domain.update(:ssl_enabled => !@track_domain.ssl_enabled)
    redirect_to_with_json [organization, @server, :track_domains], :notice => 'SSL settings for #{@track_domain.full_name} updated successfully.'
  end
    
      def update
    @organization_user = organization.user_assignment(@user)
    if @organization_user.update(params.require(:organization_user).permit(:admin))
      redirect_to_with_json [organization, :users], :notice => 'Permissions for #{@organization_user.user.name} have been updated successfully.'
    else
      render_form_errors 'edit', @organization_user
    end
  end
    
      def create
    @webhook = @server.webhooks.build(safe_params)
    if @webhook.save
      redirect_to_with_json [organization, @server, :webhooks]
    else
      render_form_errors 'new', @webhook
    end
  end