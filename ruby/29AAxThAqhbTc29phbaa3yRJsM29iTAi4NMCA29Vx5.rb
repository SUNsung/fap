
        
          it 'no errors without a user' do
    expect(-> { GivenDailyLike.increment_for(nil) }).not_to raise_error
    expect(-> { GivenDailyLike.decrement_for(nil) }).not_to raise_error
  end
    
        # Add permissions and a description to the Staff category.
    
                    raise Errors::VMNoMatchError if vms.empty?
              else
                # String name, just look for a specific VM
                vms << @env.vms[name.to_sym]
                raise Errors::VMNotFoundError, name: name if !vms[0]
              end
            end
          else
            vms = @env.vms_ordered
          end
    
              # Return the registry
          data[:command]
        end
    
            # Initialize the provider to represent the given machine.
        #
        # @param [Vagrant::Machine] machine The machine that this provider
        #   is responsible for.
        def initialize(machine)
        end
    
      task :index do
    doc = File.read('README.md')
    file = 'doc/rack-protection-readme.md'
    Dir.mkdir 'doc' unless File.directory? 'doc'
    puts 'writing #{file}'
    File.open(file, 'w') { |f| f << doc }
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
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end