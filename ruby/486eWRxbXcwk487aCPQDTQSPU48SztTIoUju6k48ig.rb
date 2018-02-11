
        
            # Returns the unwrapped subject and body of the last commit
    # <b>DEPRECATED:</b> Use <tt>last_git_commit_message</tt> instead.
    def self.last_git_commit
      UI.important('`last_git_commit` is deprecated. Please use `last_git_commit_message` instead.')
      last_git_commit_message
    end
    
          it 'renders HTML' do
        expect(render(options, screenshots)).to match(/<html>/)
      end
    end
    
          xcode_project = Xcodeproj::Project.open(@project_file_path)
      target = xcode_project.targets.find { |t| t.name == @target_name }
    
            expect(result).to eq('hg parent --template '{node|short}'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template '{node|short}'')
      end
    
          it 'gets the correct version number for 'TargetATests'' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_version_number(xcodeproj: '.xcproject', target: 'TargetATests')
        end').runner.execute(:test)
        expect(result).to eq('4.3.2')
      end
    
      class Worker
    attr_reader :thread, :id, :agent, :config, :mutex, :scheduler, :restarting
    
      included do
    include Oauthable
    
        # replace CSS rule blocks matching rule_prefix with yield(rule_block, rule_pos)
    # will also include immediately preceding comments in rule_block
    #
    # option :comments -- include immediately preceding comments in rule_block
    #
    # replace_rules('.a{ \n .b{} }', '.b') { |rule, pos| '>#{rule}<'  } #=> '.a{ \n >.b{}< }'
    def replace_rules(less, selector = SELECTOR_RE, options = {}, &block)
      options       = {prefix: true, comments: true}.merge(options || {})
      less          = less.dup
      s             = CharStringScanner.new(less)
      rule_re       = if options[:prefix]
                        /(?:#{selector}[#{SELECTOR_CHAR})=(\s]*?#{RULE_OPEN_BRACE_RE})/
                      else
                        /#{selector}[\s]*#{RULE_OPEN_BRACE_RE}/
                      end
      rule_start_re = if options[:comments]
                        /(?:#{COMMENT_RE}*)^#{rule_re}/
                      else
                        /^#{rule_re}/
                      end
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
          metadata_master_container_path.join(cask_version)
    end
    
    module Hbc
  class DSL
    class Container
      VALID_KEYS = Set.new [
        :type,
        :nested,
      ]
    
        export LANG=en_US.UTF-8
    DOC
  else
    STDERR.puts <<-DOC
    \e[33mWARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
              If there is multiple cache for various versions of the requested pod,
          you will be asked which one to clean. Use `--all` to clean them all.
    
            # Split out the targets into app and test targets
        test_targets, app_targets = project.native_targets.
                              sort_by { |t| t.name.downcase }.
                              partition(&:test_target_type?)
    
            TEMPLATE_REPO = 'https://github.com/CocoaPods/pod-template.git'.freeze
        TEMPLATE_INFO_URL = 'https://github.com/CocoaPods/pod-template'.freeze
        CREATE_NEW_POD_INFO_URL = 'http://guides.cocoapods.org/making/making-a-cocoapod'.freeze
    
          def self.options
        [
          ['--update', 'Run `pod repo update` before listing'],
          ['--stats',  'Show additional stats (like GitHub watchers and forks)'],
        ].concat(super)
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_scripting
    #
    # Automatically escapes Rack::Request#params so they can be embedded in HTML
    # or JavaScript without any further issues. Calls +html_safe+ on the escaped
    # strings if defined, to avoid double-escaping in Rails.
    #
    # Options:
    # escape:: What escaping modes to use, should be Symbol or Array of Symbols.
    #          Available: :html (default), :javascript, :url
    class EscapedParams < Base
      extend Rack::Utils
    
        it 'accepts requests with a single session cookie' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=SESSION_TOKEN'
      expect(last_response).to be_ok
    end
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
  end
    
          it 'should remain unchanged as ASCII-8BIT' do
        body = @app.call({ 'PATH_INFO' => '/'.encode('ASCII-8BIT') })[2][0]
        expect(body).to eq('ASCII-8BIT')
      end
    end
  end
end

    
      it 'accepts requests with the same Accept-Language header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    expect(session).not_to be_empty
  end
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end