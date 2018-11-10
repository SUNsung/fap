
        
        platforms :ruby do
  gem 'sqlite3'
end
    
        users.all?(&:blank?)
  end
    
      # Set the OmniAuth path prefix so it can be overridden when
  # Devise is used in a mountable engine
  mattr_accessor :omniauth_path_prefix
  @@omniauth_path_prefix = nil
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
                seq.to_der
          end
    
              def self.attr_accessor(*vars)
            @attributes ||= []
            @attributes.concat vars
            super(*vars)
          end
    
              # Decodes the Rex::Proto::Kerberos::Model::EncKdcResponse from an input
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
              raise ::RuntimeError, 'Failed to decode EncKdcResponse, invalid input'
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
    
                res = ''
            case etype
            when RSA_MD5
              res = checksum_rsa_md5(data)
            else
              raise ::NotImplementedError, 'EncryptedData schema is not supported'
            end
    
        def URIEncodePair(cc1, cc2, result, index)
      u = ((cc1 >> 6) & 0xF) + 1;
      w = (cc1 >> 2) & 0xF;
      x = cc1 & 3;
      y = (cc2 >> 6) & 0xF;
      z = cc2 & 63;
      octets = Array.new(4);
      octets[0] = (u >> 2) + 240;
      octets[1] = (((u & 3) << 4) | w) + 128;
      octets[2] = ((x << 4) | y) + 128;
      octets[3] = z + 128;
      return URIEncodeOctets(octets, result, index);
    end
    
          def string_to_code string
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
          def remove_page_extentions(page_path)
        Gollum::Markup.formats.values.each do |format|
          page_path = page_path.gsub(/\.#{format[:regexp]}$/, '')
        end
        return page_path
      end
    
          def css # custom css
        @css
      end
    
        # TODO: Remove to_url once write_page changes are merged.
    @wiki.write_page('ééééé'.to_url, :markdown, '한글 text', commit_details)
    page = @wiki.page('eeeee')
    assert_equal '한글 text', utf8(page.raw_data)
  end
    
    # Read command line options into `options` hash
begin
  opts.parse!
rescue OptionParser::InvalidOption
  puts 'gollum: #{$!.message}'
  puts 'gollum: try 'gollum --help' for more information'
  exit
end
    
    # external
require 'github/markup'
require 'sanitize'