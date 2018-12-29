
        
          def ring_time
    (self.ring_finish || Time.now).to_i - self.ring_start.to_i
  end
    
              case msg_type
          when Rex::Proto::Kerberos::Model::KRB_ERROR
            res = Rex::Proto::Kerberos::Model::KrbError.decode(asn1)
          when Rex::Proto::Kerberos::Model::AS_REP
            res = Rex::Proto::Kerberos::Model::KdcResponse.decode(asn1)
          when Rex::Proto::Kerberos::Model::TGS_REP
            res = Rex::Proto::Kerberos::Model::KdcResponse.decode(asn1)
          else
            raise ::RuntimeError, 'Kerberos Client: Unknown response'
          end
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Time into an String
          #
          # @return [String] encoded time
          def encode
            encoded = ''
            encoded << encode_auth_time
            encoded << encode_start_time
            encoded << encode_end_time
            encoded << encode_renew_time
    
                decode_asn1(asn1)
          end
    
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
    
          # Wraps page formatted data to Nokogiri::HTML document.
      #
      def build_document(content)
        Nokogiri::HTML::fragment(%{<div id='gollum-root'>} + content.to_s + %{</div>}, 'UTF-8')
      end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, true
    
        page = @wiki.page('k')
    assert_equal '한글 text', utf8(page.raw_data)
    assert_equal 'def', page.version.message
  end
    
          ws  = WorkSpace.new(binding)
      irb = Irb.new(ws)
    
      s.require_paths = %w[lib]
    
      # for now
  worker_count = 1
    
    class SinatraWorker
  include Sidekiq::Worker
    
        UnitOfWork = Struct.new(:queue, :job) do
      def acknowledge
        # nothing to do
      end
    
        def redis(&block)
      Sidekiq.redis(&block)
    end
    
          if file.kind_of?(String)
        ERB.new(file).result(binding)
      else
        send(:'_erb_#{file}')
      end
    end
  end
end
