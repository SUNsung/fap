
        
          def command
    abort 'This command requires a command argument' if ARGV.empty?
    
        mode = OpenStruct.new
    mode.dry_run = true if ARGV.dry_run?
    
              private
    
              # Decodes the e_data from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_e_data(input)
            input.value[0].value
          end
        end
      end
    end
  end
end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
      task :all => [:readmes, :index]
end
    
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
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)

    
        def poster
      'poster='#{@poster}'' if @poster
    end