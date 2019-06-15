
        
                def to_s
          @symbol.to_s
        end
        alias to_str to_s
    
                    entry.author do |author|
                  author.name('DHH')
                end
              end
            end
          end
    EOT
  def index
    @scrolls = [
      Scroll.new(1, '1', 'Hello One', 'Something <i>COOL!</i>', Time.utc(2007, 12, 12, 15), Time.utc(2007, 12, 12, 15)),
      Scroll.new(2, '2', 'Hello Two', 'Something Boring', Time.utc(2007, 12, 12, 15)),
    ]
    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
      config.on_event :test_case_finished do |event|
    f.after_feature_element(event.test_case)
  end
    
          def jekyll
        JekyllDrop.global
      end
    
        # See {CapabilityHost#capability}
    def capability(*args)
      super
    rescue Errors::CapabilityNotFound => e
      raise Errors::GuestCapabilityNotFound,
        cap: e.extra_data[:cap],
        guest: name
    rescue Errors::CapabilityInvalid => e
      raise Errors::GuestCapabilityInvalid,
        cap: e.extra_data[:cap],
        guest: name
    end
    
            # This contains all the configuration plugins by scope.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :configs
    
      #
  # Move these into an IPMI stack or mixin at some point
  #
    
              # Encodes the start_time field
          #
          # @return [String]
          def encode_start_time
            [start_time].pack('N')
          end
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
              # Decodes the key_expiration field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_key_expiration(input)
            input.value[0].value
          end
    
              private
    
              # Decodes the stime field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_stime(input)
            input.value[0].value
          end