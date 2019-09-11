
        
            # The path used after unlocking the resource
    def after_unlock_path_for(resource)
      new_session_path(resource)  if is_navigational_format?
    end
    
      # Returns real navigational formats which are supported by Rails
  def navigational_formats
    @navigational_formats ||= Devise.navigational_formats.select { |format| Mime::EXTENSION_LOOKUP[format.to_s] }
  end
    
              path
        end
      end
    
        if last_request_at.is_a? Integer
      last_request_at = Time.at(last_request_at).utc
    elsif last_request_at.is_a? String
      last_request_at = Time.parse(last_request_at)
    end
    
          @sign_out_via = options[:sign_out_via] || Devise.sign_out_via
      @format = options[:format]
    
          klass.devise_modules.each do |mod|
        constant = const_get(mod.to_s.classify)
    
              begin
            lineno = frame.lineno-1
            lines = ::File.readlines(frame.filename)
            frame.pre_context_lineno = [lineno-CONTEXT, 0].max
            frame.pre_context = lines[frame.pre_context_lineno...lineno]
            frame.context_line = lines[lineno].chomp
            frame.post_context_lineno = [lineno+CONTEXT, lines.size].min
            frame.post_context = lines[lineno+1..frame.post_context_lineno]
          rescue
          end
    
      # escape unicode
  content.gsub!(/./) { |c| c.bytesize > 1 ? '\\u{#{c.codepoints.first.to_s(16)}}' : c }
    
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
    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
    RunnerTool.configure
    
        def _send_keys(t, e)
      '#{project.tmux} send-keys -t #{t} #{e} C-m'
    end
  end
end

    
        def _project_root
      project.root if project.root?
    end
    
      it 'creates an instance' do
    expect(subject).to be_a(Tmuxinator::Pane)
  end
    
          # Existant directories which may contain project files
      # Listed in search order
      # Used by `implode` and `list` commands
      def directories
        if environment?
          [environment]
        else
          [xdg, home].select { |d| File.directory? d }
        end
      end
    
        context 'only ~/.tmuxinator exists' do
      it 'is ~/.tmuxinator' do
        allow(described_class).to receive(:environment?).and_return false
        allow(described_class).to receive(:xdg?).and_return false
        allow(described_class).to receive(:home?).and_return true