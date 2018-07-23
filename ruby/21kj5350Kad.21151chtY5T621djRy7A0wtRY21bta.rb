
        
        CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
        # The entry filter for this collection.
    # Creates an instance of Jekyll::EntryFilter.
    #
    # Returns the instance of Jekyll::EntryFilter for this collection.
    def entry_filter
      @entry_filter ||= Jekyll::EntryFilter.new(site, relative_directory)
    end
    
              if options['blank']
            create_blank_site new_blog_path
          else
            create_site new_blog_path
          end
    
        def style_to_permalink(permalink_style)
      case permalink_style.to_sym
      when :pretty
        '/:categories/:year/:month/:day/:title/'
      when :none
        '/:categories/:title:output_ext'
      when :date
        '/:categories/:year/:month/:day/:title:output_ext'
      when :ordinal
        '/:categories/:year/:y_day/:title:output_ext'
      else
        permalink_style.to_s
      end
    end
    
          def third_party_processors
        self.class.constants - \
          %w(KramdownParser PRIORITIES).map(
            &:to_sym
          )
      end
    
      private
    
      private
    
    class U2fRegistration < ActiveRecord::Base
  belongs_to :user
    
    pidfile = ARGV.shift
main(pidfile, ARGV)

    
      def evernote_consumer_secret
    (config = Devise.omniauth_configs[:evernote]) && config.strategy.consumer_secret
  end
    
        def cron(*args, &blk)
      schedule(:cron, args, &blk)
    end
    
      included do
    helper SortableTableHelper
  end
    
      def index
    if params[:agent_id]
      @agent = current_user.agents.find(params[:agent_id])
      @events = @agent.events.page(params[:page])
    else
      @events = current_user.events.preload(:agent).page(params[:page])
    end
    
        respond_to do |format|
      format.html
      format.json { render json: @services }
    end
  end
    
        if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
    class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
      protected
    
        formulae = ARGV.include?('--installed') ? Formula.installed : Formula
    recursive = ARGV.flag? '--recursive'
    only_installed_arg = ARGV.include?('--installed') &&
                         !ARGV.include?('--include-build') &&
                         !ARGV.include?('--include-test') &&
                         !ARGV.include?('--include-optional') &&
                         !ARGV.include?('--skip-recommended')
    
              # Check if formula's desc starts with formula's name
          if regex_match_group(desc, /^#{@formula_name} /i)
            problem 'Description shouldn't start with the formula name'
          end
    
          def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end
    
        it 'redirects requests with sneaky encoded session cookies' do
      get '/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/path')
    end
  end
    
        it 'leaves normal params untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => 'bar'
      expect(body).to eq('bar')
    end
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
  end
    
        %w[/foo/bar /foo/bar/ / /.f /a.x].each do |path|
      it('does not touch #{path.inspect}') { expect(get(path).body).to eq(path) }
    end
    
      it 'accepts requests with a changing Version header'do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_VERSION' => '1.0'
    get '/', {}, 'rack.session' => session, 'HTTP_VERSION' => '1.1'
    expect(session[:foo]).to eq(:bar)
  end
end

    
        mock_app do
      use Rack::Head
      use(Rack::Config) { |e| e['rack.session'] ||= {}}
      use changer
      use klass
      use detector
      run DummyApp
    end