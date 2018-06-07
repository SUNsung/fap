        def determine_default_helper_class(name)
          determine_constant_from_test_name(name) do |constant|
            Module === constant && !(Class === constant)
          end
        end
    
          def initialize
        @log_tags = []
    
          # Calls this block after #reset is called on the instance. Used for resetting external collaborators, like Time.zone.
      def resets(&block)
        set_callback :reset, :after, &block
      end
    
        test 'head :processing (102) does not return a content-type header' do
      headers = HeadController.action(:processing).call(Rack::MockRequest.env_for('/')).second
      assert_nil headers['Content-Type']
      assert_nil headers['Content-Length']
    end
    
        rescue_from StandardError, with: :handle_exception_with_mailer_class
    
      # Skips the current run on Rubinius using Minitest::Assertions#skip
  private def rubinius_skip(message = '')
    skip message if RUBY_ENGINE == 'rbx'
  end
  # Skips the current run on JRuby using Minitest::Assertions#skip
  private def jruby_skip(message = '')
    skip message if defined?(JRUBY_VERSION)
  end
end

    
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
    
          # Keep a list of subclasses of Jekyll::Command every time it's inherited
      # Called automatically.
      #
      # base - the subclass
      #
      # Returns nothing
      def inherited(base)
        subclasses << base
        super(base)
      end
    
          # Handling Reading
      'safe'                => false,
      'include'             => ['.htaccess'],
      'exclude'             => %w(
        Gemfile Gemfile.lock node_modules vendor/bundle/ vendor/cache/ vendor/gems/
        vendor/ruby/
      ),
      'keep_files'          => ['.git', '.svn'],
      'encoding'            => 'utf-8',
      'markdown_ext'        => 'markdown,mkdown,mkdn,mkd,md',
      'strict_front_matter' => false,
    
          def parse_content
        add_text @src.scan(%r!\A.*\n!)
      end
      define_parser(:content, %r!\A!)
    end
  end
end
    
        # Construct a Hash of key-value pairs which contain a mapping between
    #   a key in the URL template and the corresponding value for this document.
    #
    # Returns the Hash of key-value pairs for replacement in the URL.
    def url_placeholders
      @url_placeholders ||= Drops::UrlDrop.new(self)
    end
    
        def execute(args)
    
    #
# Railties
#
    
        inp.attributes.keys.each do |ikey|
      if (ikey.downcase == 'value')
        inp[ikey] = ''
        next
      end
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 21 and pkt.tcp_dport != 21)
    s = find_session((pkt.tcp_sport == 21) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'ftp'
    
          # Inspired by https://github.com/nov/openid_connect_sample/blob/master/app/controllers/connect/clients_controller.rb#L24
      def create
        registrar = OpenIDConnect::Client::Registrar.new(request.url, params)
        client = Api::OpenidConnect::OAuthApplication.register! registrar
        render json: client.as_json(root: false)
      end
    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
          def self.options
        [
          ['--update', 'Run `pod repo update` before listing'],
          ['--stats',  'Show additional stats (like GitHub watchers and forks)'],
        ].concat(super)
      end