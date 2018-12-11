
        
            def types_as_json
      @types.values.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
            # Returns the instance variables as a hash of key-value pairs.
        def instance_variables_hash
          instance_variables.inject({}) do |acc, iv|
            acc[iv.to_s[1..-1]] = instance_variable_get(iv)
            acc
          end
        end
    
        case itype
    when IAX_TYPE_DTMF_BEGIN
      self.dprint('DTMF BEG: #{pkt[11,1]}')
      self.dtmf << pkt[11,1]
    
    
end
end
end

    
              private
    
                int
          end
    
              # Decodes the key from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [EncryptionKey]
          def decode_key(input)
            Rex::Proto::Kerberos::Model::EncryptionKey.decode(input.value[0])
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
    
                seq_values.each do |val|
              case val.tag
              when 0
                self.options = decode_options(val)
              when 1
                self.cname = decode_cname(val)
              when 2
                self.realm = decode_realm(val)
              when 3
                self.sname = decode_sname(val)
              when 4
                self.from = decode_from(val)
              when 5
                self.till = decode_till(val)
              when 6
                self.rtime = decode_rtime(val)
              when 7
                self.nonce = decode_nonce(val)
              when 8
                self.etype = decode_etype(val)
              when 10
                self.enc_auth_data = decode_enc_auth_data(val)
              else
                raise ::RuntimeError, 'Failed to decode KdcRequestBody SEQUENCE'
              end
            end
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::KrbError from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
        # Create a {Sass::Selector::CommaSequence} containing only a single
    # {Sass::Selector::Sequence}.
    #
    # @param sseqs [Array<Sass::Selector::Sequence, String>]
    # @return [Sass::Selector::CommaSequence]
    def make_seq(*sseqs)
      make_cseq(Sass::Selector::Sequence.new(sseqs))
    end
    
              def set_local_#{name}(name, value)
            @#{name}s ||= {}
            @#{name}s[name.tr('_', '-')] = value
          end
    
          opts.on('--stop-on-error', 'If a file fails to compile, exit immediately.',
                                 'Only meaningful for --watch and --update.') do
        @options[:stop_on_error] = true
      end
    end
    
    When /^(?:|I )choose '([^']*)'$/ do |field|
  choose(field)
end
    
    ENV['RAILS_ENV'] = 'test'
    
    require 'mimemagic'
require 'mimemagic/overlay'
require 'logger'
require 'terrapin'
    
        # resize to a new geometry
    # @param geometry [String] the Paperclip geometry definition to resize to
    # @example
    #   Paperclip::Geometry.new(150, 150).resize_to('50x50!')
    #   #=> Paperclip::Geometry(50, 50)
    def resize_to(geometry)
      new_geometry = Paperclip::Geometry.parse geometry
      case new_geometry.modifier
      when '!', '#'
        new_geometry
      when '>'
        if new_geometry.width >= self.width && new_geometry.height >= self.height
          self
        else
          scale_to new_geometry
        end
      when '<'
        if new_geometry.width <= self.width || new_geometry.height <= self.height
          self
        else
          scale_to new_geometry
        end
      else
        scale_to new_geometry
      end
    end
    
        module ClassMethods
      def attachment_definitions
        Paperclip::AttachmentRegistry.definitions_for(self)
      end
    end
  end
end
