
        
          Jekyll::External.require_if_present(Jekyll::External.blessed_gems) do |g, ver_constraint|
    cmd = g.split('-').last
    p.command(cmd.to_sym) do |c|
      c.syntax cmd
      c.action do
        Jekyll.logger.abort_with 'You must install the '#{g}' gem' \
          ' version #{ver_constraint} to use the 'jekyll #{cmd}' command.'
      end
    end
  end
    
          headers['Access-Control-Allow-Origin'] = origin || cors_origins[0]
      headers['Access-Control-Allow-Headers'] = 'Content-Type, Cache-Control, X-Requested-With, X-CSRF-Token, Discourse-Visible, User-Api-Key, User-Api-Client-Id'
      headers['Access-Control-Allow-Credentials'] = 'true'
      headers['Access-Control-Allow-Methods'] = 'POST, PUT, GET, OPTIONS, DELETE'
    end
    
          @directives.each do |directive, sources|
        if sources.is_a?(Array)
          policy.public_send(directive, *sources)
        else
          policy.public_send(directive, sources)
        end
      end
    
        delegate :base_url, to: :ContentSecurityPolicy
    
        private
    
          if SvgSprite.version(theme_ids) != params[:version]
        return redirect_to path(SvgSprite.path(theme_ids))
      end
    
        # NOTE: we only update the counts for users we have seen in the last hour
    #  this avoids a very expensive query that may run on the entire user base
    #  we also ensure we only touch the table if data changes
    
      def enable_bootstrap_mode(user)
    return if SiteSetting.bootstrap_mode_enabled
    
        log(action: 'generate',
        user_auth_token_id: user_auth_token.id,
        user_id: user_id,
        user_agent: user_agent,
        client_ip: client_ip,
        path: path,
        auth_token: hashed_token)
    
      def self.create_ipmi_rakp_1(bmc_session_id, console_random_id, username)
    head = [
      0x06, 0x00, 0xff, 0x07,  # RMCP Header
      0x06,                    # RMCP+ Authentication Type
      PAYLOAD_RAKP1,           # Payload Type
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00,
    ].pack('C*')
    
              res
        end
      end
    end
  end
end

    
              # Encodes the etype
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_etype
            bn = OpenSSL::BN.new(etype.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
                self
          end