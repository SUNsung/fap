
        
            Group.refresh_automatic_groups!(:moderators)
    gu = GroupUser.find_by(user_id: moderator.id, group_id: Group::AUTO_GROUPS[:moderators])
    
        def base_url
      context[:base_url]
    end
    
            doc
      end
    end
  end
end

    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
      until to_boolean(IS_EMPTY[proc])
    array.push(FIRST[proc])
    proc = REST[proc]
  end
    
        # use Feedbag as a backup to Google Feeds Api
    if rss_url.nil?
      rss_url = Feedbag.find(web_url).first
      if rss_url.nil?
        suggested_paths = ['/rss', '/feed', '/feeds', '/atom.xml', '/feed.xml', '/rss.xml', '.atom']
        suggested_paths.each do |suggested_path|
          rss_url = Feedbag.find('#{web_url.chomp('/')}#{suggested_path}').first
          break if rss_url
        end
      end
    end
  end
    
    namespace :bower do
    
      # Generate digests for assets URLs.
  config.assets.digest = true
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
        # Pulled from Rack::ShowExceptions in order to override TEMPLATE.
    # If Rack provides another way to override, this could be removed
    # in the future.
    def pretty(env, exception)
      req = Rack::Request.new(env)
    
          def encrypt(value)
        options[:encryptor].hexdigest value.to_s
      end
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
      it 'allows for a custom authenticity token param' do
    mock_app do
      use Rack::Protection::AuthenticityToken, :authenticity_param => 'csrf_param'
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, ['hi']] }
    end
    
        # test `get %r{/(.+?)/([0-9a-f]{40})} do` in app.rb
    get '/' + page_c.escaped_url_path + '/' + page_c.version.to_s
    assert last_response.ok?
    assert_match /create_msg/, last_response.body
    
    context 'Precious::Views::LatestChanges' do
  include Rack::Test::Methods
  
  def app
    Precious::App
  end
  
  setup do
    @path = cloned_testpath('examples/lotr.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {:latest_changes_count => 10})
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, true
    
        post '/edit/' + CGI.escape('한글'), :page => 'k', :content => '바뀐 text',
         :format                            => 'markdown', :message => 'ghi'
    follow_redirect!
    assert last_response.ok?
    
      # replace name version and date
  replace_header(head, :name)
  replace_header(head, :version)
  replace_header(head, :date)
  #comment this out if your rubyforge_project has a different name
  replace_header(head, :rubyforge_project)
    
    ## -- Rsync Deploy config -- ##
# Be sure your public key is listed in your server's ~/.ssh/authorized_keys file
ssh_user       = 'user@domain.com'
ssh_port       = '22'
document_root  = '~/website.com/'
rsync_delete   = false
rsync_args     = ''  # Any extra arguments to pass to rsync
deploy_default = 'rsync'
    
    class SinatraStaticServer < Sinatra::Base
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
    module OctopressFilters
  def self.pre_filter(page)
    if page.ext.match('html|textile|markdown|md|haml|slim|xml')
      input = BacktickCodeBlock::render_code_block(page.content)
      page.content = input.gsub /(<figure.+?>.+?<\/figure>)/m do
        TemplateWrapper::safe_wrap($1)
      end
    end
  end
  def self.post_filter(page)
    if page.ext.match('html|textile|markdown|md|haml|slim|xml')
      page.output = TemplateWrapper::unwrap(page.output)
    end
  end
    
        execute 'restart-sidekiq' do 
      command %Q{ 
        echo 'sleep 20 && monit -g #{app}_sidekiq restart all' | at now 
      }
    end
  end 
end

    
          def create_worker_spec
        template_file = File.join(
            'spec/workers',
            class_path,
            '#{file_name}_worker_spec.rb'
        )
        template 'worker_spec.rb.erb', template_file
      end
    
        def match(request_method, path)
      case matcher
      when String
        {} if path == matcher
      else
        if path_match = path.match(matcher)
          Hash[path_match.names.map(&:to_sym).zip(path_match.captures)]
        end
      end
    end
  end
end

    
          # Parse through mail to get the from/sender headers
      mail = Mail.new(raw_message.split('\r\n\r\n', 2).first)
      from_headers = {'from' => mail.from, 'sender' => mail.sender}
      authenticated_domain = identity.server.find_authenticated_domain_from_headers(from_headers)
    
      def flash_now(type, message, options = {})
    respond_to do |wants|
      wants.html do
        flash.now[type] = message
        if options[:render_action]
          render options[:render_action]
        end
      end
      wants.json { render :json => {:flash => {type => message}} }
    end
  end
    
      def check
    if @domain.check_dns(:manual)
      redirect_to_with_json [organization, @server, :domains], :notice => 'Your DNS records for #{@domain.name} look good!'
    else
      redirect_to_with_json [:setup, organization, @server, @domain], :alert => 'There seems to be something wrong with your DNS records. Check below for information.'
    end
  end
    
      def new
    @http_endpoint = @server.http_endpoints.build
  end
    
      def safe_params
    params.require(:ip_pool).permit(:name, :default)
  end
    
      def deliveries
    render :json => {:html => render_to_string(:partial => 'deliveries', :locals => {:message => @message})}
  end
    
          organization_domains = server.organization.domains.verified.order(:name)
      unless organization_domains.empty?
        s << '<optgroup label='Organization Domains'>'
        for domain in organization_domains
          selected = domain == selected_domain ? 'selected='selected'' : ''
          s << '<option value='#{domain.id}' #{selected}>#{domain.name}</option>'
        end
        s << '</optgroup>'
      end