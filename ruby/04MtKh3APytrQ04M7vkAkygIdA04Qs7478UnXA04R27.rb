
        
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
    
      s.summary       = 'A simple, blog aware, static site generator.'
  s.description   = 'Jekyll is a simple, blog aware, static site generator.'
    
            # Returns the UID in a normalized form.
        #
        # 1. Excess spaces are stripped
        # 2. The string is downcased (for case-insensitivity)
        def self.normalize_uid(uid)
          ::Gitlab::Auth::LDAP::DN.normalize_value(uid)
        rescue ::Gitlab::Auth::LDAP::DN::FormatError => e
          Rails.logger.info('Returning original UID \'#{uid}\' due to error during normalization attempt: #{e.message}')
    
          def valid_access_token?(scopes: [])
        validate_access_token!(scopes: scopes)
    
            sql = <<-SQL
          UPDATE ci_stages SET status = (#{status_sql})
            WHERE ci_stages.status IS NULL
            AND ci_stages.id BETWEEN #{start_id.to_i} AND #{stop_id.to_i}
        SQL
    
          def initialize(badge)
        @badge = badge
      end
    
              @sha = @project.commit(@ref).try(:sha)
        end