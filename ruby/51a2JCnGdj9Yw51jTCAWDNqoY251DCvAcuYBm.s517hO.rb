
        
          end
    
            # Builds a new note using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          hash = Representation.symbolize_hash(raw_hash)
          hash[:author] &&= Representation::User.from_json_hash(hash[:author])
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
        it 'returns a label 'No' if any falsy value is given' do
      [false, nil].each { |value|
        label = yes_no(value)
        expect(label).to be_html_safe
        expect(Nokogiri(label).text).to eq 'No'
      }
    end
  end
    
      describe 'DotHelper::DotDrawer' do
    describe '#id' do
      it 'properly escapes double quotaion and backslash' do
        expect(DotHelper::DotDrawer.draw(foo: '') {
          id('hello\\'')
        }).to eq(''hello\\\\\\''')
      end
    end
  end
end

    
          @agent1.update!(disabled: true)
    
    end
    
    
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
    
      #
  # Payload types were identified from xCAT-server source code (IPMI.pm)
  #
  PAYLOAD_IPMI = 0
  PAYLOAD_SOL  = 1
  PAYLOAD_RMCPPLUSOPEN_REQ = 0x10
  PAYLOAD_RMCPPLUSOPEN_REP = 0x11
  PAYLOAD_RAKP1 = 0x12
  PAYLOAD_RAKP2 = 0x13
  PAYLOAD_RAKP3 = 0x14
  PAYLOAD_RAKP4 = 0x15
    
                encoded
          end
    
              # Encrypts the cipher using RC4-HMAC schema
          #
          # @param data [String] the data to encrypt
          # @param key [String] the key to encrypt
          # @param msg_type [Integer] the message type
          # @return [String] the encrypted data
          def encrypt_rc4_hmac(data, key, msg_type)
            k1 = OpenSSL::HMAC.digest('MD5', key, [msg_type].pack('V'))
    
              # @!attribute type
          #   @return [Integer] The algorithm used to generate the checksum
          attr_accessor :type
          # @!attribute checksum
          #   @return [String] The checksum itself
          attr_accessor :checksum
    
              # Decodes the Rex::Proto::Kerberos::Model::KrbError from an input
          #
          # @param input [String, OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::ASN1Data
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode KrbError, invalid input'
            end
    
      # body
  xml.tag!('body') do
    xml.tag!('outline', text: TITLE, title: TITLE) do
      blogs.each do |blog|
        xml.tag!('outline', type: 'rss', text: blog.name, title: blog.name,
          xmlUrl: blog.rss_url, htmlUrl: blog.web_url)
      end
    end
  end
end
    
      uninstall_preflight do
    system_command '#{HOMEBREW_PREFIX}/bin/brew', args: ['cask', 'uninstall', 'adobe-photoshop-lightroom600']
  end
    
          def deliver(msg)
        if msg.respond_to?(:deliver_now)
          # Rails 4.2/5.0
          msg.deliver_now
        else
          # Rails 3.2/4.0/4.1
          msg.deliver
        end
      end
    end