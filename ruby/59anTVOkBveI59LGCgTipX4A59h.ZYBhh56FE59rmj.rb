
        
        # Let's roll!
SUITE.each do |key, text|
  Benchmark.ips do |x|
    x.report('always thru liquid - #{key}') { always_liquid(text) }
    x.report('conditional liquid - #{key}') { conditional_liquid(text) }
    x.compare!
  end
end

    
          def initialize(runtime, path_or_io, options)
        @runtime = runtime
        @snippets_input = []
        @io = ensure_io(path_or_io)
        @prefixes = options[:prefixes] || {}
        @delayed_messages = []
        @options = options
        @exceptions = []
        @indent = 0
        @timings = {}
      end
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --ignore \'ignored/path\' --exit-threshold \'2\' input/dir')
      end
    
        context 'only newlines' do
      let(:keywords) { 'One\nTwo\r\nThree\nFour Token\n' }
    
      auto_updates true
  depends_on cask: 'homebrew/cask-versions/adobe-photoshop-lightroom600'
    
        def puts(*args)
      STDERR.puts *args unless @silence
    end
    
        private
    
              compare_with_real_token token, session
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS and others
    # Supported browsers:: Firefox 23+, Safari 7+, Chrome 25+, Opera 15+
    #
    # Description:: Content Security Policy, a mechanism web applications
    #               can use to mitigate a broad class of content injection
    #               vulnerabilities, such as cross-site scripting (XSS).
    #               Content Security Policy is a declarative policy that lets
    #               the authors (or server administrators) of a web application
    #               inform the client about the sources from which the
    #               application expects to load resources.
    #
    # More info::   W3C CSP Level 1 : https://www.w3.org/TR/CSP1/ (deprecated)
    #               W3C CSP Level 2 : https://www.w3.org/TR/CSP2/ (current)
    #               W3C CSP Level 3 : https://www.w3.org/TR/CSP3/ (draft)
    #               https://developer.mozilla.org/en-US/docs/Web/Security/CSP
    #               http://caniuse.com/#search=ContentSecurityPolicy
    #               http://content-security-policy.com/
    #               https://securityheaders.io
    #               https://scotthelme.co.uk/csp-cheat-sheet/
    #               http://www.html5rocks.com/en/tutorials/security/content-security-policy/
    #
    # Sets the 'Content-Security-Policy[-Report-Only]' header.
    #
    # Options: ContentSecurityPolicy configuration is a complex topic with
    #          several levels of support that has evolved over time.
    #          See the W3C documentation and the links in the more info
    #          section for CSP usage examples and best practices. The
    #          CSP3 directives in the 'NO_ARG_DIRECTIVES' constant need to be
    #          presented in the options hash with a boolean 'true' in order
    #          to be used in a policy.
    #
    class ContentSecurityPolicy < Base
      default_options default_src: :none, script_src: ''self'',
                      img_src: ''self'', style_src: ''self'',
                      connect_src: ''self'', report_only: false
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
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
    
      it 'should allow setting CSP3 no arg directives' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :block_all_mixed_content => true, :disown_opener => true, :upgrade_insecure_requests => true
    
              record_length = ascii_length.to_i(8)
          record_length = determine_record_length(record_length)
    
      def to_s_extension; 'txz'; end
    
        libs = [ 'install.sh', 'install-path.sh', 'generate-cleanup.sh' ]
    libs.each do |file|
      base = staging_path(File.join(attributes[:prefix]))
      File.write(File.join(base, file), template(File.join('pleaserun', file)).result(binding))
      File.chmod(0755, File.join(base, file))
    end
    
      # Output a zipfile.
  def output(output_path)
    output_check(output_path)
    realpath = Pathname.new(output_path).realdirpath.to_s
    ::Dir.chdir(staging_path) do
      safesystem('zip', '-9r', realpath, '.')
    end
  end # def output
end # class FPM::Package::Tar

    
        if !program.include?('/') and !program_in_path?(program)
      raise ExecutableNotFound.new(program)
    end
    
      def migration_file_name
    '#{migration_name}.rb'
  end
    
        # Returns the width and height in a format suitable to be passed to Geometry.parse
    def to_s
      s = ''
      s << width.to_i.to_s if width > 0
      s << 'x#{height.to_i}' if height > 0
      s << modifier.to_s
      s
    end