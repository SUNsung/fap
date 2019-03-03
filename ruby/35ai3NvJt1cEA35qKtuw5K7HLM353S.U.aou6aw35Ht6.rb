
        
          include Proto
    
    =begin
      +------+-----------+-----------------------------------------+
      | Hex  | Name      | Description                             |
      +------+-----------+-----------------------------------------+
      | 0x01 | NEW       | Initiate a new call                     |
      |      |           |                                         |
      | 0x02 | PING      | Ping request                            |
      |      |           |                                         |
      | 0x03 | PONG      | Ping or poke reply                      |
      |      |           |                                         |
      | 0x04 | ACK       | Explicit acknowledgment                 |
      |      |           |                                         |
      | 0x05 | HANGUP    | Initiate call tear-down                 |
      |      |           |                                         |
      | 0x06 | REJECT    | Reject a call                           |
      |      |           |                                         |
      | 0x07 | ACCEPT    | Accept a call                           |
      |      |           |                                         |
      | 0x08 | AUTHREQ   | Authentication request                  |
      |      |           |                                         |
      | 0x09 | AUTHREP   | Authentication reply                    |
      |      |           |                                         |
      | 0x0a | INVAL     | Invalid message                         |
      |      |           |                                         |
      | 0x0b | LAGRQ     | Lag request                             |
      |      |           |                                         |
      | 0x0c | LAGRP     | Lag reply                               |
      |      |           |                                         |
      | 0x0d | REGREQ    | Registration request                    |
      |      |           |                                         |
      | 0x0e | REGAUTH   | Registration authentication             |
      |      |           |                                         |
      | 0x0f | REGACK    | Registration acknowledgement            |
      |      |           |                                         |
      | 0x10 | REGREJ    | Registration reject                     |
      |      |           |                                         |
      | 0x11 | REGREL    | Registration release                    |
      |      |           |                                         |
      | 0x12 | VNAK      | Video/Voice retransmit request          |
      |      |           |                                         |
      | 0x13 | DPREQ     | Dialplan request                        |
      |      |           |                                         |
      | 0x14 | DPREP     | Dialplan reply                          |
      |      |           |                                         |
      | 0x15 | DIAL      | Dial                                    |
      |      |           |                                         |
      | 0x16 | TXREQ     | Transfer request                        |
      |      |           |                                         |
      | 0x17 | TXCNT     | Transfer connect                        |
      |      |           |                                         |
      | 0x18 | TXACC     | Transfer accept                         |
      |      |           |                                         |
      | 0x19 | TXREADY   | Transfer ready                          |
      |      |           |                                         |
      | 0x1a | TXREL     | Transfer release                        |
      |      |           |                                         |
      | 0x1b | TXREJ     | Transfer reject                         |
      |      |           |                                         |
      | 0x1c | QUELCH    | Halt audio/video [media] transmission   |
      |      |           |                                         |
      | 0x1d | UNQUELCH  | Resume audio/video [media] transmission |
      |      |           |                                         |
      | 0x1e | POKE      | Poke request                            |
      |      |           |                                         |
      | 0x1f | Reserved  | Reserved for future use                 |
      |      |           |                                         |
      | 0x20 | MWI       | Message waiting indication              |
      |      |           |                                         |
      | 0x21 | UNSUPPORT | Unsupported message                     |
      |      |           |                                         |
      | 0x22 | TRANSFER  | Remote transfer request                 |
      |      |           |                                         |
      | 0x23 | Reserved  | Reserved for future use                 |
      |      |           |                                         |
      | 0x24 | Reserved  | Reserved for future use                 |
      |      |           |                                         |
      | 0x25 | Reserved  | Reserved for future use                 |
      +------+-----------+-----------------------------------------+
=end
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the Rex::Proto::Kerberos::Model::Element from the input. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def decode(input)
            raise ::NoMethodError, 'Method designed to be overridden'
          end
    
                res = ''
            case etype
            when RSA_MD5
              res = checksum_rsa_md5(data)
            else
              raise ::NotImplementedError, 'EncryptedData schema is not supported'
            end
    
      namespace :package do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Build #{gem} packages'
      task gem => %w[.gem .tar.gz].map { |e| package(gem, e) }
    end
    
    get '/' do
  halt erb(:login) unless params[:user]
  erb :chat, :locals => { :user => params[:user].gsub(/\W/, '') }
end
    
    
    {    if (pre.style.display == 'block') {
      pre.style.display = 'none';
      post.style.display = 'none';
      context.style.background = 'none';
    } else {
      pre.style.display = 'block';
      post.style.display = 'block';
      context.style.background = '#fffed9';
    }
  }
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
          if simple_current_order.nil? || simple_current_order.item_count.zero?
        text = '<span class='glyphicon glyphicon-shopping-cart'></span> #{text}: (#{Spree.t('empty')})'
        css_class = 'empty'
      else
        text = '<span class='glyphicon glyphicon-shopping-cart'></span> #{text}: (#{simple_current_order.item_count})
                <span class='amount'>#{simple_current_order.display_total.to_html}</span>'
        css_class = 'full'
      end