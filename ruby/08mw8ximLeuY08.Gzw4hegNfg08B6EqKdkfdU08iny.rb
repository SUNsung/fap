
        
                def preload_pipeline_warnings
          # This preloads the number of warnings for every pipeline, ensuring
          # that Ci::Pipeline#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.number_of_warnings
        end
    
          def rate_limit_resets_in
        # We add a few seconds to the rate limit so we don't _immediately_
        # resume when the rate limit resets as this may result in us performing
        # a request before GitHub has a chance to reset the limit.
        octokit.rate_limit.resets_in + 5
      end
    
            def sidekiq_worker_class
          ImportDiffNoteWorker
        end
    
            def collection_method
          :lfs_objects
        end
    
      #
  # Host address:port associated with this request/response
  #
  attr_accessor :peerinfo
    
        # Unsupported codec, return empty
    else
      dprint('UNKNOWN CODEC: #{self.codec.inspect}')
      ''
    end
  end
    
    IAX_IE_CALLED_NUMBER  = 1
IAX_IE_CALLING_NUMBER = 2
IAX_IE_AUTH_METHODS   = 3
IAX_IE_CALLING_NAME   = 4
IAX_IE_USERNAME       = 6
IAX_IE_DESIRED_CODEC  = 9
IAX_IE_ORIGINAL_DID   = 10
IAX_IE_ACTUAL_CODECS  = 8
IAX_IE_PROTO_VERSION  = 11
IAX_IE_REG_REFRESH    = 19
IAX_IE_CHALLENGE_DATA = 15
IAX_IE_CHALLENGE_RESP = 16
IAX_IE_APPARENT_ADDR  = 18
IAX_IE_REGREJ_CAUSE   = 22
IAX_IE_HANGUP_CAUSE   = 42
    
                data_encrypt = Rex::Text::rand_text(8) + data
    
              # Rex::Proto::Kerberos::Model::AuthorizationData decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Authorization Data decoding not supported'
          end
    
              # Encodes a Rex::Proto::Kerberos::Model::PreAuthData into an ASN.1 String
          #
          # @return [String]
          def encode
            type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_type], 1, :CONTEXT_SPECIFIC)
            value_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_value], 2, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new([type_asn1, value_asn1])