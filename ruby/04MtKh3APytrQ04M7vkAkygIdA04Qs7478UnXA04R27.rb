
        
          after do
    FileUtils.rm_rf(base_dir)
  end
    
      def notification_service
    @notification_service ||= NotificationService.new
  end
end

    
          files = find_by_filename(query.term) + find_by_content(query.term)
    
    require 'omniauth'
require 'openssl'
require 'jwt'
    
      describe '#can_approve?' do
    context 'when project_member has request an invite' do
      before do
        expect(project_member).to receive(:request?).and_return(true)
      end
    
          diff_file = subject.diff_files.find { |file| file.new_path == stub_path }
    
    module ChronicDurationAttribute
  extend ActiveSupport::Concern
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
        it 'requires a valid log level' do
      @log.level = nil
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
      def mof_upload(smb_share)
    share = '\\\\#{datastore['RHOST']}\\ADMIN$'
    filename = '#{Rex::Text.rand_text_alpha(8)}.exe'
    
      # Check for modules using the DEBUG datastore option
  #
  # @see https://github.com/rapid7/metasploit-framework/issues/3816
  def check_use_datastore_debug
    if @source =~ /datastore\[[''](?i)DEBUG(?-i)['']\]/
      error('Please don\'t use the DEBUG datastore option in production, it has an special meaning and is used for development')
    end
  end
    
        xml = xml_header + xml_body
    xml.gsub!(/CONTACT_FULL_NAME/, contact_full_name);
    xml.gsub!(/CONTACT_LAST_NAME/, contact_full_name.split(' ')[-1]);
    xml.gsub!(/CONTACT_FIRST_NAME/, contact_full_name.split(' ')[0]);
    xml.gsub!(/EXE_PATH/, 'http.\\' + exe_filename);
    
    
IAX_SUBTYPE_NEW     = 1
IAX_SUBTYPE_PING    = 2
IAX_SUBTYPE_PONG    = 3
IAX_SUBTYPE_ANSWER  = 4
IAX_SUBTYPE_ACK     = 4
IAX_SUBTYPE_HANGUP  = 5
IAX_SUBTYPE_REJECT  = 6
IAX_SUBTYPE_ACCEPT  = 7
IAX_SUBTYPE_AUTHREQ = 8
IAX_SUBTYPE_AUTHREP = 9
IAX_SUBTYPE_INVAL   = 10
IAX_SUBTYPE_LAGRQ   = 11
IAX_SUBTYPE_LAGRP   = 12
IAX_SUBTYPE_REGREQ  = 13
IAX_SUBTYPE_REGAUTH = 14
IAX_SUBTYPE_REGACK  = 15
IAX_SUBTYPE_REGREJ  = 16
IAX_SUBTYPE_REGREL  = 17
IAX_SUBTYPE_VNAK    = 18
    
              # Encodes the auth_time field
          #
          # @return [String]
          def encode_auth_time
            [auth_time].pack('N')
          end
    
              # Encodes the msg_type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_msg_type
            bn = OpenSSL::BN.new(msg_type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
                res = ''
            case etype
            when RC4_HMAC
              res = encrypt_rc4_hmac(data, key, 5)
            else
              raise ::NotImplementedError, 'EncryptedData schema is not supported'
            end
    
          shipments.delete_all
    
          def hash_methods
        [
          :email,
          :customer,
          :customer_id,
          :ip,
          :order_id,
          :shipping,
          :tax,
          :subtotal,
          :discount,
          :currency,
          :billing_address,
          :shipping_address
        ]
      end
    
          order.associate_user!(original_order.user) if original_order.user
    
        context 'with a non-cancelled return item' do
      let!(:return_item) { create(:return_item, inventory_unit: inventory_unit) }