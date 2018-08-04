
        
            log = StringIO.new
    @dry_run_started_at = Time.zone.now
    @dry_run_logger = Logger.new(log).tap { |logger|
      logger.formatter = proc { |severity, datetime, progname, message|
        elapsed_time = '%02d:%02d:%02d' % 2.times.inject([datetime - @dry_run_started_at]) { |(x, *xs)|
          [*x.divmod(60), *xs]
        }
    }
    }
    
      def working?
    last_receive_at && last_receive_at > options['expected_receive_period_in_days'].to_i.days.ago && !recent_error_logs?
  end
    
      def index
    if params[:agent_id]
      @agent = current_user.agents.find(params[:agent_id])
      @events = @agent.events.page(params[:page])
    else
      @events = current_user.events.preload(:agent).page(params[:page])
    end
    
      def new
    @user_credential = current_user.user_credentials.build
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
      config.include Rack::Test::Methods
  config.include SpecHelpers
end
    
      it 'should not interfere with normal head requests' do
    expect(head('/')).to be_ok
  end