
        
                def test_url_sub_key_for_sqlite3
          spec = resolve :production, 'production' => { 'url' => 'sqlite3:foo?encoding=utf8' }
          assert_equal({
            'adapter'  => 'sqlite3',
            'database' => 'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
          # Make list points stand on their own line
      formatted.gsub!(/[ ]*([*]+) ([^*]*)/) { '  #{$1} #{$2.strip}\n' }
      formatted.gsub!(/[ ]*([#]+) ([^#]*)/) { '  #{$1} #{$2.strip}\n' }
    
      private
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
      p.action do |args, _|
    if args.empty?
      Jekyll.logger.error 'A subcommand is required.'
      puts p
      abort
    else
      subcommand = args.first
      unless p.has_command? subcommand
        Jekyll.logger.abort_with 'fatal: 'jekyll #{args.first}' could not' \
          ' be found. You may need to install the jekyll-#{args.first} gem' \
          ' or a related gem to be able to use this subcommand.'
      end
    end
  end
end

    
          #
      # Require a gem or file if it's present, otherwise silently fail.
      #
      # names - a string gem name or array of gem names
      #
      def require_if_present(names)
        Array(names).each do |name|
          begin
            require name
          rescue LoadError
            Jekyll.logger.debug 'Couldn't load #{name}. Skipping.'
            yield(name, version_constraint(name)) if block_given?
            false
          end
        end
      end
    
        def save(options = {})
      return super unless dry_run?
      perform_validations(options)
    end
    
      def present(payload)
    if payload.is_a?(Hash)
      payload = ActiveSupport::HashWithIndifferentAccess.new(payload)
      MAIN_KEYS.each do |key|
        return { :title => payload[key].to_s, :entries => present_hash(payload, key) } if payload.has_key?(key)
      end
    
      def index
    if params[:agent_id]
      @agent = current_user.agents.find(params[:agent_id])
      @events = @agent.events.page(params[:page])
    else
      @events = current_user.events.preload(:agent).page(params[:page])
    end
    
      private
    
    RSpec.describe BlockDomainService do
  let(:bad_account) { Fabricate(:account, username: 'badguy666', domain: 'evil.org') }
  let(:bad_status1) { Fabricate(:status, account: bad_account, text: 'You suck') }
  let(:bad_status2) { Fabricate(:status, account: bad_account, text: 'Hahaha') }
  let(:bad_attachment) { Fabricate(:media_attachment, account: bad_account, status: bad_status2, file: attachment_fixture('attachment.jpg')) }
    
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
    
            MSG = 'Use only a single space inside array percent literal.'.freeze
        MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX =
          /(?:[\S&&[^\\]](?:\\ )*)( {2,})(?=\S)/
    
            def autocorrect(node)
          # Regexp#match can take a second argument, but this cop doesn't
          # register an offense in that case
          return unless node.first_argument.regexp_type?
    
              FROZEN_STRING_LITERAL_TYPES.include?(node.type) &&
            frozen_string_literals_enabled?
        end
      end
    end
  end
end
