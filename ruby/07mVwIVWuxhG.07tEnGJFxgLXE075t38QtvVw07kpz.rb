
        
        module Homebrew
  module_function
    
    module Homebrew
  module_function
    
        begin
      json = JSON.parse(self.body)
    rescue JSON::ParserError => e
      elog('#{e.class} #{e.message}\n#{e.backtrace * '\n'}')
    end
    
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
    
              res
        end
    
                if OpenSSL::HMAC.digest('MD5', k1, decrypted) != checksum
              raise ::RuntimeError, 'RC4-HMAC decryption failed, incorrect checksum verification'
            end
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcResponse
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            input.value[0].value.each do |val|
              case val.tag
              when 0
                self.pvno = decode_pvno(val)
              when 1
                self.msg_type = decode_msg_type(val)
              when 3
                self.crealm = decode_crealm(val)
              when 4
                self.cname = decode_cname(val)
              when 5
                self.ticket = decode_ticket(val)
              when 6
                self.enc_part = decode_enc_part(val)
              else
                raise ::RuntimeError, 'Failed to decode KDC-RESPONSE SEQUENCE'
              end
            end
          end
    
            context 'when fetching a gem from rubygems' do
    
              unless inventory_unit.respond_to?(can_event) &&
              inventory_unit.send(can_event)
            render plain: { exception: 'cannot transition to #{@event}' }.to_json,
                   status: 200
            false
          end
        end
    
            def perform_payment_action(action, *args)
          authorize! action, Payment
          @payment.send('#{action}!', *args)
          respond_with(@payment, default_template: :show)
        end
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end
    
            def taxon_params
          if params[:taxon] && !params[:taxon].empty?
            params.require(:taxon).permit(permitted_taxon_attributes)
          else
            {}
          end
        end
      end
    end
  end
end

    
            def update
          authorize! :update, user
          if user.update_attributes(user_params)
            respond_with(user, status: 200, default_template: :show)
          else
            invalid_resource!(user)
          end
        end