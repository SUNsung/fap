
        
                SiteSetting.enable_markdown_linkify = false
        cooked = PrettyText.markdown(md, sanitize: false)
        cooked.strip!
        cooked.gsub!(' class=\'lang-auto\'', '')
        cooked.gsub!(/<span class='hashtag'>(.*)<\/span>/, '\\1')
        # we don't care about this
        cooked.gsub!('<blockquote>\n</blockquote>', '<blockquote></blockquote>')
        html.gsub!('<blockquote>\n</blockquote>', '<blockquote></blockquote>')
        html.gsub!('language-ruby', 'lang-ruby')
        # strip out unsupported languages
        html.gsub!(/ class='language-[;f].*'/, '')
    
          headers['Access-Control-Allow-Origin'] = origin || cors_origins[0]
      headers['Access-Control-Allow-Headers'] = 'Content-Type, Cache-Control, X-Requested-With, X-CSRF-Token, Discourse-Visible, User-Api-Key, User-Api-Client-Id'
      headers['Access-Control-Allow-Credentials'] = 'true'
      headers['Access-Control-Allow-Methods'] = 'POST, PUT, GET, OPTIONS, DELETE'
    end
    
          if period_type == :all
        DB.exec <<~SQL
          UPDATE user_stats s
          SET likes_given         = d.likes_given,
              likes_received      = d.likes_received,
              topic_count         = d.topic_count,
              post_count          = d.post_count
    
    describe ContentSecurityPolicy::Builder do
  let(:builder) { described_class.new }
    
        # Make extending these directives no-op, until core includes them in default CSP
    TO_BE_EXTENDABLE = %i[
      connect_src
      default_src
      font_src
      form_action
      frame_ancestors
      frame_src
      img_src
      manifest_src
      media_src
      prefetch_src
      style_src
    ].freeze
    
    module HighlightJs
  HIGHLIGHTJS_DIR ||= '#{Rails.root}/vendor/assets/javascripts/highlightjs/'
    
      skip_before_action(
    :check_xhr,
    :handle_theme,
    :preload_json,
    :redirect_to_login_if_required,
    :verify_authenticity_token,
    only: [:show]
  )
    
      def lookup_api_user(api_key_value, request)
    if api_key = ApiKey.where(key: api_key_value).includes(:user).first
      api_username = header_api_key? ? @env[HEADER_API_USERNAME] : request[API_USERNAME]
    
        it 'returns a label 'Yes' if a given agent is working' do
      stub(@agent).working? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Yes'
    end
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
    end

    
        it 'should generate the correct events url' do
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/trackings')
    end
    
        head 200
  end
    
    class Auth::OmniauthCallbacksController < Devise::OmniauthCallbacksController
  skip_before_action :verify_authenticity_token
    
    module SessionTrackingConcern
  extend ActiveSupport::Concern
    
    class RemoteUnfollowsController < ApplicationController
  layout 'modal'
    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
      # insert data
  fields.each do |field, values|
    updated = '  s.#{field} = ['
    updated << values.map { |v| '\n    %p' % v }.join(',')
    updated << '\n  ]'
    content.sub!(/  s\.#{field} = \[\n(    .*\n)*  \]/, updated)
  end
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('connect-src https://api.mybank.com; default-src none; font-src https://cdn.mybank.net; frame-src self; img-src https://cdn.mybank.net; media-src https://cdn.mybank.net; object-src https://cdn.mybank.net; report-uri /my_amazing_csp_report_parser; sandbox allow-scripts; script-src https://cdn.mybank.net; style-src https://cdn.mybank.net')
    expect(headers['Content-Security-Policy-Report-Only']).to be_nil
  end
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
          attr_reader :name, :path
    
          def has_sidebar
        if @sidebar
          @sidebar.formatted_data.strip.empty? ? false : true
        else
          @sidebar = (@page.sidebar || false)
          !!@sidebar
        end
      end
    
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
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
        def emoji(name)
      if emoji = Gemojione.index.find_by_name(name)
        IO.read(EMOJI_PATHNAME.join('#{emoji['unicode']}.png'))
      else
        fail ArgumentError, 'emoji `#{name}' not found'
      end
    end