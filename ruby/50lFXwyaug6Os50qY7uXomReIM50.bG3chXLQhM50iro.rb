
        
                  super(base_dir)
        end
    
          expect(result).to contain_exactly('files/html/500.html')
    end
  end
end

    
          encrypted_token = Base64.decode64(value)
      Encryptor.decrypt(AES256_GCM_OPTIONS.merge(value: encrypted_token))
    end
  end
end

    
        def find(query)
      query = Gitlab::Search::Query.new(query, encode_binary: true) do
        filter :filename, matcher: ->(filter, blob) { blob.binary_filename =~ /#{filter[:regex_value]}$/i }
        filter :path, matcher: ->(filter, blob) { blob.binary_filename =~ /#{filter[:regex_value]}/i }
        filter :extension, matcher: ->(filter, blob) { blob.binary_filename =~ /\.#{filter[:regex_value]}$/i }
      end
    
              @diffable = diffable
          @include_stats = diff_options.delete(:include_stats)
          @project = project
          @diff_options = diff_options
          @diff_refs = diff_refs
          @fallback_diff_refs = fallback_diff_refs
          @repository = project.repository
        end
    
        it 'syncs removed folders to the proper path' do
      paths['/foo'] = [
        { machine: machine_stub('m1'), opts: double('opts_m1') },
        { machine: machine_stub('m2'), opts: double('opts_m2') },
      ]
      paths['/bar'] = [
        { machine: machine_stub('m3'), opts: double('opts_m3') },
      ]
    
    # Gems
require 'checkpoint'
require 'webmock/rspec'
require 'rspec/its'
    
      subject { described_class.new(machine) }
    
            def chown_provisioning_folder
          paths = [
            guest_provisioning_path,
            guest_file_backup_path,
            guest_file_cache_path,
          ]
    
      let(:machine) { iso_env.machine(iso_env.machine_names[0], :dummy) }
  let(:communicator) { VagrantTests::DummyCommunicator::Communicator.new(machine) }
  let(:config)  { double('config') }
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
    namespace :test do
  desc 'Measures test coverage'
  task :coverage do
    rm_f 'coverage'
    ENV['COVERAGE'] = '1'
    Rake::Task['test'].invoke
  end
end
    
    get '/' do
  halt erb(:login) unless params[:user]
  erb :chat, :locals => { :user => params[:user].gsub(/\W/, '') }
end
    
            if unmasked_token?(token)
          compare_with_real_token token, session
    
          def accepts?(env)
        raise NotImplementedError, '#{self.class} implementation pending'
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
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
          class << self
        alias escape_url escape
        public :escape_html
      end
    
            reaction
      end
    
      describe '#random_string' do
    it 'outputs a string of 32 characters' do
      expect(subject.random_string.length).to eq(32)
    end
  end
    
    desc 'Move sass to sass.old, install sass theme updates, replace sass/custom with sass.old/custom'
task :update_style, :theme do |t, args|
  theme = args.theme || 'classic'
  if File.directory?('sass.old')
    puts 'removed existing sass.old directory'
    rm_r 'sass.old', :secure=>true
  end
  mv 'sass', 'sass.old'
  puts '## Moved styles into sass.old/'
  cp_r '#{themes_dir}/'+theme+'/sass/', 'sass', :remove_destination=>true
  cp_r 'sass.old/custom/.', 'sass/custom/', :remove_destination=>true
  puts '## Updated Sass ##'
end
    
    run SinatraStaticServer
