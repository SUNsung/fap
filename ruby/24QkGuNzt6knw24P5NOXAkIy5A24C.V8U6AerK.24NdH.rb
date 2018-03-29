
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
          theme.create!
      Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
        ' is ready for you in #{theme.path.to_s.cyan}!'
      Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
    end
    # rubocop:enable Metrics/AbcSize
  end
end

    
        context 'GIT-SVN repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(true)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(false)
      end
    
          it 'pass a custom build number to the tool' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: 24, xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
        def self.join(*args)
      PARSER.join(*args)
    end
    
        def register_rails_engine
      require 'bootstrap-sass/engine'
    end
    
          # move bootstrap/_bootstrap.scss to _bootstrap.scss adjusting import paths
      main_from = '#{save_to}/_bootstrap.scss'
      main_to   = File.expand_path('#{save_to}/../_bootstrap.scss')
      save_file main_to, File.read(main_from).gsub(/ '/, ' 'bootstrap/')
      File.delete(main_from)
    
        unless user
      EmailInviter.new(email, inviter).send!
      flash[:notice] = 'invitation sent to #{email}'
    else
      flash[:notice]= 'error sending invite to #{email}'
    end
    redirect_to user_search_path, :notice => flash[:notice]
  end
    
    <script>
  // reading
  var es = new EventSource('/stream');
  es.onmessage = function(e) { $('#chat').append(e.data + '\n') };
    
    module Sinatra
  class Application < Base
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('DENY')
  end
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
  end
    
      it 'comparison of Accept-Language header is not case sensitive' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'A'
    expect(session).not_to be_empty
  end
    
      # Seed global randomization in this process using the `--seed` CLI option.
  # Setting this allows you to use `--seed` to deterministically reproduce
  # test failures related to randomization by passing the same `--seed` value
  # as the one that triggered the failure.
  Kernel.srand config.seed
    
      def self.plugin_type
    'codec'
  end
    
      module Config0
    def _
      elements[0]
    end