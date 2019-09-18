
        
          def test_pretty_print_overridden_by_inspect
    subtopic = Class.new(Topic) do
      def inspect
        'inspecting topic'
      end
    end
    actual = +''
    PP.pp(subtopic.new, StringIO.new(actual))
    assert_equal 'inspecting topic\n', actual
  end
    
            stderr = capture(:stderr) { run_rake_routes }
        assert_match(/DEPRECATION WARNING: Using `bin\/rake routes` is deprecated and will be removed in Rails 6.1/, stderr)
      end
    
      # GET /resource/unlock/new
  def new
    self.resource = resource_class.new
  end
    
      def resource_params
    params.fetch(resource_name, {})
  end
    
      def app
    Rails.application
  end
end

    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
            users.any?
      end
    
            if is_navigational_format?
          session.delete(session_key)
        else
          session[session_key]
        end
      end
    
          included do
        include Devise::Controllers::ScopedViews
      end
    
          module ClassMethods
        # Attempt to find a user by password reset token. If a user is found, return it
        # If a user is not found, return nil
        def with_reset_password_token(token)
          reset_password_token = Devise.token_generator.digest(self, :reset_password_token, token)
          to_adapter.find_first(reset_password_token: reset_password_token)
        end
    
          private
    
        let(:validator) { described_class.new(attributes: [attribute]) }
    let(:record)    { double(errors: errors) }
    let(:errors)    { double(add: nil) }
    let(:value)     { '' }
    let(:attribute) { :foo }
    
      describe 'POST #unfollow' do
    let(:scopes) { 'write:follows' }
    let(:other_account) { Fabricate(:user, email: 'bob@example.com', account: Fabricate(:account, username: 'bob')).account }
    
    require 'rails_helper'
    
      def refresh_poll
    ActivityPub::FetchRemotePollService.new.call(@poll, current_account) if user_signed_in? && @poll.possibly_stale?
  end
end

    
          def spec_sets
        @spec_sets ||= begin
          analyzer.send(:update_repositories) if repo_update?(:default => true)
          aggregate = Source::Aggregate.new(analyzer.sources)
          installed_pods.map do |pod_name|
            aggregate.search(Dependency.new(pod_name))
          end.compact.uniq
        end
      end
    
          GLOB_PATTERNS = {
        :readme              => 'readme{*,.*}'.freeze,
        :license             => 'licen{c,s}e{*,.*}'.freeze,
        :source_files        => '*{#{SOURCE_FILE_EXTENSIONS.join(',')}}'.freeze,
        :public_header_files => '*{#{HEADER_EXTENSIONS.join(',')}}'.freeze,
        :podspecs            => '*.{podspec,podspec.json}'.freeze,
        :docs                => 'doc{s}{*,.*}/**/*'.freeze,
      }.freeze
    
          # gets input from $stdin
      #
      def gets
        $stdin.gets
      end
    
        def self.reader(input, output)
      Thread.new do
        buf = ''
        begin
          loop do
            buf << input.readpartial(4096)
            loop do
              string, separator, buf = buf.partition(/[\r\n]/)
              if separator.empty?
                buf = string
                break
              end
              output << (string << separator)
            end
          end
        rescue EOFError, IOError
          output << (buf << $/) unless buf.empty?
        end
      end
    end
    
        it 'lists a repository (checking the output)' do
      config.repos_dir = fixture('spec-repos')
      output = run_command('repo', 'list')
      output.should.include? '- Type:'
    end
    
          base.before do
        tmp_repos_path.mkpath
      end
    end
  end
end

    
            # @return [Hash{Source => Array<Specification>}] the specifications grouped by spec repo source.
        #
        attr_reader :specs_by_source
    
          def header_hash
        {
          :Type => 'PSGroupSpecifier',
          :Title => sanitize_encoding(header_title),
          :FooterText => sanitize_encoding(header_text),
        }
      end
    
        assert_match /New/, last_response.body, ''New' link is blocked in pages template'
    
      test 'accessing non-existant directory redirects to create index page' do
    get '/foo/'
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
          wikip = wiki_page(params[:splat].first)
      @path = wikip.path
      @name = wikip.name
      wiki  = wikip.wiki
      @page = wiki.paged(@name, @path)
      sha1  = params[:sha1]
      sha2  = params[:sha2]