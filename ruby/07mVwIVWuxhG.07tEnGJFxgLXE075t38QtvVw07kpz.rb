
        
              def delete(url_or_path, params = nil, body = nil)
        response = request(:delete) do |req|
          req.url(url_or_path)
          req.options.params_encoder = Faraday::NestedParamsEncoder if params
          req.params = params if params
          req.body = body.to_json if body
          req.headers['Content-Type'] = 'application/json' if body
        end
        handle_response(response)
      end
    
            resps = Spaceship::ConnectAPI.get_builds(filter: filter, includes: includes, limit: limit, sort: sort).all_pages
        return resps.map(&:to_models).flatten
      end
    
    module Spaceship
  class ConnectAPI
    module Provisioning
      class Client < Spaceship::ConnectAPI::Client
        def self.instance
          # Verify there is a token or a client that can be used
          if Spaceship::ConnectAPI.token
            if @client.nil? || @client.token != Spaceship::ConnectAPI.token
              @client = Spaceship::ConnectAPI::Provisioning::Client.new(token: Spaceship::ConnectAPI.token)
            end
          elsif Spaceship::Portal.client
            # Initialize new client if new or if team changed
            if @client.nil? || @client.team_id != Spaceship::Portal.client.team_id
              @client = Spaceship::ConnectAPI::Provisioning::Client.client_with_authorization_from(Spaceship::Portal.client)
            end
          end
    
            add_warning 'Download uses GitHub releases, #{add_appcast}'
      when %r{sourceforge.net/(\S+)}
        return if cask.version.latest?
    
          def find_matching_tag(tag)
        # Used primarily by developers testing beta macOS releases.
        if OS::Mac.prerelease? && ARGV.skip_or_later_bottles?
          generic_find_matching_tag(tag)
        else
          generic_find_matching_tag(tag) ||
            find_older_compatible_tag(tag)
        end
      end
    
          class MpiCheck < FormulaCop
        def audit_formula(_node, _class_node, _parent_class_node, body_node)
          # Enforce use of OpenMPI for MPI dependency in core
          return unless formula_tap == 'homebrew-core'
    
      context 'When auditing formula text' do
    it 'with both openssl and libressl optional dependencies' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          url 'https://brew.sh/foo-1.0.tgz'
          homepage 'https://brew.sh'
    
      def patch(strip = :p1, src = nil, &block)
    p = Patch.create(strip, src, &block)
    dependency_collector.add(p.resource) if p.is_a? ExternalPatch
    patches << p
  end