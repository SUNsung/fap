
        
        html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
              cpan_pattern = %r{^http://search\.mcpan\.org/CPAN/(.*)}i
          audit_urls(urls, cpan_pattern) do |match, url|
            problem '#{url} should be `https://cpan.metacpan.org/#{match[1]}`'
          end
    
          def handle_jwt_bearer(req)
        jwt_string = req['client_assertion']
        jwt = JSON::JWT.decode jwt_string, :skip_verification
        o_auth_app = Api::OpenidConnect::OAuthApplication.find_by(client_id: jwt['iss'])
        raise Rack::OAuth2::Server::Authorize::BadRequest(:invalid_request) unless o_auth_app
        public_key = fetch_public_key(o_auth_app, jwt)
        JSON::JWT.decode(jwt_string, JSON::JWK.new(public_key).to_key)
        req.update_param('client_id', o_auth_app.client_id)
        req.update_param('client_secret', o_auth_app.client_secret)
      end
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
          def plugins_string
        UI::ErrorReport.plugins_string
      end
    
      def get_git_info
    git = OpenStruct.new
    git.author = %x{ git config --get user.name  }.strip rescue 'your_username'
    git.email  = %x{ git config --get user.email }.strip rescue 'your_username@example.com'
    git
  end
    
          # Only print require() calls that did actual work.
      # require() returns true on load, false if already loaded.
      if result
        source = caller[0]
        #p source.include?('/lib/polyglot.rb:63:in `require'') => source
        if source.include?('/lib/polyglot.rb:63:in `require'')
          source = caller[1]
        end
    
          if download =~ /.tar.gz/
        prefix = download.gsub('.tar.gz', '').gsub('#{target}/', '')
        untar(download) do |entry|
          next unless out = eval_file(entry, file['files'], prefix)
          File.join(target, out)
        end