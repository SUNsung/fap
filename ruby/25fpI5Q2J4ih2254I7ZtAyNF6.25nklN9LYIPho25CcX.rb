
        
          describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
      describe '#interpolate_jsonpaths' do
    let(:payload) { { :there => { :world => 'WORLD' }, :works => 'should work' } }
    
      it 'accepts a Bignum as a seed' do
    srand(0x12345678901234567890)
    srand.should == 0x12345678901234567890
  end
    
          it 'raises ArgumentError if passed negative value' do
        -> { warn '', uplevel: -2 }.should raise_error(ArgumentError)
        -> { warn '', uplevel: -100 }.should raise_error(ArgumentError)
      end
    
    
  def self.create_rakp_hmac_sha1_salt(con_sid, bmc_sid, con_rid, bmc_rid, bmc_gid, auth_level, username)
    con_sid +
    bmc_sid +
    con_rid +
    bmc_rid +
    bmc_gid +
    [ auth_level ].pack('C') +
    [ username.length ].pack('C') +
    username
  end
    
            # Sends a kerberos request, and reads the response through the connection
        #
        # @param req [Rex::Proto::Kerberos::Model::KdcRequest] the request to send
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] The kerberos message
        # @raise [RuntimeError] if the transport protocol is unknown or the response can't be parsed.
        # @raise [NotImplementedError] if the transport protocol isn't supported
        def send_recv(req)
          send_request(req)
          res = recv_response
    
              # Encodes the end_time field
          #
          # @return [String]
          def encode_end_time
            [end_time].pack('N')
          end
    
                res = checksum + encrypted
            res
          end
        end
      end
    end
  end
end
    
              # Rex::Proto::Kerberos::Model::AuthorizationData decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Authorization Data decoding not supported'
          end
    
            end
      end
    end
  end
end
    
              # Rex::Proto::Kerberos::Model::KdcResponse encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'KdcResponse encoding not supported'
          end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
          get :update, params: {id: note.id, set_unread: 'false'}, format: :json
    
        shared_examples 'on a visible post' do
      it 'creates the participation' do
        post :create, params: {post_id: @post.id}
        expect(alice.participations.where(:target_id => @post.id)).to exist
        expect(response.code).to eq('201')
      end
    end